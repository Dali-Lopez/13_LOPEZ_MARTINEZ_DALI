#include <stdio.h>
#include <stdbool.h>
#define ROW 10
#define COL 10
bool validar_resta_matriz(int filaA, int colA, int filaB, int colB);
void leer_datos_matriz(int matriz[ROW][COL], int fila, int col);
void imprimir_matriz(int matriz[ROW][COL], int fila, int col);
void Resta_matriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matriz_resultante[ROW][COL], int fila, int col);
int main(void)
{
	int filaA, colA;
	int filaB, colB;
	int matrizA[ROW][COL];
	int matrizB[ROW][COL];
	int matriz_resultante[ROW][COL];
	printf("\n\nMATRIZ 1\n");
	printf("Introduce la fila de la matriz A : ");
		scanf("%d", &filaA);
	
	printf("Introduce la columna de la matriz B : ");
		scanf("%d", &colA);	

	printf("\n\nMATRIZ 2\n");
	printf("Introduce la fila de la matriz B : ");
		scanf("%d", &filaB);
	
	printf("Introduce la columna de la matriz B : ");
		scanf("%d", &colB);
	if (validar_resta_matriz( filaA, colA, filaB, colB))
		{
			leer_datos_matriz(matrizA, filaA, colA);
			leer_datos_matriz(matrizB, filaB, colB);

			imprimir_matriz(matrizA, filaA, colA);	
			imprimir_matriz(matrizB, filaB, colB);

			Resta_matriz( matrizA,  matrizB,  matriz_resultante,  filaA,  colA);	
			
			printf("El resultado de la suma es : \n");
				imprimir_matriz(matriz_resultante, filaA, colA);
		}else 
			{
				printf("No se puede realizar la suma de matricez \n");
			}	
	return 0;
}
void leer_datos_matriz(int matriz[ROW][COL], int fila, int col)
{
	printf("\n\n\n");
	for (int i = 0; i < fila; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("Introduce el elemento [%d][%d] : ", i, j);
				scanf("%d", &matriz[i][j]);
		}
	}
}


bool validar_resta_matriz(int filaA, int colA, int filaB, int colB)
{
	if ((filaA == filaB) && (colA == colB))
	{
		return true;		
	}
	return false;
}


void imprimir_matriz(int matriz[ROW][COL], int fila, int col)
{
	printf("\n\n\n");
	for (int i = 0; i < fila; ++i)
	{
		printf("|");
		for (int j = 0; j < col; ++j)
		{
			printf(" %d ", matriz[i][j]);
		}
		printf("| \n");
	}
}


void Resta_matriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matriz_resultante[ROW][COL], int fila, int col)
{
	for (int i = 0; i < fila; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			matriz_resultante[i][j] = matrizA[i][j] - matrizB[i][j];
		}
	}	
}