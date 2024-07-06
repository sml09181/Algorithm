#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=1; j<n-i; j++) cout << " ";
        for (int j=0; j<2*i+1; j++) cout << "*";
        // 별 뒤 공백은 출력하지 않아도 된다.
        cout << "\n";
    }
    return 0;
}