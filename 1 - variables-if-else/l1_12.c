/*
(BOCA:L1_12) Problema: Faça um programa que coloque números em ordem
crescente.
 Entrada: 3 números inteiros diferentes.
 Saída: Números inteiros em ordem crescente com suas respectivas posições anteriores.
 Exemplo de Entrada:
1 2 3
4 1 3
 Exemplo de Saída:
N1 = 1, N2 = 2, N3 = 3
N2 = 1, N3 = 3, N1 = 4
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int n1, n2, n3;
	
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if (n1>n2 && n2>n3){
	
		printf("N3 = %d, N2 = %d, N1 = %d", n3, n2, n1);
	
		}

	if (n1>n3 && n3>n2){
	
		printf("N2 = %d, N3 = %d, N1 = %d", n2, n3, n1);
	
		}
	
	if (n2>n1 && n1>n3){
	
		printf("N3 = %d, N1 = %d, N2 = %d", n3, n1, n2);
	
		}

	if (n2>n3 && n3>n1){
	
		printf("N1 = %d, N3 = %d, N2 = %d", n1, n3, n2);
	
		}

	if (n3>n1 && n1>n2){
	
		printf("N2 = %d, N1 = %d, N3 = %d", n2, n1, n3);
	
		}

	if (n3>n2 && n2>n1){
	
		printf("N1 = %d, N2 = %d, N3 = %d", n1, n2, n3);
	
		}


	return 0;
	}
