// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl "\n"
// const int N = 1e6 + 10;
// const double eps =1e-4;
// //int a[N];
// //vector <int> a;

// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);cout.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int l, r;
//         cin >> l >> r;


//     }
    
//     return 0;
// }
#include <iostream>  
#include <vector>  
#include <cmath>  
  
using namespace std;  
  
// ����һ������ʽ�ĺ��������ڹ��ƽ�����n��Ϊ0����Ĳ�������  
// ע�⣺��������ǽ��Ƶģ����ҿ��ܲ������ŵ�  
int estimateOperations(int n) {  
    if (n == 0) return 0;  
    if (n % 3 == 0) return 1 + estimateOperations(n / 3); // �����3�ı����������3  
    else return 2 + estimateOperations(n % 3 == 2 ? (n / 3) * 3 + 2 : (n / 3) * 3 + 1); // �����ȳ���3ȡ���ٳ���3��Ȼ����϶���Ĳ���  
    // ע�⣺����Ĳ����ǽ��Ƶģ���û�п��ǵ����ŵĺϲ������Ų���  
}  
  
// ��������[l, r]���������ֱ�Ϊ0�������С��������������ʽ�ⷨ��  
int minOperationsInRange(int l, int r) {  
    int totalOperations = 0;  
    for (int i = l; i <= r; ++i) {  
        totalOperations += estimateOperations(i);  
    }  
    return totalOperations;  
}  
  
int main() {  
    int t;  
    cin >> t; // ��ȡ������������  
    while (t--) {  
        int l, r;  
        cin >> l >> r; // ��ȡÿ������������l��r  
        cout << minOperationsInRange(l, r) << endl; // �����������ٲ��������Ľ���ֵ  
    }  
    return 0;  
}