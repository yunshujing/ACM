#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;

struct apple{
    int high;
    int power;
}ap[N];

int cmp(apple a,apple b){
    return a.power<b.power;
}


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    int n,s;//ƻ����������
    cin>>n>>s;

    int a,b;//���Ӹ߶ȣ��ֱ۳�
    cin>>a>>b;

    for(int i=1;i<=n;i++){
        cin>>ap[i].high>>ap[i].power;
    }

    sort(ap+1,ap+n+1,cmp);//��ƻ������������С��������

    //ժƻ��
    int ans=0;
    for(int i=1;i<=n;i++){
        //�жϸ߶��Ƿ��㹻
        if(ap[i].high>a+b){//�����߶�
            continue;
        }
        else if(s>=ap[i].power){
            s-=ap[i].power;
            ans++;
        }
    }
    cout << ans<<endl;
    return 0;
}