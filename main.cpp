#include <iostream>
#include <math.h>
#include <sqrt_test.cpp>

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
int rootDone()
{
    // declaração das variáveis
    int numero;
    int valorRetorno;
    cout << "insira um numero: ";
    cin >> numero;
    valorRetorno = VerificaDelta(numero);
    cout << valorRetorno;
    return 0;
}