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
  vector<int> v(3);
  rep(i, 3) cin >> v[i];
  sort(v.begin(), v.end());
  cout << v[0] << " " << v[1] << " " << v[2] << endl;
  return 0;
}