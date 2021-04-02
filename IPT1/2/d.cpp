#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  if (r <= x && x <= w - r && r <= y && y <= h - r)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}