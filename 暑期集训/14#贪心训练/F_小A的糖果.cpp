#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5+10;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int a[N];int sum = 0;//�ܹ�Ҫ�Ե���
    cin >> a[0];//�������һ���㲻��������
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];//�ǹ��б�
        if (a[i] + a[i - 1] > x)
        {
            int cnt = a[i] + a[i - 1] - x;//Ҫ�Ե���
            if(cnt>a[i]){//������߲���
                a[i-1] = cnt - a[i];//ǰ�߳Ե�ʣ�����
                a[i] = 0;//�������
            }
            else{
                a[i] -= cnt;
            }
            sum += cnt;
        }
    }

    cout << sum << endl;
    return 0;
}
