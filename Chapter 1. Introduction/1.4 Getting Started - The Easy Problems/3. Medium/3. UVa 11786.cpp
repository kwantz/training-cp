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
  int T;
  scanf("%d", &T);

  while (T--) {
    char symbol[10005];
    scanf("%s", &symbol);

    int result = 0;
    stack<pic> universe;

    for (int i=0, n = strlen(symbol); i<n; i++) {
      if (symbol[i] == '_') continue;
      if (universe.empty()) {
        universe.push(mp(i, symbol[i]));
        continue;
      }

      pic top = universe.top();
      if (top.second == '\\' && symbol[i] == '/') {
        universe.pop();
        result += (i - top.first);
      }
      else {
        universe.push(mp(i, symbol[i]));
      }
    }

    printf("%d\n", result);
  }
}
