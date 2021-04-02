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
  double r; 
  cin >> r;
  printf("%f %f\n", r * r * M_PI, 2 * M_PI * r);
  return 0;
}