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
  char card_on_table[3];
  char card_on_hand[3];
  bool status = false;

  scanf("%s", &card_on_table);
  for (int i=0; i<5; i++) {
    scanf("%s", &card_on_hand);
    if (card_on_hand[0] == card_on_table[0] || card_on_hand[1] == card_on_table[1])
      status = true;
  }

  printf((status) ? "YES" : "NO");
  printf("\n");
}
