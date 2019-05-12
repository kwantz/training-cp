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

int calc(int base, int E, int R, int S, int count) {
  while (count--)
    base = base * E / R / S;

  return base;
}

int main() {
  int M, P, L, E, R, S, N;
  while (scanf("%d %d %d %d %d %d %d", &M, &P, &L, &E, &R, &S, &N) != EOF) {
    int base1 = M;
    int base2 = P / S;
    int base3 = L / R / S;
    int count = N / 3;
    int result;

    if (N % 3 == 0)
      result = calc(base1, E, R, S, count);

    if (N % 3 == 1)
      result = calc(base2, E, R, S, count);

    if (N % 3 == 2)
      result = calc(base3, E, R, S, count);

    printf("%d\n", result);
  }
}
