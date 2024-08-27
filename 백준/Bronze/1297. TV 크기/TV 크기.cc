#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char* argv[]) {
    int d, h, w;
    double ratio;
    cin >> d >> h >> w;
    ratio = sqrt(pow(d, 2)/(pow(h, 2)+pow(w, 2)));
    cout << int(h*ratio) << " " << int(w*ratio);
    return 0;
}