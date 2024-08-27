#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
  int n;
  cin >> n;
  cout << fixed;
  cout.precision(2); // 소수점 아래 2자리까지 출력력
  cout << (double)n/4;
  return 0;
}