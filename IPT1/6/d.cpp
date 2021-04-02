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
  int n, m;
  cin >> n >> m;
  int a[n][m], b[m], c[n] = {0};
  rep(i, n) {
    rep(j, m) cin >> a[i][j];
  }
  rep(i, m) cin >> b[i];
  rep(i, n) {
    rep(j, m) c[i] += a[i][j] * b[j];
  }

  rep(i, n) cout << c[i] << endl;

  return 0;
}