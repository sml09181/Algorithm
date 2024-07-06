#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans=0;
    cin >> n;
    while (n) ans+=n--;
    cout << ans;
    return 0;
}