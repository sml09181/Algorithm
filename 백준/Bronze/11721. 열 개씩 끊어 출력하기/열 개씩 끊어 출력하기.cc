#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        
        cout << s[i];
        if (i % 10 == 9) cout << '\n';
    }

    return 0;
}