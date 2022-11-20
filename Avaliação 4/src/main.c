#include <stdio.h>

int main(){
	// Variaveis para o programa
	int num_falta, n1, n2, n3;

	n1 = 3;
	n2 = 2;
	n3 = 9;
	
	// Exemplo 1
	int v[n1];
	v[0] = 3;	v[1] = 0;	v[2] = 1;

	// Exemplo 2
	int t[n2];
	t[0] = 0;	t[1] = 1;

	// Exemplo 3
	int m[n3];
	m[0] = 9;	m[1] = 6;	m[2] = 4;	m[3] = 2;	m[4] = 3;
	m[5] = 5;	m[6] = 7;	m[7] = 0;	m[8] = 1;

	//Fazendo a chamada de cada exemplo em uma função
	num_falta = verificar(v, n1);
	printf("Numero que falta no primeiro exemplo: %d\n", num_falta);

	num_falta = verificar(t, n2);
	printf("Numero que falta no segundo exemplo: %d\n", num_falta);

	num_falta = verificar(m, n3);
	printf("Numero que falta no ultimo exemplo: %d\n", num_falta);

	return (0);
}

	//Função para indentificar qual número que falta
int verificar(int vetor[], int tamanho){
	int i, somador, testador;
	testador = 0;
	somador = 0;

	for(i = 0; i < tamanho; i++){
		testador += tamanho - i;
		somador += vetor[i];
	}

	return testador - somador;
}