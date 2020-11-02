#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x,a,s=0,d=1,f=1,b1,b2,an;
    int k=1,n=2;
    cin >> x;
    do
    {
        d *= x; //збільшення степеня х на 1
        f *= n * (n - 1); //обрахунок факторіалу
        a = d / f; //отримання елементу суми
        s += a; //додавання до змінної суми
        n += 2; //збільшення n з кроком 2
        k++; //ітератор цикла
    } while (k<=10 && abs(a) >= 0.00001);
    cout<<fixed<<setprecision(2)<<s << endl;
}
