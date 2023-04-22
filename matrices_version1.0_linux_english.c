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
    printf("\nThanks for using my program\n");
    printf("Follow me in GitHub: https://github.com/DuduArts01");
    printf("\n\n------------------------------------------------------------\n");
    printf("                    Finished program\n");
    printf("------------------------------------------------------------\n");
    //End

    return 0;
}

void title(void){
    printf("\n------------------------------------------------------------\n");
    printf("                        Matrices\n");
    printf("------------------------------------------------------------\n");
    printf("Made by DuduArts01\n");
    printf("_____________________________________________________________\n\n");
}

void options(void) {
    printf("\n\n------------------------------------------------------------\n");
    printf("            Choose one of the options below:\n");
    printf("------------------------------------------------------------\n");
    printf("1. Sum of Two Matrices\n");
    printf("2. Subtraction of two Matrices\n");
    printf("3. Multiplication of two Matrices\n");
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

        printf("Choose(number): ");
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
                printf("\nNumber invalid! Try again\n");
                printf("\npress enter key to continue\n");
                getchar();
                getchar();
                system("clear");
            break;       
        }

        if(end == true){
            validLoop2 = true;
            while(validLoop2){
                printf("\nDo you want continue? \nYes --> 1\nNo --> 0\nChoose: ");
                scanf("%i", &chooseContinue);
                    
                if(chooseContinue == 1){
                    end = false;
                    validLoop2 = false;

                } else if(chooseContinue == 0){
                    end = false;
                    validLoop = false;
                    validLoop2 = false;
                } else {
                    printf("\nNumber invalid! Try again\n");
                    printf("\npress enter key to continue\n");
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
    printf("                    Sum of two Matrices\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nType Matrice: \nLine = ");
    scanf("%i", &line);
    printf("Column = ");
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

    printf("\n---------------------Completed calculation---------------------\n");
}

void subtractionMatrices(void){
    int line, column;
    system("clear");
    title();
    printf("\n------------------------------------------------------------\n");
    printf("                    Subtraction of two Matrices\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nType Matrice: \nLine = ");
    scanf("%i", &line);
    printf("Column = ");
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

    printf("\n---------------------Completed calculation---------------------\n");
    
}

void multiplicationMatrices(void) {
    int lineA, columnA, lineB, columnB;
    system("clear");
    title();
    printf("\n------------------------------------------------------------\n");
    printf("                    Multiplication of two Matrices\n");
    printf("------------------------------------------------------------\n");
    //title

    printf("\nType Matrice A: \nLine = ");
    scanf("%i", &lineA);
    printf("Column = ");
    scanf("%i", &columnA);
    // line and column of matrice A

    printf("\nType Matrice B: \nLine = ");
    scanf("%i", &lineB);
    printf("Column = ");
    scanf("%i", &columnB);
    // line and column of matrice B
    

    printf("\n");
    
    //check the array, if it exists

    if (columnA != lineB) {
        printf("The product of this matrix does not exist!");
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

    printf("\n---------------------Completed calculation---------------------\n");

    }
}
