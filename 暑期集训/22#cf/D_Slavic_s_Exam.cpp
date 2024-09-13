#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e6 + 10;
const double eps =1e-4;

string canFormSubsequence(const string& s, const string& t) {  
    string result = s; // ����s��result���Ա��޸�  
    int j = 0; // t��ָ��
    bool flag = 0;
    for (int i = 0; i < result.size() && j < t.size(); ++i) {  
        if (result[i] == '?' || result[i] == t[j]) {  
            // ���result[i]��'?'�����Ѿ�ƥ������t[j]�����滻'?'Ϊt[j]���������'?'�Ļ���  
            if (result[i] == '?') {  
                result[i] = t[j];  
            }  
            ++j; // �ƶ�t��ָ��
            if(j==t.size()){
                j = 0;
                flag = 1;
            }
        }  
        // ���result[i]����'?'�Ҳ�����t[j]�����������result������Ҫ�滻  
    }  
    // ����Ƿ����е�t�е��ַ�����ƥ����  
    if (flag) {  
        return "YES\n" + result;  
    } else {  
        return "NO";  
    }  
}  
  
signed main() {  
    int T;  
    cin >> T;  
    cin.ignore(); // ����T����Ļ��з�  
    while (T--) {  
        string s, t;  
        getline(cin, s); // ��ȡ������Ϊs  
        getline(cin, t); // ��ȡ������Ϊt  
        cout << canFormSubsequence(s, t) << endl;  
    }  
    return 0;  
}