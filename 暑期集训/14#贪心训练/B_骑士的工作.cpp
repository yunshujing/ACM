#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5 + 10;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);//�ر�ͬ����

    int n, m;
    cin >> n >> m;
    int sum=0;
    vector <int> t;
    for (int i = 0; i < n; i++)
    {
        int tou;
        cin >> tou;//ͷ
        t.push_back(tou);
    }
    
    vector <int> a;
    for (int i = 0; i < m; i++)
    {
        int qs;
        cin >> qs;//��ʿ
        a.push_back(qs);
    }

    sort(a.begin(), a.end());//��ʿ��С��������
    int money=0;
    int tou = 0, qis = 0;
    int cnt = n;
    for (int i = 0; i < n; i++)//����ͷ
    {
        tou = t[i];
        int size1 = a.size();
        for (int j = 0; j < size1; j++)//������ʿ
        {
            qis = a[j];
            if (tou <= qis)
            {
                money += a[j];
                a.erase(a.begin() + j);
                cnt--;
                break;
            }
        }
    }

    if(cnt>0)//ͷûɱ��
        cout << "you died!" << endl;
    else
        cout << money << endl;
    return 0;
}