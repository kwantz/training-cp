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

#define price(p, a, b, c, d, k) p * (sin(a * k + b) + cos(c * k + d) + 2)

int main() {
  int p, a, b, c, d, n;
  while (scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF) {
    float max_decline = -INF;
    float maxi = -INF;
    float mini = INF;
    float arr[n];

    for (int i=1; i<=n; i++) {
      arr[i - 1] = price(p, a, b, c, d, i);
    }

    maxi = mini = arr[0];
    for (int i=1; i<n; i++) {
      if (arr[i] > maxi)
        maxi = mini = arr[i];

      else if (arr[i] < mini) {
        mini = arr[i];
        max_decline = max(max_decline, maxi - mini);
      }
    }

    if (max_decline == -INF) printf("0.00\n");
    else printf("%0.10f\n", max_decline);
  }
}
