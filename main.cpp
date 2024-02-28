#include <iostream>
#include <math.h>
#include <C:\Users\Arauj\OneDrive\Documentos\C++\sqrt_test.cpp>

using namespace std;

// Declaração das funções a serem usadas

/*Essa função tem como objetivo recber um número (delta de uma equação do segundo grau)
    e analisar suas caracteristicas e retornando um valor de 1 a 3 dependendo da sua caracteristica
    1 para um número <0, 2 para um quadrado perfeito e 3 para um núemro positivo não quadrado*/
int VerificaDelta ( int valorD)
{

    // Declaração das variáveis
    int N=1;
    int NAux=3;

    // Análise do primeiro caso
    if (valorD<0){
        return 1;

    }
    // Análise do segundo caso
    while (valorD>N)
    {
        N=N+NAux;
        NAux=NAux+2;
        if(N==valorD){
            return 2;
        }
    
    }
    return 3;
    
}

// Função principal
int main()
{
    
    // declaração das variáveis
    int numero;
    int valorRetorno;
    int valorRaiz[2]={0,0};
    cout << "insira um numero: ";
    cin >> numero;
    valorRetorno = VerificaDelta(numero);
    switch (valorRetorno)
    { 
        case 1:
            cout << "o numero do delta e negativo. ";
            cout << "Consequentemente, essa funcao não tem raizes reais";
        break;
    
        case 2:
            cout << "o numero do delta e um quadrado perfeito. ";
            cout << "Consequentemente, essa funcao tem duas raizes reais\n";
            valorRaiz[0]=sqrt(numero);
            cout << "As raizes sao: + " << valorRaiz[0] << " e -" << valorRaiz[0];
        break;

        case 3:
            cout << "O numero e positivo e nao perfeito. ";
            cout << "Consequentemente, essa funcao tem duas raizes reais\n";
            rootDone(numero, valorRaiz);
            cout << "As raizes sao: + " << valorRaiz[0] << "*/" << valorRaiz[1] << " e -" << valorRaiz[0] << "*/" << valorRaiz[1];
        break;
    }
    
    return 0;
}