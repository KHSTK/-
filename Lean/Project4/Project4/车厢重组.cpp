#include <iostream>
#include <stdlib.h>
using namespace std;
#define N 10000
int main() {
    int n = 0, a[N];
    cout << "���복����" << endl;
    cin >> n;
    cout << "���복��˳��" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int jh = 0;/*���彻������*/
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                jh++;
            }
        }
    }
    cout << "��Ҫ����" << jh << "��" << endl;
    system("pause");
    return 0;
}