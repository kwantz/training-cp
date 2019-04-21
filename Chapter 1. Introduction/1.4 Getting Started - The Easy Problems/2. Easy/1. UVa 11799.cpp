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
  int T;
  int tcase = 1;
  scanf("%d", &T);

  while (T--) {
    int N, c;
    int maxi = -INF;
    scanf("%d", &N);

    while (N--) {
      scanf("%d", &c);
      maxi = max(maxi, c);
    }

    printf("Case %d: %d\n", tcase++, maxi);
  }
}
