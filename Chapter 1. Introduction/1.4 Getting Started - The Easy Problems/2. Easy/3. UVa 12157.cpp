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
  int T;
  int tcase = 1;
  scanf("%d", &T);

  while (T--) {
    int N;
    int mile = 0;
    int juice = 0;

    scanf("%d", &N);
    while (N--) {
      int duration;
      scanf("%d", &duration);

      mile += (duration / 30) + 1;
      juice += (duration / 60) + 1;
    }

    printf("Case %d: ", tcase++);

    if (mile * 10 < juice* 15)
      printf("Mile %d\n", mile * 10);

    else if (mile * 10 > juice* 15)
      printf("Juice %d\n", juice* 15);

    else
      printf("Mile Juice %d\n", mile * 10);
  }
}
