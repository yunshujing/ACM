#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int t, m;
	cin >> t >> m; //��ҩ����ʱ�䡢��ҩ����Ŀ 
	
	vector<int> dp(t+1, 0);  //��ʼ��Ϊ0 
	
	int w[110], c[110];
	for(int i=1;i<=m;i++){
		cin >> w[i] >> c[i]; //��ժĳ���ҩ��ʱ��ͼ�ֵ 
	} 
	
	for(int i=1;i<=m;i++){
		for(int j=t;j>=w[i];j--){
			dp[j] = max(dp[j], dp[j-w[i]]+c[i]);
		} 
	} 
	
	cout << dp[t] << '\n';

			
	return 0;
}