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
  for (int i = 3; i <= n; ++i) {
    if (i % 3 == 0) {
      cout << " " << i;
    } else {
      string s;
      s = to_string(i);
      rep(j, s.size()) if (s[j] == '3') {
        cout << " " << i;
        break;
      }
    }
  }
  cout << endl;
  return 0;
}