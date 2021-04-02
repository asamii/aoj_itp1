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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int Max = -1000000;
  int Min = 1000000;
  ll sum = 0;
  rep(i, n) {
    Max = max(Max, a[i]);
    Min = min(Min, a[i]);
    sum += a[i];
  }
  cout << Min << " " << Max << " " << sum << endl;
  return 0;
}