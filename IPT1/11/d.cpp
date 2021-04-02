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

class Dice {
 public:
  void rotate(char c, int *n) {
    int m[6];
    rep(j, 6) m[j] = n[j];
    if (c == 'N') {
      m[0] = n[1];
      m[1] = n[5];
      m[4] = n[0];
      m[5] = n[4];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'S') {
      m[0] = n[4];
      m[1] = n[0];
      m[4] = n[5];
      m[5] = n[1];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'W') {
      m[0] = n[2];
      m[2] = n[5];
      m[3] = n[0];
      m[5] = n[3];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'E') {
      m[0] = n[3];
      m[2] = n[0];
      m[3] = n[5];
      m[5] = n[2];
      rep(j, 6) n[j] = m[j];
    } else if (c == 'R') {
      m[1] = n[3];
      m[2] = n[1];
      m[3] = n[4];
      m[4] = n[2];
      rep(j, 6) n[j] = m[j];
    } else {
      m[1] = n[2];
      m[2] = n[4];
      m[3] = n[1];
      m[4] = n[3];
      rep(j, 6) n[j] = m[j];
    }
  }

  bool is_tf(int t, int f, int *n) {
    if (t == n[5]) {
      rep(i, 2) {
        rotate('N', n);
      }
    } else if (t != n[0]) {
      rep(i, 4) {
        rotate('R', n);
        if (t == n[1]) {
          break;
        }
        if (i == 3) {
          return false;
        }
      }
      rotate('N', n);
    }
    rep(i, 4) {
      rotate('R', n);
      if (f == n[1]) {
        break;
      }
      if (i == 3) {
        return false;
      }
    }
    return true;
  }

  bool isMatch(int t, int f, int *n, int *m) {
    if (is_tf(t, f, n)) {
      int cnt = 0;
      for (int i = 2; i < 6; ++i) {
        if (m[i] == n[i]) {
          ++cnt;
        }
      }
      if (cnt == 4) {
        return true;
      } else
        return false;
    } else
      return false;
  }
};

int main() {
  int num;
  cin >> num;
  int l[num][6];
  rep(i, num) rep(j, 6) cin >> l[i][j];

  int n[6], m[6];
  Dice d;
  rep(i, num - 1) {
    for (int j = i + 1; j < num; ++j) {
      rep(k, 6) {
        m[k] = l[i][k];
        n[k] = l[j][k];
      }
      rep(k, 5) {
        if (d.isMatch(m[k], m[k + 1], n, m)) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}