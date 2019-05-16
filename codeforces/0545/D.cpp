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
  int n;
  int t[100005];

  scanf("%d", &n);
  for (int i=0; i<n; i++)
    scanf("%d", &t[i]);

  sort(t, t + n);
  int time = 0;
  int people = 0;

  for (int i=0; i<n; i++) {
    if (time <= t[i]) {
      time += t[i];
      people++;
    }
  }

  printf("%d\n", people);
}
