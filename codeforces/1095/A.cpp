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
  char t[60];

  scanf("%d %s", &n, &t);
  int i = 0;
  int j = 1;
  while (i < n) {
    printf("%c", t[i]);
    i += j++;
  }
  printf("\n");
}
