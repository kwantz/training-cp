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
  int t;
  int total = 0;
  scanf("%d", &t);

  while (t--) {
    float length, width, depth, weight;
    scanf("%f %f %f %f", &length, &width, &depth, &weight);

    float sums = length + width + depth;
    int result = (sums <= 125 && weight <= 7) ? 1 : 0;

    printf("%d\n", result);
    total += result;
  }

  printf("%d\n", total);
}
