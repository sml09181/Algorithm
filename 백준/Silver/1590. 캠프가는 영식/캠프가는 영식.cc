#include <limits.h>
#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
    long n, t, s, i, c, temp;
    unsigned long ans=ULONG_MAX;
    cin >> n >> t;
    for (int j=0; j<n; j++) {
        cin >> s >> i >> c;
        c -= 1;
        temp = abs(t-s);
        if ((t-s)<0) { // 버스 출발시간에 출발
          if (temp<ans) ans=temp;
        }
        else if ((t-s)>0) {
          if (temp%i==0&&temp<=c*i) ans=0;
          else if (temp%i!=0&&temp<c*i&&i*(temp/i+1)-temp<ans) ans=i*(temp/i+1)-temp;
        }
        else ans=0;
        if (ans==0) break;
    }
    if (ans==ULONG_MAX) cout << -1;
    else cout << ans;
    return 0;
}