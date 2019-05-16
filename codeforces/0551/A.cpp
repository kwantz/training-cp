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
  int n, students[2005], temp[2005] = {};
  set<int, greater<int>> rank;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &students[i]);
    rank.insert(students[i]);
    temp[students[i]]++;
  }

  int a = 1;
  for (auto &r: rank) {
    int t = temp[r];
    temp[r] = a;
    a += t;
  }

  for (int i=0; i<n; i++) {
    if (i != 0) printf(" ");
    printf("%d", temp[students[i]]);
  }
  printf("\n");
}
