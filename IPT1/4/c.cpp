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
  int a, b;
  string s;
  while (1) {
    cin >> a >> s >> b;
    if (s == "?")
      break;
    else if (s == "+")
      cout << a + b << endl;
    else if (s == "-")
      cout << a - b << endl;
    else if (s == "*")
      cout << a * b << endl;
    else
      cout << a / b << endl;
  }
  return 0;
}