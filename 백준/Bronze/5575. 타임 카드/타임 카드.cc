#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    int time[6]={0};
    int h, m, s;
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<6; j++) cin >> time[j];
        s = time[5]-time[2];
        if (s<0) {
            time[4]--;
            s += 60;
        }
        m = time[4]-time[1];
        if (m<0) {
            time[3]--;
            m += 60;
        }
        h = time[3]-time[0];
        cout << h << " " << m << " " << s << '\n';
    }
    return 0;
}