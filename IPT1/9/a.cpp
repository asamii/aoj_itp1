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
  string w, s;
  cin >> w;
  int ans = 0;
  while (1) {
    cin >> s;
    if (s == "END_OF_TEXT")
      break;
    rep(i, s.size()) if (isupper(s[i])) s[i] = tolower(s[i]);
    if (s == w)
      ++ans;
  }

  cout << ans << endl;

  return 0;
}