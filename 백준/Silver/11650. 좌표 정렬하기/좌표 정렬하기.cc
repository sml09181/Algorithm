#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool compare(tuple <int, int> &a, tuple <int, int> &b) {
  if (get<0>(a)==get<0>(b)) return get<1>(a)<get<1>(b);
  else return get<0>(a)<get<0>(b);
}

int main(int argc, const char* argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  vector<tuple <int, int>> v;
  //v.reserve(100000);
  
  int n, x, y;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> x >> y;
    v.emplace_back(x, y);
  }
  sort(v.begin(), v.end(), compare);
  for (auto i : v) {
    cout << get<0>(i) << " " << get<1>(i) << '\n';
  }
  return 0;
}