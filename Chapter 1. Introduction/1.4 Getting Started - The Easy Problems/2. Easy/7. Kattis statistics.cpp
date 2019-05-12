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
  int n;
  int tcase = 1;
  while (scanf("%d", &n) != EOF) {
    int mini = INF;
    int maxi = -INF;

    while (n--) {
      int a;
      scanf("%d", &a);

      mini = min(mini, a);
      maxi = max(maxi, a);
    }

    printf("Case %d: %d %d %d\n", tcase++, mini, maxi, maxi - mini);
  }
}
