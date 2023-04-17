#include <stdio.h>
#include <stdbool.h>

//Functions
void title(void);
void options(void);
void checknumber(void);

//Global variable
int gChoose;

int main() {
    title();
    options();
    checknumber();
    
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
    printf("1. Sum\n");
    printf("2. subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Transposed\n");
    printf("6. Inverse\n");
    printf("____________________________________________________________\n");
}

void checknumber(void){
    bool invalid = false;
    bool validLoop = true;
    
    while (validLoop){
        printf("\nChoose(number): ");
        scanf("%i", &gChoose);
        switch (gChoose){
            case 1:
                printf("Primeira");
            break;
            
            case 2:
                printf("segunda");
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
            
            case 6: 
                printf("sexta");
            break;
            
            default:
                printf("Number invalid! Try again\n");
                invalid = true;
            }
        if (invalid == false) {
            validLoop = false;
        }
    }
}
