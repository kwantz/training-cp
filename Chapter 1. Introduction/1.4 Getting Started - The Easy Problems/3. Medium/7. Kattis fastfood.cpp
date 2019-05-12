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
    int n, m;
    scanf("%d %d", &n, &m);

    int prizes[n];
    vector<int> stickers[n];
    for (int i=0; i<n; i++) {
      int a, b;
      scanf("%d", &a);
      while (a--) {
        scanf("%d", &b);
        stickers[i].pb(b);
      }
      scanf("%d", &prizes[i]);
    }

    map<int,int> collected;
    for (int i=0; i<m; i++) {
      int a;
      scanf("%d", &a);
      collected[i+1] = a;
    }

    int total = 0;
    for (int i=0; i<n; i++) {
      int mini = INF;
      for (int j=0; j<stickers[i].size(); j++)
        mini = min(mini, collected[stickers[i][j]]);

      total += (mini * prizes[i]);
    }

    printf("%d\n", total);
  }
}
