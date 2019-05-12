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
  int T;
  scanf("%d", &T);

  while (T--) {
    int Ng, Nm, a;
    scanf("%d %d", &Ng, &Nm);

    int maxig = -INF;
    int maxim = -INF;

    while (Ng--) {
      scanf("%d", &a);
      maxig = max(maxig, a);
    }

    while (Nm--) {
      scanf("%d", &a);
      maxim = max(maxim, a);
    }

    if (maxig >= maxim) printf("Godzilla\n");
    else printf("MechaGodzilla\n");
  }
}
