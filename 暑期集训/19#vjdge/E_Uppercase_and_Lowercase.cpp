#include<bits/stdc++.h>  
using namespace std;  
#define int long long  
#define endl "\n"  
const int N = 1e6 + 10; // ע����������ڴ�����û��ֱ��ʹ�ã�������Ҳû����  
const double eps = 1e-7; // �������ͬ���ڴ�����û��ʹ��  
  
signed main(){  
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);  
    cout.tie(nullptr);  
  
    string s, sx = "", sk = ""; // ��ʼ�� sx �� sk Ϊ���ַ���  
    cin >> s;  
  
    int a = 0, b = 0;  
    for(char x : s){  
        if(x >= 'a' && x <= 'z'){  
            a++;  
            sx += x;  
            sk += (x - 'a' + 'A'); // ��Сдת��Ϊ��д����ӵ� sk  
        }  
        else if(x >= 'A' && x <= 'Z'){ // ȷ��ֻ�����д��ĸ  
            b++;  
            sx += (x - 'A' + 'a'); // ����дת��ΪСд����ӵ� sx  
            sk += x;  
        }  
    }  
  
    if(a > b){  
        cout << sx << endl; // ���Сд��ĸ��ɵ��ַ���  
    }  
    else{  
        cout << sk << endl; // �����д��ĸ��ɵ��ַ���  
    }  
  
    return 0;  
}