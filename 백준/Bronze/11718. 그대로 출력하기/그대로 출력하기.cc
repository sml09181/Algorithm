#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string line;
    while (getline(cin, line)) {
        cout << line << '\n';
    }
    return 0;
}