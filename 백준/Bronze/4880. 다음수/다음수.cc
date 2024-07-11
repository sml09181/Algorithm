#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    double r; // 공비
    while (1) {
        cin >> a >> b >> c;
        if (a==0&&b==0&&c==0) break;
        if (2*b==a+c) cout << "AP " << 2*c-b << '\n';
        else cout << "GP " << double(c*c)/double(b) << '\n';
    }
    return 0;
}