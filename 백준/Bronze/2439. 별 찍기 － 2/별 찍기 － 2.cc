#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<n-i; j++) cout << " ";
        for (int j=0; j<i; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}