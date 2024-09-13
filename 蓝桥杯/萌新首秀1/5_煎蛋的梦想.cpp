#include <iostream>
using namespace std;

// �������ڼ���n����С��������
int minHeat(int n) {
    int heat = 0;
    // ����������Ϊ2�����
    while (n % 2 == 0) {
        heat += 2;
        n /= 2;
    }
    
    // ����������������
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            heat += i;
            n /= i;
        }
    }
    
    // ���n������������ֱ�Ӽ�n
    if (n > 1) {
        heat += n;
    }
    
    return heat;
}

int main() {
    int n;
    cin >> n;
    cout << minHeat(n) << endl;
    return 0;
}
