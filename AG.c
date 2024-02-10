#include <stdio.h>
#include <stdlib.h>
#include "AG.h"


int somador_distancias(int distancia[], int tam){
    int resultado=0;
    for(int i=0; i< tam; i++){
        if(distancia[i]>0)
        resultado += distancia[i];

        }

        return resultado;

}



int ag(int dist[], int n, int k) {
    int  ultimo = n - 1;
    int matriz_subdistancia[n][n];
    int resultado = 0;
     for(int i =0 ; i < n ;i++){
       for(int j =0 ; j < n ;j++){
            matriz_subdistancia[i][j]= -1;
        }
    }
    for(int p=0;p<n;p++){
        for (int i = 0; i < k; i++) {
            int melhor = p;

            for (int j = p; j < n; j++) {
                if (dist[j] - dist[ultimo] > dist[melhor] - dist[ultimo]){
                    melhor = j;
                }
            }
            matriz_subdistancia[p][melhor]=dist[melhor];
            ultimo = melhor;
        }
    }

     for (int i = 0; i < n; i++) {
        if(resultado < somador_distancias(matriz_subdistancia[i],n)){

            resultado = somador_distancias(matriz_subdistancia[i],n);

        }

     }




    return resultado;

}

