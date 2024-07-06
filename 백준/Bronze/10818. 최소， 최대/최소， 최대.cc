#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    int min = arr[0], max = arr[0];
    
    for (int i=1; i<n; i++) {
        if (arr[i] < min) min = arr[i];
        else if (arr[i] > max) max = arr[i];
    }
    cout << min << " " << max;
    delete []arr;
    return 0;
}