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
  int N, i, j;

  while (scanf("%d %d %d", &N, &i, &j) != EOF) {
    int a = min(i, j);
    int b = max(i, j);
    int rounds = 1;

    while (a + 1 != b) {
      if (a & 1) a++;
      if (b & 1) b++;

      a /= 2;
      b /= 2;
      rounds++;
    }

    printf("%d\n", rounds);
  }
}
