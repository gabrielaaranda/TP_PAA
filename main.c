#include <stdio.h>
#include <stdlib.h>
#include "FB.h"
#include "AG.h"



int main()
{

    int n,t,k,op;
    printf("\t Digite  quantidade de planetas ");
    scanf("%d",&n);
    printf("\t Digite  quantidade de planetas que deve ser conquistado ");
    scanf("%d",&k);
    printf("\t Digite  quantidade repetição ");
    scanf("%d",&t);
    printf("\t Digite :\n 1 - Guloso \n 2 - Força Bruta \n");
    scanf("%d",&op);
    int d[n];


    if(op==1){
        for(int j=0; j < t;j++){
                for (int i =0;i<n;i++){
        int randomico= rand()%500;
        d[i]= randomico;
    }
            printf("%d \n",ag(d,n,k));
        }
    }
    if(op == 2){
           for(int j=0; j < t;j++){
                for (int i =0;i<n;i++){
        int randomico= rand()%500;
        d[i]= randomico;
    }
            printf("%d \n",menorDistanciaForcaBruta(d,n,k));
        }
    }



    return 0;
}
