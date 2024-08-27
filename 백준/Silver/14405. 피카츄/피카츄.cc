#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
    string s;
    cin >> s;
    int i=0;
    while (i<s.size()) {
      if (s.substr(i, 2)=="pi"||s.substr(i, 2)=="ka") i+=2;
      else if (s.substr(i, 3)=="chu") i+=3;
      else break;
    }
    if (i>=s.size()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}