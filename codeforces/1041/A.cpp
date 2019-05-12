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
  set<int> keyboards;

  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    int a;
    scanf("%d", &a);
    keyboards.insert(a);
  }

  int prev = 0;
  int result = 0;
  for (auto keyboard: keyboards) {
    if (prev != 0) result += (keyboard - prev - 1);
    prev = keyboard;
  }

  printf("%d\n", result);
}
