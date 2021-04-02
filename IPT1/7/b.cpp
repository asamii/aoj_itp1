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
  int n, x;
  vector<int> v;
  while (1) {
    cin >> n >> x;
    if (n == 0)
      break;
    int ans = 0;
    for (int i = 1; i < n - 1; ++i)
      for (int j = i + 1; j < n; ++j)
        for (int k = j + 1; k <= n; ++k) {
          if (i + j + k == x)
            ++ans;
        }
    v.push_back(ans);
  }

  rep(i, v.size()) cout << v[i] << endl;
  return 0;
}