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
  cin >> n;
  int a[4][3][10] = {0};
  rep(i, n) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    a[b - 1][f - 1][r - 1] += v;
    if (a[b - 1][f - 1][r - 1] < 0)
      a[b - 1][f - 1][r - 1] = 0;
  }
  rep(i, 4) {
    rep(j, 3) {
      rep(k, 10) {
        cout << " " << a[i][j][k];
      }
      cout << endl;
    }
    if (i != 3) {
      rep(k, 20) cout << "#";
      cout << endl;
    }
  }
  return 0;
}