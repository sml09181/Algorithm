#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int score, S=0, T=0;
    for (int j=0; j<4; j++) {
        cin >> score;
        S += score; 
    }
    for (int j=0; j<4; j++) {
        cin >> score;
        T += score; 
    }
    if (S>T) cout << S << '\n';
    else cout << T << '\n';
    return 0;
}