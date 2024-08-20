#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int temp, ham=3000, drink=3000;
    for (int i=0; i<5; i++) {
        cin >> temp;
        if (i<3&&temp<ham) ham = temp;
        else if (i>=3&&temp<drink) drink = temp;
    }
    cout << ham + drink - 50 << '\n';
    return 0;
}