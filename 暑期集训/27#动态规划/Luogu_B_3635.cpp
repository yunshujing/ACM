// #include<iostream>
// #include<cstdio>
// using namespace std;

// int n, f[1000000];//��f����������

// /*
// f[0]=0;
// f[1]=f[0]+1=1;
// f[2]=f[1]+1=2;
// */

// int main(){
// 	cin >> n;  //nԪ 
// 	for(int i=1;i<=n;i++){  //����ײ��жϿ�ʼ
	
// 		if(i >= 11){  //i>=11,������һ��11ԪǮ���滻
// 			f[i] = min(f[i-1], min(f[i-5],f[i-11])) + 1;  //Ǯ����������(��С)
			
// 		}else if(i>=5){ //i=5~10,������һ��5ԪǮ���滻5��1ԪǮ��
// 			f[i]=min(f[i-1],f[i-5])+1;  //Ǯ����������(��С)
			
// 		}else{ //i=1~4,ֻ����1ԪǮ�� 
// 			f[i]=f[i-1]+1;  //Ǯ����������
// 		}
		
// 	}
// 	cout<<f[n]<<endl;//f[n]����ճ�n��Ǯ��Ҫ������Ǯ����
	
	
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
const int maxn = 1e6 + 100;
const double eps = 1e-5;

signed main() {
	int a[3] = { 1,5,11 };
	int n; cin >> n;
	
	vector<int>dp(n + 1, 0x3f3f3f3f);//dp(���ȣ�ֵ)
    //0x3f3f3f3f ��һ���ܴ����  Ĭ����Ҫ����Ľ��
	dp[0] = 0;//��Ҫ�Ľ�ҵ�����
	for (int i = 0; i < 3; i++) {//����ÿһ�ֽ��
		for (int j = a[i]; j <= n; j++) {// j �� Ǯ��sum
			dp[j] = min(dp[j - a[i]]+ 1, dp[j]) ;//���Ƽ���
		}
	}
	cout << dp[n] << endl;//�����ɽ��n ����Ҫ�����ٽ�ҵ�����
	return 0;
}

//Ҳ����ʹ�� BFS

