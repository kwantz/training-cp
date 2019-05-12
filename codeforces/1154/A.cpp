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
  int arr[4];

  for (int i=0; i<4; i++)
    scanf("%d", &arr[i]);

  sort(arr, arr + 4);

  int a = arr[3] - arr[2];
  int b = arr[0] - a;
  int c = arr[1] - a;

  printf("%d %d %d\n", a, b, c);
}
