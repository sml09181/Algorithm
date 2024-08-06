#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int num;
    cin >> num;
    cout << "The largest square has side length " << int(sqrt(num)) << ".";
    return 0;
}