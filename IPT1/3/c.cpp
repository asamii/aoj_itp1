#include <algorithm>
#include <cmath>
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
  int x, y;

  while (1) {
    cin >> x >> y;
    if (x == 0 && y == 0)
      break;
    if (x > y)
      swap(x, y);
    cout << x << " " << y << endl;
  }
  return 0;
}