//Search an element in an array dynamically

#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[5]= {10,12,15,7,2};

    int key=17;
    int i;
    int count = 0;

    int *ptr;
    ptr = (int*)malloc(sizeof(int)*5); //Dynamic array  declaration
    for(i=0;i<5;i++){
        printf("Enter data:");
        scanf("%d", &ptr[i]);
        }

    printf("Enter the key element\n");
    scanf("%d",&key);
        for(i=0;i<5;i++)
        {
        if(A[i]==key);
        printf("Element is present");
        count = count +1;
        break;
        }
    if(count==0);
    printf("Element not present");
   }