#include <iostream>
using namespace std;
int main() { 
    float C, F;
    cout << "Digite a temperatura em Celsius: ";
    cin >> C;
    F = (C * 9/5) + 32;
    cout << "A temperatura em Fahrenheit é: " << F << endl;
    return 0;
}
