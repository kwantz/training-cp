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
  char str[20];
  int tcase = 1;

  while (scanf("%s", &str) != EOF) {
    if (str[0] == '#') break;

    printf("Case %d: ", tcase++);

    if (strcmp(str, "HELLO") == 0)
      printf("ENGLISH\n");

    else if (strcmp(str, "HOLA") == 0)
      printf("SPANISH\n");

    else if (strcmp(str, "HALLO") == 0)
      printf("GERMAN\n");

    else if (strcmp(str, "BONJOUR") == 0)
      printf("FRENCH\n");

    else if (strcmp(str, "CIAO") == 0)
      printf("ITALIAN\n");

    else if (strcmp(str, "ZDRAVSTVUJTE") == 0)
      printf("RUSSIAN\n");

    else
      printf("UNKNOWN\n");
  }
}
