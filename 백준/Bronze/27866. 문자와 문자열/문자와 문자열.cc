#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    int i;
    cin >> str;
    cin >> i;
    cout << str[i-1];
    return 0;
}