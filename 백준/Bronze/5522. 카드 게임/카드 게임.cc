#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int ans=0, n;
    while (cin >> n) {
        cin.ignore();
        ans += n;
    }
    cout << ans;
    return 0;
}