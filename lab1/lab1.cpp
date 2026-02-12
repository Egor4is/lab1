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

    double x0;
    double x_end = 4;
    int n=10;
    cin>>x0;
    double step = (x_end - x0)/ (n-1);
        for (int i=0; i < n; i++) {
           double x = x0 + i * step;
           if (x == 0) {
               int y=1;
           }
           else {
           double y = sin(x)/x;
    
    cout << "i=" << i << "\t\t" << "x=" << x << "\t\t" << "y=" << y << " \t\t " << endl;
 }   
}

}
