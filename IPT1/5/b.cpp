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
  int h, w;
  while (1) {
    cin >> h >> w;
    if (h == 0 && w == 0)
      break;
    rep(i, h) {
      rep(j, w) {
        if (i == 0 || j == 0 || i == h - 1 || j == w - 1)
          cout << "#";
        else cout << ".";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}