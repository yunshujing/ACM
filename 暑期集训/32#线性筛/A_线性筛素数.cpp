#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
const int N = 1e8;
int prime[N + 5]; // ��������������±��0��ʼ
int vit[N + 5];   // �Ƿ�ɸ��
int k = 0;        // ͳ����������

/* // ����ɸ
void E_sieve(int n){
    // ��ʼ��
    k = 0;
    for (int i = 0; i <= n; i++){
        vit[i] = 0;
    }
    //
    for (int i = 2; i * i <= n; i++){
        if (vit[i] == 0){
            for (int j = i * i; j <= n; j += i){
                vit[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++){
        if (vit[i] == 0){
            prime[k++] = i;
        }
    }
}
 */
// ŷ��ɸ O(n)
// ��ÿһ����ֻ���Լ���С��������ɸ��
void E_sieve(int n){
    // ��ʼ��
    k = 0;
    for (int i = 0; i <= n; i++){
        vit[i] = 0;
    }
    // ��ɸ�ӵ��� ÿһ����
    for (int i = 2; i <= n; i++){
        // ������ֱ�Ӵ���
        if (vit[i] == 0){
            prime[k++] = i;
        }
        // ö�ٵı������Ѿ��е��������������Ҫ��Ϊ��������
        for (int j = 0; j < k; j++){
            // ����n�˳�
            if (i * prime[j] > n){
                break;
            }
            vit[i * prime[j]] = 1; // ����ɸ��
            // ��������С�������ӣ��������������ӾͲ��ÿ���
            if (i % prime[j] == 0){
                break;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    E_sieve(n);
    while (q--)
    {
        int x;
        cin >> x;
        cout << prime[x - 1] << endl;
    }
}