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
  map<string,int> msi;
  int n;
  char prev = '0';

  scanf("%d", &n);
  getchar();

  for (int i=0; i<n; i++) {
    char c;
    scanf("%c", &c);
    if (prev != '0') {
      string s = "";
      s += prev;
      s += c;
      msi[s]++;
    }
    prev = c;
  }

  int maxi = 0;
  string s = "";
  for (auto &m: msi) {
    if (maxi < m.second) {
      s = m.first;
      maxi = m.second;
    }
  }

  printf("%s\n", s.c_str());
}
