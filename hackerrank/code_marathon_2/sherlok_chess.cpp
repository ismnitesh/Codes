#include<bits/stdc++.h>
using namespace std;
struct P {
  int x, y;
  int c;
};

int bfs( P s, P t ) {
  queue< P > q;

  q.push( s );
  while ( !q.empty() ) {
    s = q.front();
    q.pop();
    if ( s.x < 0 || s.x > 9 || s.y < 0 || s.y > 9 ) {
      continue;
    }
    if ( s.x == t.x && s.y == t.y ) {
      return s.c;
    }

    q.push( ( P ) { s.x + 1, s.y + 2, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x + 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x + 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y - 2, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y - 1, s.c + 1 } );
    q.push( ( P ) { s.x - 2, s.y + 1, s.c + 1 } );
    q.push( ( P ) { s.x - 1, s.y + 2, s.c + 1 } );
  }
  return 0;
}

int main() {
  int n,x1,x2,y1,y2;

  scanf( "%d", &n );
  while ( n-- ) {
    scanf( "%d%d%d%d",&x1,&y1,&x2,&y2);

    printf( "%d\n", 3*bfs(( P ) { x1, y1 },( P ){x2,y2}));
  }

  return 0;
}