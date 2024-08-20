#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    while (1) {
        cin >> m >> n;
        if (m==0&&n==0) break;
        if (m>n) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}