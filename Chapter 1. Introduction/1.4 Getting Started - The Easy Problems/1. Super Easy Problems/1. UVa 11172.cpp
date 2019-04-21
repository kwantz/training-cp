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
  int t, a, b;

  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &a, &b);

    if (a < b) printf("<");
    if (a > b) printf(">");
    if (a == b) printf("=");

    printf("\n");
  }
}
