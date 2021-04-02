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
  string s, p;
  cin >> s >> p;
  int n = s.size(), m = p.size();
  rep(i, n) {
    if (p[0] == s[i]) {
      rep(j, m) {
        int k = i + j;
        if (i + j >= n)
          k = i + j - n;
        if (p[j] == s[k]) {
          if (j == m - 1) {
            cout << "Yes" << endl;
            return 0;
          }
          continue;
        } else
          break;
      }
    }
    if (i == n - 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  return 0;
}