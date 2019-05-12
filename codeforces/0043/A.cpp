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
  char c[15];
  map<string,int> m;

  scanf("%d", &n);
  getchar();
  for (int i=0; i<n; i++) {
    scanf("%s", &c);
    m[c]++;
  }

  int maxi = 0;
  string result;
  for (auto& f: m) {
    if (f.second > maxi) {
      maxi = f.second;
      result = f.first;
    }
  }

  printf("%s\n", result.c_str());
}
