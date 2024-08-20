#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, temp, odd=0, even=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> temp;
        if (temp%2) odd++;
        else even++;
    }
    if (odd==even||odd==even+1) cout << 1 << '\n';
    else cout << 0 << '\n';
    return 0;
}