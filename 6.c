//Sum of two integers using user defined function

#include <stdio.h>
int add_int(int a, int b); //declaration of function
int x = 10, y=12;
int main(){
    //int x = 10, y = 12;
    int z = 0;

    z = add_int(x,y); //function calling
    printf("The Sum is : %d",z);
}
int add_int(int p, int q){ //definition of function
    int r = 0;
    r = x+y;
    return r;
}
