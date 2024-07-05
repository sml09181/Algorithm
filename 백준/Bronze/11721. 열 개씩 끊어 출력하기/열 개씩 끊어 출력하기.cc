#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    getline(cin, s);
    int i = 0;
    while (s.length() >= 10) {
        cout << s.substr(0, 10) << '\n';
        s = s.substr(10, s.length());
    }
    cout << s;

    return 0;
}