//Add two integers using function and call by value and reference
#include <stdio.h>

int sum (int a,int b);
//void sum(int *a, int *b);
int main(){
    int x,y,num;

    printf("Enter the numbers to be added :");
    scanf("%d %d",&x,&y);
    
   //num = sum(&x, &y);
    num = sum(x,y);  
    printf("The sum is %d",num);
    return 0;
}

int sum(int a,int b){

    return a+b;
}
//void sum(int *a, int *b) {
    //return *a+*b;
    //}   




