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
  double a, b, c;
  cin >> a >> b >> c;
  double s, l, h;
  c = c * M_PI / 180.;
  s = 0.5 * a * b * sin(c);
  l = a + b + sqrt(a * a + b * b - 2 * a * b * cos(c));
  h = b * sin(c);
  printf("%f\n%f\n%f\n", s, l, h);
  return 0;
}