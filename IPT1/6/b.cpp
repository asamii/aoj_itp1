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
  int v[4][13] = {0};
  rep(i, n) {
    string s;
    int num;
    cin >> s >> num;
    if (s == "S")
      v[0][num - 1] = 1;
    else if (s == "H")
      v[1][num - 1] = 1;
    else if (s == "C")
      v[2][num - 1] = 1;
    else if (s == "D")
      v[3][num - 1] = 1;
  }
  rep(j, 13) if (v[0][j] == 0) cout << "S " << j + 1 << endl;
  rep(j, 13) if (v[1][j] == 0) cout << "H " << j + 1 << endl;
  rep(j, 13) if (v[2][j] == 0) cout << "C " << j + 1 << endl;
  rep(j, 13) if (v[3][j] == 0) cout << "D " << j + 1 << endl;
  return 0;
}