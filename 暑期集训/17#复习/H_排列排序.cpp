#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
int a[maxn];
signed main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int i=1;
		int ans=0;
		while(i<=n){//������1��1��Ӧ������
			if(a[i]==i) i++;//������ԭ�����ڵ�λ��
			else{//û����ԭ��λ�ã���ʼ��¼����
            //�ҵ�����������������ΪҪ�ŵ���ԭ��λ�ã����г��ȼ�Ϊ��Ҫ����ĳ���
				int maxx=a[i];
				int j=i+1;
				maxx=max(maxx,a[j]);
				while(maxx>j){
					j++;
					maxx=max(maxx,a[j]);
				}
				ans+=j-i+1;
				i=j+1;//��������
			}
		}
		cout<<ans<<endl;
	}
}