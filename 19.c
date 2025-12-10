//WAP in C to check the number of open and close parenthesis for the expression (((A+B)*D/E)+F^I*G 

#include <stdio.h>
int main() {
    char A[] = "(((A+B)*D/E)+F^I*G";
    //char A[100];
    int counto = 0,countc = 0;
    int i;

//printf("Enter the expression: ");                     //user-defined expression
//scanf("%s", A[]);                          

    for(i=0; A[i]!='\0';i++){
        if (A[i] == '(') {
            counto++;
        }
            else if(A[i] == ')'){
                countc++;

            }
    }

    printf("Number of Open parentheses: %d\n", counto);
    printf("Number of Closed parentheses: %d", countc);
return 0;
}