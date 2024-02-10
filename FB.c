
#include <stdio.h>
#include <stdlib.h>

// Função para calcular a distância entre dois planetas
int calcularDistancia(int *distancias, int inicio, int fim) {
    int distanciaTotal = 0;
    for (int i = inicio; i < fim; i++) {
        distanciaTotal += distancias[i];
    }
    return distanciaTotal;
}

// Função para encontrar a menor distância entre k planetas
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
