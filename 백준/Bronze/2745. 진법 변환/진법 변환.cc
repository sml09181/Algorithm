#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int b, c, ten=0, base=1;
    string n;
    cin >> n >> b;
    c = stoi(n, nullptr, b);
    cout << c;
    return 0;
}