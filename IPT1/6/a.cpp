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
  vector<int> a(n), b(n);
  rep(i, n) {
    cin >> a[i];
    b[n - 1 - i] = a[i];
  }
  rep(i, n) {
    cout << b[i];
    if (i == n - 1) break;
    cout << " ";
  }
  cout << endl;
  return 0;
}