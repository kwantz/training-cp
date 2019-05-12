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
  int r, c;
  char t[15][15];
  bool row[15] = {};
  bool col[15] = {};

  scanf("%d %d", &r, &c);
  int total_row = c;
  int total_col = r;

  for (int i=0; i<r; i++) {
    getchar();
    for (int j=0; j<c; j++) {
      scanf("%c", &t[i][j]);

      if (t[i][j] == 'S') {
        if (col[i] == 0) total_col--;
        if (row[j] == 0) total_row--;
        col[i] = 1;
        row[j] = 1;
      }
    }
  }

  printf("%d\n", total_row * r + total_col * c - total_row * total_col);
}
