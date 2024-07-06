#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int days = y-1;
    
    switch (x-1) {
        case 11:
            days += 30;
        case 10:
            days += 31;
        case 9:
            days += 30;
        case 8:
            days += 31;
        case 7:
            days += 31;
        case 6:
            days += 30;    
        case 5:
            days += 31;
        case 4:
            days += 30;
        case 3:
            days += 31;
        case 2:
            days += 28;
        case 1:
            days += 31;
        default: break;
    }
    days %= 7;
    
    switch(days) {
        case 0:
            cout << "MON";
            break;
        case 1:
            cout << "TUE";
            break;
        case 2:
            cout << "WED";
            break;
        case 3:
            cout << "THU";
            break;
        case 4:
            cout << "FRI";
            break;
        case 5:
            cout << "SAT";
            break;
        case 6:
            cout << "SUN";
            break;
    }
    return 0;
    
    
}