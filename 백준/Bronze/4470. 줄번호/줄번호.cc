#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for (int i=1; i<=n; i++) {
        //cin.ignore();
        getline(cin, str);
        cout << i << ". " << str << '\n';
    }
    return 0;
}