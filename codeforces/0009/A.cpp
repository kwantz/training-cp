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
  int Y, W, A, B;
  int maxi;

  scanf("%d %d", &Y, &W);
  maxi = max(Y, W);

  A = 6 - maxi + 1;
  B = 6;

  if (A % 2 == 0) { A /= 2; B /= 2; }
  if (A % 3 == 0) { A /= 3; B /= 3; }
  printf("%d/%d\n", A, B);
}
