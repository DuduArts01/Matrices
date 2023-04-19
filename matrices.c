#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

//Functions
void title(void);
void options(void);
void checknumber(void);
void sumMatrices(void);
void subtractionMatrices(void);

//Global variable
int gChoose;

int main() {
    title();
    options();
    checknumber();
    printf("------------------------------------------------------------\n");
    printf("                    End Program\n");
    printf("------------------------------------------------------------\n");
    //End

    return 0;
}

void title(void){
    printf("------------------------------------------------------------\n");
    printf("                        Matrices\n");
    printf("------------------------------------------------------------\n");
}

void options(void) {
    printf("Choose one of the options below:\n");
    printf("____________________________________________________________\n");
    printf("1. Sum of Two Matrices\n");
    printf("2. Subtraction of two Matrices\n");
    printf("3. Multiplication of two Matrices\n");
    printf("4. Transposed\n");
    printf("5. Inverse\n");
    printf("____________________________________________________________\n");
}

void checknumber(void){
    bool validLoop = true;
    bool validLoop2 = true;
    char chooseContinue;
    
    while (validLoop){ 
        printf("\nChoose(number): ");
        scanf("%i", &gChoose);
        switch (gChoose){
            case 1:
                sumMatrices();
            break;
            
            case 2:
                printf("segunda");
                subtractionMatrices();
            break;
            
            case 3:
                printf("terceira");
            break;
            
            case 4:
                printf("quarta");
            break;
            
            case 5:
                printf("quinta");
            break;
            
            default:
                printf("Number invalid! Try again\n");
                
            }
        while(validLoop2) {
            char chooseContinue;
            printf("Do you want continue? [Y/N]\n");
            scanf("%c", &chooseContinue);
            if((chooseContinue != "y") || (chooseContinue != "Y") || (chooseContinue != "N") || (chooseContinue != "n")){
                printf("Choose Invalid! Try Again using two words Y or N\n");
            } else if ((chooseContinue == "Y") || (chooseContinue == "y")){
                validLoop2 = false;
            } else if((chooseContinue == "N") || (chooseContinue == "n")){
                validLoop = false;
                validLoop2 = false;
            }
        }
    }
}

void sumMatrices(void){
    int line, column;

    printf("------------------------------------------------------------\n");
    printf("                    Sum of two Matrices\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nType Matrice: \nLine = ");
    scanf("%i", &line);
    printf("Column = ");
    scanf("%i", &column);
    // line and column of matrices

    printf("\n");

    float A[line][column], B[line][column], sum[line][column];
    // These are all the matrices needed

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("A%i%i = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    //input values of matrice A

    printf("\n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("B%i%i = ", i, j);
            scanf("%f", &B[i][j]);
        }
    }
    //input values of matrice B

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    //sum of two matrices

    for(int i = 0; i < line; i++){
        printf("\n");
        printf("[");
        for(int j = 0; j < column; j++){
            printf("Sum%i%i = %.3f ", i, j, sum[i][j]);
        }
        printf("]");
    }
    //print of sum of two matrices

    printf("\n---------------------Completed calculation---------------------\n");
}

void subtractionMatrices(void){
    int line, column;

    printf("------------------------------------------------------------\n");
    printf("                    Subtraction of two Matrices\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nType Matrice: \nLine = ");
    scanf("%i", &line);
    printf("Column = ");
    scanf("%i", &column);
    // line and column of matrices

    printf("\n");

    float A[line][column], B[line][column], sub[line][column];
    // These are all the matrices needed

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("A%i%i = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    //input values of matrice A

    printf("\n");
    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            printf("B%i%i = ", i, j);
            scanf("%f", &B[i][j]);
        }
    }
    //input values of matrice B

    for(int i = 0; i < line; i++){
        for(int j = 0; j < column; j++){
            sub[i][j] = A[i][j] - B[i][j];
        }
    }
    //sum of two matrices

    for(int i = 0; i < line; i++){
        printf("\n");
        printf("[");
        for(int j = 0; j < column; j++){
            printf("Subtraction%i%i = %.3f ", i, j, sub[i][j]);
        }
        printf("]");
    }
    //print of subtraction of two matrices

    printf("\n---------------------Completed calculation---------------------\n");
    
}
