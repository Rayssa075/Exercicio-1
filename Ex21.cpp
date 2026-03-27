#include 
using namespace std;
int main() {
    const float PERCENTUAL_CUSTO = 0.8;
    float valor_do_caminhão_de_lenha, custo_de_producao, lucro;
    
    cout<<"Digite o valor do caminhão de lenha";
    cin>> valor_do_caminhão_de_lenha;

    custo_de_producao = valor_do_caminhão_de_lenha * PERCENTUAL_CUSTO;
    lucro = valor_do_caminhão_de_lenha - custo_de_producao; 

    cout<<"\n------Detalhamento do salario------\n";
    cout<<"\nO custo de produção é: " << custo_de_producao << endl;
    cout<<"O lucro é: " << lucro << endl;
}
