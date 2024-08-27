#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    int n, three, five;
    cin >> n;
    five = n/5; // max
    
    while ((n-5*five)%3&&five>=0) five--;
    if (five<0) cout << -1;
    else cout << five + (n-5*five)/3;
    return 0;
}