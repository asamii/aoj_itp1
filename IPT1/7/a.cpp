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
  int m, f, r;
  vector<string> s;
  while (1) {
    cin >> m >> f >> r;
    if (m == -1 && f == -1)
      break;
    if (m == -1 || f == -1)
      s.push_back("F");
    else if (m + f >= 80)
      s.push_back("A");
    else if (m + f >= 65)
      s.push_back("B");
    else if (m + f >= 50)
      s.push_back("C");
    else if (m + f >= 30) {
      if (r >= 50)
        s.push_back("C");
      else
        s.push_back("D");
    } else
      s.push_back("F");
  }

  rep(i, s.size()) cout << s[i] << endl;

  return 0;
}