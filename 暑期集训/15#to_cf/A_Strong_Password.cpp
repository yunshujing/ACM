#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5 + 10;
// �ҵ�����������У�������ĩβ�������ַ�
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        string s;
        cin >> s;

        int len = s.size();
        int tmp = s[0];

        if(len==1){//����Ϊ1
            char ch= char(((int)s[0] + 1-'a') % 26 + 'a') ;
            s.insert(0, 1, ch);
            cout << s << endl;
            continue;
        }

        bool flag = false;//�Ƿ�����
        int maxcnt = 1,cnt=1;//�����
        int p;//����ȵ�ָ��
        for (int j = 1; j < len;j++){
            if(s[j-1]==s[j]){//��ͬ���ۼƳ���
                flag = true;
                cnt++;
                if(j==len-1){//��Ե����
                    if(cnt>maxcnt){
                    maxcnt = cnt;
                    p = j;
                    }
                }
            }
            else {
                if(cnt>maxcnt){//��ͬ���¼�����
                    maxcnt = cnt;
                    p = j - 1;
                }
                cnt = 0;
            }
        }

        char x = s[p];//����ȵ����һλ
        char ch= char(((int)x + 1-'a') % 26 + 'a') ;
        s.insert(p, 1, ch);
        cout << s << endl;
    }
    return 0;
}
