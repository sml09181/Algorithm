#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    while (a and b) {
        cout << a+b << '\n';
        cin >> a >> b;
    }
    return 0;
}