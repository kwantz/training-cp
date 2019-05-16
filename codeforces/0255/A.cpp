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
  int chest = 0;
  int biceps = 0;
  int back = 0;

  int n, a;
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    scanf("%d", &a);
    switch (i % 3) {
      case 0: chest += a; break;
      case 1: biceps += a; break;
      case 2: back += a; break;
    }
  }

  if (chest > biceps && chest > back) printf("chest\n");
  if (biceps > chest && biceps > back) printf("biceps\n");
  if (back > biceps && back > chest) printf("back\n");
}
