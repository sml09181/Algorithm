#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, start, end, k;
    cin >> N >> M;
    vector<int> result(N);
    for (int i=0; i<M; i++) {
        cin >> start >> end >> k;
        for (int j=start-1; j<end; j++) {
            result.at(j) = k;
        }
    }
    
    vector<int>::iterator iter = result.begin();
    for (; iter != result.end(); iter++) cout << *iter << " ";
}