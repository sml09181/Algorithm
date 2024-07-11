#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string str;
    cin >> n >> str;
    cout << str.substr(str.length()-5); // str[-5:]
    return 0;
}