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
  getline(cin, s);
  rep(i, s.size()) {
    if (isupper(s[i]))
      s[i] = tolower(s[i]);
    else
      s[i] = toupper(s[i]);
  }
  cout << s << endl;
  return 0;
}