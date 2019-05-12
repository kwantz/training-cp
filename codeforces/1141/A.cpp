#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1e9
#define EPS 1e-9

#define pb push_back
#define mp make_pair

#define initDP(arr) memset(arr, -1, sizeof arr)
#define clearArr(arr) memset(arr, 0, sizeof arr)

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  if (m % n != 0) {
    printf("-1\n");
    return 0;
  }

  int x = 0;
  int y = 0;
  int a = m / n;

  while (a % 2 == 0) {
    x++;
    a /= 2;
  }

  while (a % 3 == 0) {
    y++;
    a /= 3;
  }

  if (a == 1) printf("%d\n", x + y);
  else printf("-1\n");
}
