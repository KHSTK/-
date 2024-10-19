#include <iostream>
#include <stdlib.h>
using namespace std;
#define N 10000
int main() {
    int n = 0, a[N];
    cout << "输入车厢数" << endl;
    cin >> n;
    cout << "输入车厢顺序" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int jh = 0;/*定义交换次数*/
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                jh++;
            }
        }
    }
    cout << "需要交换" << jh << "次" << endl;
    system("pause");
    return 0;
}