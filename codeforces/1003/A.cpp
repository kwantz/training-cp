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
  int coins[105];
  memset(coins, 0, sizeof coins);

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    int a;
    scanf("%d", &a);
    coins[a]++;
  }

  int maxi = 0;
  for (int i=1; i<=100; i++)
    maxi = max(maxi, coins[i]);

  printf("%d\n", maxi);
}
