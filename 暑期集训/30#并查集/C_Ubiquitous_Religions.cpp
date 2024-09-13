// #include<bits/stdc++.h>
#include <vector>  
#include <iostream>  
#include <cstdio>  
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

vector<int> p(N);//�ҵĸ�����˭
vector<int> siz(N);//���ϴ�С
//��ʼ��
void init(int n){
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;//�Լ����Լ��ļ໤��
        siz[i] = 1;
    }
    
}
//���Լ������������ ����O(1)
int find(int x){
    if(x != p[x]){
        p[x] = find(p[x]);//·��ѹ��[better!]
    }
    return p[x];
}
//�ϲ�
void merge(int u,int v){
    int pu = find(u);
    int pv = find(v);
    if(pu!=pv){
        siz[pv] += siz[pu];
        p[pu] = pv;
    }
}

signed main(){
    int n, m;
    int cnt = 1,sum=0;
    while(scanf("%lld %lld", &n, &m)&&n!=0&&m!=0){
        init(n);
        while(m--){
            int a, b;
            scanf("%lld %lld", &a, &b);
            merge(a, b);
        }

        sum = 0;
        for (int i = 1; i <= n; i++)
            if (p[i] == i)
                sum++;

        printf("Case %lld: %lld\n", cnt, sum);
        cnt++;
    }
    return 0;
}