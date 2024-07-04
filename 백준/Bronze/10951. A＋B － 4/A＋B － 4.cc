#include <stdio.h>

//
#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    while (cin >> a >> b) cout << a+b << "\n";
    return 0;
}

/*
int main(void) {
    int a, b;
    while (scanf("%d %d", &a, &b)!=EOF)
        printf("%d \n", a+b);
    return 0;
}
*/

