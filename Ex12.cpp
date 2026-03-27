#include 
using namespace std;
int main () {
    int a, b, c, d, e, f ;
    cout<< " Insira o ano em que você nasceu e o ano atual: ";
    cin>> e >> f;
    a = f - e;
    b = a * 12;
    c = b * 30;
    d = c / 7;
    cout<< "Sua idade em anos é: " << a << " sua idade em meses é: " << b << " sua idade em dias é: " << c << " sua idade em semanas é: " <<
 d;
    return 0;
}
