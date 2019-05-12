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
  int x, y, z;
  int a, b, c;

  scanf("%d %d %d", &x, &y, &z);
  scanf("%d %d %d", &a, &b, &c);

  a -= x;
  b -= (y - a);

  if (a < 0 || b < 0 || b + c < z) printf("NO\n");
  else printf("YES\n");
}
