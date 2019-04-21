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
  vii vec;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    int a, b;
    scanf("%d %d", &a, &b);

    vec.pb(mp(a, b));
  }

  sort(vec.begin(), vec.end());

  int maxi = vec[0].second;
  for (int i=1; i<n; i++) {
    maxi = (maxi <= vec[i].second) ? vec[i].second : vec[i].first;
  }

  printf("%d\n", maxi);
}
