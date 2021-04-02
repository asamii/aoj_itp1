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
  int r, c;
  cin >> r >> c;
  int t[r + 1][c + 1] = {};
  rep(i, r) rep(j, c) cin >> t[i][j];
  // 行の合計
  rep(i, r) {
    rep(j, c) {
      t[i][c] += t[i][j];
    }
  }
  //　列の合計
  rep(i, c) {
    rep(j, r) {
      t[r][i] += t[j][i];
    }
  }
  // (5, 5)成分について
  rep(i, c) t[r][c] += t[r][i];

  rep(i, r + 1) {
    rep(j, c + 1) {
      cout << t[i][j];
      if (j != c)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}