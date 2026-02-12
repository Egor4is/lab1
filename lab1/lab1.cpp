#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
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

double sum, staf;
int srok;

printf("Сумма (руб.) -> ");
scanf("%lf", &sum);
printf("Срок (мес.) -> ");
scanf("%d", &srok);
printf("Процентная ставка (годовых) -> ");
scanf("%lf", &staf);

printf("\n%-4s %-12s %-10s %-10s\n", "Мес", "Долг", "Процент", "Платеж");

double k = sum / srok;           // k - фиксированная часть долга в месяц
double m = (staf / 12.0) / 100.0; // m - ежемесячная процентная ставка
double ost = sum;               // n - текущий остаток долга
double s = 0;               // s - сумма всех процентов

for (int i = 1; i <= srok; ++i) {
    double p = ost * m;       // p - проценты за текущий месяц
    double o = k + p;       // o - общий платеж за месяц
    s += p;
    printf("%-4d %-12.2f %-10.2f %-10.2f\n", i, ost, p, o);

    ost -= k;
}

printf("\nВсего процентов: %.2f\n", s);

}
