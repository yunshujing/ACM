#include <iostream>  
#include <vector>  
  
using namespace std;  
  
// �������ڼ��㽫��������Ԫ�ر�Ϊ��ͬ��ż����������ٲ�����  
int minOperationsToUniformParity(const vector<int>& a) {  
    int oddCount = 0;  
    for (int num : a) {  
        if (num % 2 != 0) {  
            ++oddCount;  
        }  
    }  
    // ֱ�ӷ���������������Ϊ������Ҫ�����Ǳ�Ϊż��  
    return oddCount;  
}  

int main() {  
    int t; // ����������  
    cin >> t;  
  
    while (t--) {  
        int n; // ��ǰ���������������С  
        cin >> n;  
  
        vector<int> a(n);  
        for (int i = 0; i < n; ++i) {  
            cin >> a[i];  
        }  
  
        // ���㲢������ٲ�����  
        cout << minOperationsToUniformParity(a) << endl;  
    }  
  
    return 0;  
}