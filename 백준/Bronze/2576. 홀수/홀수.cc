#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int sum = 0, min=100, num;
    for (int i=0; i<7; i++) {
        cin >> num;
        if (num%2) {
            sum+=num;
            if (num<min) min=num;
        }
    }
    if (sum) {
        cout << sum << endl;
        cout << min << endl;
    }
    else cout << -1 << endl;
    return 0;
}