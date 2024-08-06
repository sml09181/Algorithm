#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y=0, temp;
    for (int i=0; i<4; i++) {
        cin >> temp;
        y += temp;
    }
    x = y/60;
    y %= 60;
    cout << x << '\n' << y << '\n';
    return 0;
}