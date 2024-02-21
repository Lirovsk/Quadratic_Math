/*This doc contain some functions responsible for solve squares roots. These functions must be capable of solve any kind of positive square root */
#include <iostream>
#include <cmath>

using namespace std;

void rootDone(int n, int VDraiz[2]){
    
    int fatores[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,87,97};
    int V0Expoente[25]={0};
    
    
    int i=0;
    int auxA=1;
    int auxB=1;
    int numero_restante=1;
    while (n>1)
    {
        
        while (n%fatores[i]==0)
        {
            n=n/fatores[i];
            V0Expoente[i]++;
        }
        i++;
        if (i==24 && n>1)
        {
            numero_restante=n;
            n=1;
        }
    }
    for (int j=0; j<24; j++)
    {
        if (V0Expoente[j]>0)
        {
            if (V0Expoente[j]%2==0)
            {
                auxA=auxA*(pow(fatores[j],(V0Expoente[j]/2)));
            
            }else{
                if(V0Expoente[j]!=1)
                {
                    auxA=auxA*(pow(fatores[j],((V0Expoente[j]-1)/2)));
                    auxB=auxB*fatores[j];
                }else {
                    auxB=auxB*fatores[j];
                }
                   
            }
        }
    }
    VDraiz[0]=auxA;
    VDraiz[1]=auxB*numero_restante;
}