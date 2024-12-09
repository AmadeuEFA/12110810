#include <iostream>

using namespace std;

// Função para mudar de linha (equivalente a endl)
void mudaLinha() {
    cout << endl;
}

// Função para imprimir um carimbo personalizado (ajuste conforme necessário)
void meuCarimbo() {
    cout << "----------------------------------------" << endl;
}

// Definição da classe
class NomeDaClasse {
private:
    int valorPrivado; // Membro privado (não acessível fora da classe)

public:
    int valorPublico; // Membro público (acessível fora da classe)

    void funcaoPublica() {
        cout << "Esta é uma função pública." << endl;
    }

    void setValorPrivado(int novoValor) {
        valorPrivado = novoValor;
    }

    int getValorPrivado() {
        return valorPrivado;
    }
};

int main() {
    NomeDaClasse objetoNovo;

    // Aceder 
    objetoNovo.valorPublico = 10;
    cout << "Valor público: " << objetoNovo.valorPublico << endl;

    // Chamar uma função pública
    objetoNovo.funcaoPublica();

    // Usar funções 
    mudaLinha();
    meuCarimbo();

    // Funções públicas)
    objetoNovo.setValorPrivado(5);
    cout << "Valor privado: " << objetoNovo.getValorPrivado() << endl;

    return 0;
}