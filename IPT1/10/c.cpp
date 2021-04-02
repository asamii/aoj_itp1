#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  while (1) {
    cin >> n;
    if (n == 0) break;
    vector<int> s(n);
    double m = 0;
    rep(i, n) {
      cin >> s[i];
      m += s[i];
    }
    m = m / n;
    double bunsan = 0;
    rep(i, n) bunsan += (s[i] - m) * (s[i] - m);

    printf("%f\n", sqrt(bunsan / n));
  }
  return 0;
}