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

int divisor(int n) {
  int results = 2;
  int k = sqrt(n);

  for (int i=2; i<=k; i++) {
    if (n % i != 0) continue;
    if (n / i == i) results++;
    else results += 2;
  }

  return results-1;
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", divisor(n));
}
