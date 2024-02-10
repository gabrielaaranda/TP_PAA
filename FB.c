
#include <stdio.h>
#include <stdlib.h>

// Fun��o para calcular a dist�ncia entre dois planetas
int calcularDistancia(int *distancias, int inicio, int fim) {
    int distanciaTotal = 0;
    for (int i = inicio; i < fim; i++) {
        distanciaTotal += distancias[i];
    }
    return distanciaTotal;
}

// Fun��o para encontrar a menor dist�ncia entre k planetas
int menorDistanciaForcaBruta(int *distancias, int n, int k) {
    int menorDistancia = calcularDistancia(distancias, 0, k);
    for (int i = 1; i <= n - k; i++) {
        int distanciaAtual = calcularDistancia(distancias, i, i + k);
        if (distanciaAtual < menorDistancia) {
            menorDistancia = distanciaAtual;
        }
    }
    return menorDistancia;
}
