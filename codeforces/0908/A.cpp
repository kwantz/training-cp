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
  char s[55];
  scanf("%s", &s);

  int count = 0;
  int n = strlen(s);
  string vowel = "aeiou";
  string digit = "02468";

  for (int i=0; i<n; i++)
    for (int j=0; j<5; j++)
      if (s[i] == vowel[j] || s[i] == digit[j] + 1)
        count++;

  printf("%d\n", count);
}
