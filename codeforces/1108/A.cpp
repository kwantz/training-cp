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

struct segment {
  int left;
  int right;
};

int main() {
  int q;
  segment segment1;
  segment segment2;

  scanf("%d", &q);
  while (q--) {
    scanf("%d %d %d %d", &segment1.left, &segment1.right, &segment2.left, &segment2.right);
    if (segment1.left == segment2.left)
      printf("%d %d\n", segment1.right, segment2.left);
    else
      printf("%d %d\n", segment1.left, segment2.left);
  }
}
