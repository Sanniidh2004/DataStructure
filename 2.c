//Search an element in an array

#include <stdio.h>
int main(){
    int A[5]= {10,12,15,7,2};
    int key=17;
    int i;
    int count=0; // Assuming element not present
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