#include <iostream>
#include <algorithm>
using namespace std;

bool comp(const string &a, const string &b) {
    return a.length() < b.length() || (a.length() == b.length() && a < b);
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string* str = new string[n];
    cin.ignore();
    for (int i=0; i<n; i++) getline(cin, str[i]);
    sort(str+0, str+n, comp);
    for (int i=0; i<n; i++) {
        if (i!=n-1&&str[i]==str[i+1]) continue;
        cout << str[i] << '\n';
    }
    return 0;
}