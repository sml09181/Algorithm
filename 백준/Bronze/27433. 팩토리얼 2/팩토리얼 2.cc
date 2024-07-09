#include <iostream>
using namespace std;

long factorial(int n) {
    if (n==0) return 1;
    else return n * factorial(n-1);
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cout << factorial(n) << '\n';
    return 0;
}