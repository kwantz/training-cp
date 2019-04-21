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

struct date {
  int day;
  int month;
  int year;
};

int main() {
  date study, birth;
  char name[50];
  int courses;
  int t;

  scanf("%d", &t);
  while (t--) {
    scanf("%s", &name);
    scanf("%d/%d/%d", &study.year, &study.month, &study.day);
    scanf("%d/%d/%d", &birth.year, &birth.month, &birth.day);
    scanf("%d", &courses);

    if (study.year >= 2010 || birth.year >= 1991)
      printf("%s eligible\n", name);

    else if (courses >= 41)
      printf("%s ineligible\n", name);

    else
      printf("%s coach petitions\n", name);
  }
}
