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

void Swap(string s) {
  if (s == "#") {
    cout << "#";
    s = ".";
  } else {
    cout << ".";
    s = "#";
  }
}
int main() {
  int h, w;
  while (1) {
    cin >> h >> w;
    if (h == 0 && w == 0)
      break;
    string s = "#";
    rep(i, h) {
      rep(j, w) {
        if (i % 2 == 0) {
          if (j % 2 == 0)
            cout << "#";
          else
            cout << ".";
        } else {
          if (j % 2 != 0)
            cout << "#";
          else
            cout << ".";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}