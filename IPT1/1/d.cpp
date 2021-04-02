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
  int s;
  cin >> s;
  cout << s / 3600 << ":" << (s % 3600) / 60 << ":" << s % 3600 % 60 << endl;
  return 0;
}
