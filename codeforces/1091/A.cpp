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

struct color {
  int y;
  int b;
  int r;

  int sum() { return y + b + r; }

  bool operator > (const color &tree) { return y > tree.y; }
};

color setup(color tree, int y, int b, int r) {
  color result;
  if (tree.y < y || tree.b < b || tree.r < r) {
    result.y = -1;
    result.b = -1;
    result.r = -1;
  } else {
    result.y = y;
    result.b = b;
    result.r = r;
  }
  return result;
}

int main() {
  color tree;
  color result;

  scanf("%d %d %d", &tree.y, &tree.b, &tree.r);
  color tree1 = setup(tree, tree.y, tree.y + 1, tree.y + 2);
  color tree2 = setup(tree, tree.b - 1, tree.b, tree.b + 1);
  color tree3 = setup(tree, tree.r - 2, tree.r - 1, tree.r);

  result = (tree1 > tree2) ? tree1 : tree2;
  result = (tree3 > result) ? tree3 : result;

  printf("%d\n", result.sum());
}
