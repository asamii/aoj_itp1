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
  string str, s;
  map<char, int> cnt;
  while (cin >> str) {
    s += str;
  }
  rep(i, s.size()) {
    if (isupper(s[i]))
      s[i] = tolower(s[i]);
    cnt[s[i]]++;
  }

  rep(i, 26) cout << char('a' + i) << " : " << cnt['a' + i] << endl;

  return 0;
}