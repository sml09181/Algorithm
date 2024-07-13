#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int score;
    int ullim[11] = {0}; // 0 ___ 0
    int start[11] = {0}; // 0 ___ 0
    
    for (int i=1; i<10; i++) {
        cin >> score;
        ullim[i] = score + ullim[i-1];
    }
    for (int i=1; i<10; i++) {
        cin >> score;
        start[i] = score + start[i-1];
        if (start[i-1] < ullim[i]) {
            cout << "Yes";
            exit(0);
        }
    }
    cout << "No";
    return 0;
}