#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string day[7] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
    int sum = y;
    
    for (int i=0; i<x-1; i++) sum+= year[i];
    cout << day[sum%7];
    return 0;
    
    
}