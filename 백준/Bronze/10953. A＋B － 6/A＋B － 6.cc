#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    int t, a, b;
    char c;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> c >> b;
        cout << a+b << endl;
    }
    return 0;
}