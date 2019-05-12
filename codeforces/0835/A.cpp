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

struct typing {
  int v, t;

  int calc(int s) {
    return s * v + 2 * t;
  }
};

int main() {
  int s;
  typing a, b;

  scanf("%d %d %d %d %d", &s, &a.v, &b.v, &a.t, &b.t);
  if (a.calc(s) < b.calc(s)) printf("First\n");
  else if (a.calc(s) > b.calc(s)) printf("Second\n");
  else printf("Friendship\n");
}
