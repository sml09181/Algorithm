#include <iostream>
#include <algorithm>
using namespace std;

char field[100][100];
bool is_visit[100][100];

void find_region(int i, int j, char color, int n) {
    // 범위 오류
    if (i<0||i>=n||j<0||j>=n) return;
    // 이미 방문한 puyo는 제외 || 다른 컬러라도 후에 쓰일 수 있기 때문에 visit 처리하면 안됨
    if (is_visit[i][j]||field[i][j]!=color) return; // !is_visit[i][j] -> segment fault
    
    // 방문 표시
    is_visit[i][j] = true;

    // recursion(상 -> 하 -> 좌 -> 우)
    find_region(i-1, j, color, n);
    find_region(i+1, j, color, n);
    find_region(i, j-1, color, n);
    find_region(i, j+1, color, n);
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int yes=0, no=0, flag=0;
    int i, j, n;
    cin >> n;
    for (i=0; i<n; i++) {
        string s;
        cin >> s;
        for (j=0; j<n; j++) {
            field[i][j]=s[j];
            // cin >> field[i][j]; 도 가능
        }
    }
        
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (field[i][j]=='.'||is_visit[i][j]) continue;
            find_region(i, j, field[i][j], n);
            no++;
        }
    }
    fill(&is_visit[0][0], &is_visit[0][0]+sizeof(is_visit), false);
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (field[i][j]=='G') field[i][j]='R';
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (field[i][j]=='.'||is_visit[i][j]) continue;
            find_region(i, j, field[i][j], n);
            yes++;
        }
    }
    cout << no << " " << yes;
    return 0;
}