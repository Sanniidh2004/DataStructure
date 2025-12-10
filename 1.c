//Declaring an array using static and dynamic allocation

#include <stdio.h>
 int main()
{
    int A[5]; //Static array declaration
    int i;

// int *ptr;
    //ptr = (int*)malloc(sizeof(int)*5); //Dynamic array  declaration
    for(i=0;i<5;i++){

    printf("Enter the value of %d:\n",i);
    scanf("%d", &A[i]);
    }
    for(i=0;i<5;i++)
    printf("The array is : %d",A[i]);
return 0;
}