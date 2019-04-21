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
  int n;
  int arr[1005];

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    int a;

    scanf("%d", &a);
    arr[i] = (a & 1) ? a : a - 1;
  }

  for (int i=0; i<n; i++) {
    printf("%d", arr[i]);
    if (i < n-1) printf(" ");
    if (i == n-1) printf("\n");
  }
}
