#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int v, result=0;
    cin >> v;
    cin.ignore();
    for (int i=0; i<v; i++) {
        if (cin.get()=='A') result += 1; // A
        else result += -1; // B
    }
    if (result==0) cout << "Tie" << endl;
    else if (result>0) cout << "A" << endl;
    else cout << "B" << endl;
    return 0;
}