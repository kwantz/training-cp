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

bool check(char input[], int i) {
  return input[i] != input[i+1] && input[i] != input[i+2] && input[i+1] != input[i+2];
}

int main() {
  char input[1000005];
  scanf("%s", &input);

  int len = strlen(input);
  for (int i=0; i<len; i++) {
    if (i <= len-3 && check(input, i)) {
      printf("C");
      i += 2;
    } else {
      if (input[i] == 'R') printf("S");
      if (input[i] == 'B') printf("K");
      if (input[i] == 'L') printf("H");
    }
  }
  printf("\n");
}
