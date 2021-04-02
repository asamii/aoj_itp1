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
  int x;
  int i = 1;
  while (1) {
    cin >> x;
    if (x == 0) break;
    cout << "Case " << i << ": " << x << endl;
    ++i;
  }
  return 0;
}