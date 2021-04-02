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
  string s, t, r, p;
  int n;
  cin >> s >> n;
  vector<string> out;
  int a, b;
  rep(i, n) {
    cin >> t >> a >> b;
    if (t == "print") {
      out.push_back(s.substr(a, b - a + 1));
    } else if (t == "reverse") {
      r = s;
      for (int j = a; j <= b; ++j) {
        r[j] = s[b + a - j];
      }
      s = r;
    } else {
      cin >> p;
      s.replace(a, b - a + 1, p);
    }
  }

  rep(i, out.size()) cout << out[i] << endl;

  return 0;
}