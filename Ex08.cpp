#include <iostream>
using namespace std;
int main () {  
   float a, b, x, y ;
   cout<< "digite o valor de seu salario fixo e quanto você vendeu ";
   cin>> a >> b;
   x = b * 0.04;
   y = a + x ;
   cout<< "Sua comissão sera no valor de " << x << " e o salario final " << y ;
    return 0;
}
