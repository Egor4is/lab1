#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int MAX;
    cout << "MAX: ";
    cin >> MAX;
    int a = 0, b = 1;
    int S = 0;
    int N = 0;
    cout << "Числа: ";
    while (S <= MAX) {
        cout << a << " ";
        S += a;
        N++;
        int next = a + b;
        a = b;
        b = next;
    }
    cout << "N=" << N << " ";
    cout << "S=" << S << "\n";
}