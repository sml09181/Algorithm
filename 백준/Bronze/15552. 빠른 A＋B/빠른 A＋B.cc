#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> b;
        cout << a+b << '\n';
    }
    return 0;
}