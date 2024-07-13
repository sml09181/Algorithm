#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (s.find("ss")!=string::npos) cout << "hiss";
    else cout << "no hiss";
    return 0;
}