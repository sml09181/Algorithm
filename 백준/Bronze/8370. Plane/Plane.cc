#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[4];
    for (int i=0; i<4; i++) cin >> arr[i];
    cout << arr[0]*arr[1]+arr[2]*arr[3];
    return 0;
}