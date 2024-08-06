#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s;
    while (getline(cin, s)) {
    
        // cin: buffer에 \n가 남아 있음 
        // getline: buffer에 \n 포함X -> cin.ignore 필요X 
        for (int i=0; i<s.length(); i++) {
            if (s[i]=='i') s[i]='e';
            else if (s[i]=='e') s[i]='i';
            else if (s[i]=='I') s[i]='E';
            else if (s[i]=='E') s[i]='I';
        }
        cout << s << '\n';
    }
    return 0;
}