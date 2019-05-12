#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef pair<int,char> pic;

#define INF 1e9
#define EPS 1e-9

#define pb push_back
#define mp make_pair

#define initDP(arr) memset(arr, -1, sizeof arr)
#define clearArr(arr) memset(arr, 0, sizeof arr)

int main() {
  int minutes;
  char problem;
  char solve[10];

  int arr[30] = {};
  vector<pic> vec;

  while (scanf("%d", &minutes) != EOF) {
    if (minutes == -1) break;

    getchar();
    scanf("%c %s", &problem, &solve);

    if (strcmp(solve, "right") == 0)
      vec.pb(mp(minutes, problem));

    else
      arr[problem - 'A'] += 20;
  }

  int n = vec.size();
  int total = 0;

  for (int i=0; i<n; i++) {
    total += vec[i].first + arr[vec[i].second - 'A'];
  }

  printf("%d %d\n", n, total);
}
