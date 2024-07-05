#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ans=0;
    char m;
    cin >> n;
    while (n--) {
        cin >> m;
       ans += m-'0';
    }
    cout << ans;
    return 0;
}