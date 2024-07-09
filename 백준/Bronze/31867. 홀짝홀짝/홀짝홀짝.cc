#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, even=0, odd=0;
    string k;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        if (k[i]%2) odd++;
        else even++;
    }
    
    if (even-odd>0) cout << 0 << '\n';
    else if (even-odd<0) cout << 1 << '\n';
    else cout << -1 << '\n';
    return 0;
}