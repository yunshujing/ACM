#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5 + 10;

int a[2000][2000];

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    int x1, y1, x2, y2;
    while(m--){
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i <= x2;i++){
            a[i][y1]++;//���м�¼
            a[i][y2 + 1]--;//β�м��ٽ���
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] += a[i][j - 1];//������һ�ŵ�ѹ������չ��
            cout << a[i][j]<<(j < n ? " " : "\n");
        }
    }

    return 0;
}