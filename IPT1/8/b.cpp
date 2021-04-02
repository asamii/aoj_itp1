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
  vector<int> x;
  while (1) {
    cin >> s;
    if (s == "0")
      break;
    int tmp = 0;
    rep(i, s.size()) tmp += s[i] - '0';
    x.push_back(tmp);
  }

  rep(i, x.size()) cout << x[i] << endl;

  return 0;
}