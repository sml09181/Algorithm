#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    int arr[10]={0};
    long a, b, c, num;
    cin >> a >> b >> c;
    num = a*b*c;
    while (num) {
      arr[num%10]+=1;
      num/=10;
    }
    for (int i=0; i<10; i++) cout << arr[i] << endl;
    return 0;
}