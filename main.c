#include <stdio.h>
#include <locale.h>

int main() {
    int linhas, colunas;
	
	setlocale(LC_ALL,"Portuguese");
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

   
    if (linhas <= 0 || colunas <= 0) {
        printf("Número de linhas ou colunas inválido.\n");
        return 1;
    }

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

   
    int t [colunas][linhas];
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            t[i][j] = matriz[j][i];
        }
    }

 
    printf("Matriz Transposta:\n");
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

