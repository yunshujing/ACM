#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl "\n"
#define fi first
#define se second
#define mod3 998244353
#define mod7 1000000007
const int N = 1e6 + 10;
const double eps =1e-4;

int a[5] = {1, 5, 10, 25, 50}; //��ʾ5��Ӳ�Ҹ��Եļ�ֵ 
int dp[110][260];  //��ʾdp[i][v]����i��Ӳ�Ҵճɼ�ֵΪv�ķ�����  

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    
    int n;
	while (cin >> n){
		memset(dp, 0, sizeof(dp)); //��ʼ��dp����ȫ��Ϊ0 
		
		dp[0][0] = 1;  //�߽磬��0��Ӳ�Ҵճ�0���֣���1�ַ���
		
		for (int i=0;i<5;i++){  //5��Ӳ�ҵļ�ֵ 
			for (int k=1;k<=100;k++){  //k��Ӳ��
				for (int v=a[i];v<=n;v++){
					dp[k][v] += dp[k-1][v-a[i]];//״̬ת�Ʒ���
				}                        
			}
		}
		
		int ans=0;
		for (int i=0;i<=100;i++){
			ans += dp[i][n];
		}
		
		cout << ans << endl;
	}
    
    return 0;
}
