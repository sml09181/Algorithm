#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int temp, ans=0;
    for (int i=0; i<5; i++) {
        cin >> temp;
        if (temp<40) ans += 40;
        else ans += temp;
    }
    cout << ans/5 << '\n';
    return 0;
}