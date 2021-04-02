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
  string taro, hanako;
  int point_t = 0, point_h = 0;
  rep(i, n) {
    cin >> taro >> hanako;
    if (taro == hanako) {
      point_t++;
      point_h++;
      continue;
    }
    int j = 0;
    int m = min(taro.size(), hanako.size());
    while (j < m) {
      if (taro[j] > hanako[j]) {
        point_t += 3;
        break;
      } else if (taro[j] < hanako[j]) {
        point_h += 3;
        break;
      }
      ++j;
      if (j == m) {
        if (taro.size() > hanako.size())
          point_t += 3;
        else
          point_h += 3;
      }
    }
  }

  cout << point_t << " " << point_h << endl;

  return 0;
}