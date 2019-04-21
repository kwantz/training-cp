#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1e9
#define EPS 1e-9

#define initDP(arr) memset(arr, -1, sizeof arr)
#define clearArr(arr) memset(arr, 0, sizeof arr)

int main() {
  int x, y;

  while (scanf("%d %d", &x, &y)) {
    if (x == 0 && y == 0) break;

    if (x + y == 13)
      printf("Never speak again.\n");

    else if (x < y)
      printf("Left beehind.\n");

    else if (x > y)
      printf("To the convention.\n");

    else
      printf("Undecided.\n");
  }
}
