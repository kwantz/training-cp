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
  float H, U, D, F;
  while (scanf("%f %f %f %f", &H, &U, &D, &F) != EOF) {
    if (H == 0) break;

    int day = 1;
    float I = 0;
    float fatigue = U * F / 100;
    while (I + U <= H && I + U - D >= 0) {
      day++;
      I += U - D;
      U -= fatigue;
    }

    if (I + U - D < 0)
      printf("failure on day %d\n", day);

    else
      printf("success on day %d\n", day);
  }
}
