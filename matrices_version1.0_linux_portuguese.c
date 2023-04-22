#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Functions
void title(void);
void options(void);
void checknumber(void);
void sumMatrices(void);
void subtractionMatrices(void);
void multiplicationMatrices(void);

//Global variable
int gChoose;

int main() {
    system("clear");
    checknumber();
    system("clear");
    title();
    printf("______________________________________________________________");
    printf("\nObrigado por usar meu programa\n");
    printf("Me siga no GitHub: https://github.com/DuduArts01");
    printf("\n\n------------------------------------------------------------\n");
    printf("                    Programa finalizado\n");
    printf("------------------------------------------------------------\n");
    //End

    return 0;
}

void title(void){
    printf("\n------------------------------------------------------------\n");
    printf("                        Matrizes\n");
    printf("------------------------------------------------------------\n");
    printf("Feito por DuduArts01\n");
    printf("_____________________________________________________________\n\n");
}

void options(void) {
    printf("\n\n------------------------------------------------------------\n");
    printf("            Escolha uma das opções abaixo:\n");
    printf("------------------------------------------------------------\n");
    printf("1. Soma de Duas Matrizes\n");
    printf("2. Subtração de Duas Matrizes\n");
    printf("3. Multiplicação de Duas Matrizes\n");
    printf("____________________________________________________________\n");
}

void checknumber(void){
    bool validLoop = true;
    bool validLoop2 = false;
    
    int chooseContinue;   
    bool end = false;
    
    while(validLoop){
        system("clear");
        title();
        options();

        printf("Escolha(numero): ");
        scanf("%i", &gChoose);
        
        switch(gChoose){
            case 1:
                sumMatrices();
                end = true;
            break;
            
            case 2:
                subtractionMatrices();
                end = true;
            break;
            
            case 3:
                multiplicationMatrices();
                end = true;
            break;

            default:
                printf("\nNúmero inválido! Tente novamente\n");
                printf("\nPressione a tecla enter para continuar\n");
                getchar();
                getchar();
                system("clear");
            break;       
        }

        if(end == true){
            validLoop2 = true;
            while(validLoop2){
                printf("\nVocê quer continuar? \nSim --> 1\nNão --> 0\nEscolha: ");
                scanf("%i", &chooseContinue);
                    
                if(chooseContinue == 1){
                    end = false;
                    validLoop2 = false;

                } else if(chooseContinue == 0){
                    end = false;
                    validLoop = false;
                    validLoop2 = false;
                } else {
                    printf("\nNúmero inválido! Tente novamente\n");
                    printf("\nPressione a tecla enter para continuar\n");
                    getchar();
                    getchar();
                    system("clear");
                }
            }
            
        }
        
    }
}

void sumMatrices(void){
    int line, column;
    system("clear");
    title();
    printf("\n------------------------------------------------------------\n");
    printf("                    Soma de Duas Matrizes\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nTipo Matriz: \nLinha = ");
    scanf("%i", &line);
    printf("Coluna = ");
    scanf("%i", &column);
    // line and column of matrices

    printf("\n");

    int A[line][column], B[line][column], sum[line][column];
    // These are all the matrices needed

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("A%i%i = ", i, j);
            scanf("%i", &A[i][j]);
        }
    }
    //input values of matrice A

    printf("\n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("B%i%i = ", i, j);
            scanf("%i", &B[i][j]);
        }
    }
    //input values of matrice B

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    //Calculate sum of two matrices

    for(int i = 0; i < line; i++){
        printf("\n");
        printf("[");
        for(int j = 0; j < column; j++){
            printf("%i ", sum[i][j]);
        }
        printf("]");
    }
    //print of sum of two matrices

    printf("\n---------------------Cálculo Concluído---------------------\n");
}

void subtractionMatrices(void){
    int line, column;
    system("clear");
    title();
    printf("\n------------------------------------------------------------\n");
    printf("                    Subtração de Duas Matrizes\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nTipo Matriz: \nLinha = ");
    scanf("%i", &line);
    printf("Coluna = ");
    scanf("%i", &column);
    // line and column of matrices

    printf("\n");

    int A[line][column], B[line][column], sub[line][column];
    // These are all the matrices needed

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("A%i%i = ", i, j);
            scanf("%i", &A[i][j]);
        }
    }
    //input values of matrice A

    printf("\n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("B%i%i = ", i, j);
            scanf("%i", &B[i][j]);
        }
    }
    //input values of matrice B

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            sub[i][j] = A[i][j] - B[i][j];
        }
    }
    //Calculate subtraction of two matrices

    for(int i = 0; i < line; i++){
        printf("\n");
        printf("[");
        for(int j = 0; j < column; j++){
            printf("%i ", sub[i][j]);
        }
        printf("]");
    }
    //print of subtraction of two matrices

    printf("\n---------------------Cálculo Concluído---------------------\n");
    
}

void multiplicationMatrices(void) {
    int lineA, columnA, lineB, columnB;
    system("clear");
    title();
    printf("\n------------------------------------------------------------\n");
    printf("                    Multiplicação de Duas Matrizes\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nTipo de Matriz A: \nLinha = ");
    scanf("%i", &lineA);
    printf("Coluna = ");
    scanf("%i", &columnA);
    // line and column of matrice A

    printf("\nTipo de Matriz B: \nLinha = ");
    scanf("%i", &lineB);
    printf("Coluna = ");
    scanf("%i", &columnB);
    // line and column of matrice B
    

    printf("\n");
    
    //check the array, if it exists

    if (columnA != lineB) {
        printf("O produto dessa matriz não existe!");
    } else {
        int A[lineA][columnA], B[lineB][columnB], product[lineA][columnB];
        // These are all the matrices needed

        int iA, jA, iB, jB, count; // lines and columns

        for(int i = 0; i < lineA; i++){
            for(int j = 0; j < columnA; j++){
                printf("A%i%i = ", i, j);
                scanf("%i", &A[i][j]);
            }
        }
        //input values of matrice A

        printf("\n");
        for(int i = 0; i < lineB; i++){
            for(int j = 0; j < columnB; j++){
                printf("B%i%i = ", i, j);
                scanf("%i", &B[i][j]);
            }
        }
        //input values of matrice B
        
        for(iA = 0; iA < lineA; ++iA){
            for(jB = 0; jB < columnB; ++jB){
                for(jA = 0, iB = 0, count = 0; jA < columnA; ++jA, ++iB){
                    product[iA][jB] = (count != 0)? product[iA][jB] += (A[iA][jA] * B[iB][jB]) : A[iA][jA] * B[iB][jB];
                    ++count;                                        
                }
            }
        }
        //Calculate Multiplication of two matrices
    for(int i = 0; i < lineA; i++){
        printf("\n");
        printf("[");
        for(int j = 0; j < columnB; j++){
            printf("%i ", product[i][j]);
        }
        printf("]");
    }
    //show result of multiplication

    printf("\n---------------------Cálculo Concluído---------------------\n");

    }
}
