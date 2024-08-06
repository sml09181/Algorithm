#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(3);
    int max_idx = 0;
    while (1) {
        for (int i=0; i<3; i++) {
            cin >> v[i];
            v[i] *= v[i];
        }
        if (not int(accumulate(v.begin(), v.end(), 0.0))) break; // 종료 조건 
        sort(v.rbegin(), v.rend()); // 벡터 내림차순 정렬 
        if (v[0] == v[1] + v[2]) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}