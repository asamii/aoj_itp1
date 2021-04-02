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
  string s;
  vector<string> str;
  while (1) {
    cin >> s;
    if (s == "-")
      break;
    int n, m;
    cin >> n;
    rep(i, n) {
      cin >> m;
      string t;
      t = s.substr(0, m);
      s.erase(0, m);
      s += t;
    }
    str.push_back(s);
  }

  rep(i, str.size()) cout << str[i] << endl;

  return 0;
}