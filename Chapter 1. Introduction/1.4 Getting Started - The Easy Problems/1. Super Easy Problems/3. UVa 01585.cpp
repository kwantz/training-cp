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
  int t;
  char str[100];

  scanf("%d", &t);
  while (t--) {
    scanf("%s", &str);

    int i = 0;
    int start = 1;
    int result = 0;
    while (str[i]) {
      if (str[i++] == 'O')
        result += start++;

      else
        start = 1;
    }

    printf("%d\n", result);
  }
}
