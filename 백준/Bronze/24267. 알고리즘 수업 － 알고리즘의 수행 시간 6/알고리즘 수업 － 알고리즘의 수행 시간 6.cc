#include <iostream>
using namespace std;

long long func(long long n) {
    return n*(n-2)*(n-1)/6;
    }

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    if (n<3) cout << 0 << '\n' << 3;
    else cout << func(n) << '\n' << 3;
    return 0;
}