//Detection of prime numbers in a dynamic array

#include <stdio.h>
#include <stdlib.h>
int main(){
    int key;
    //int A[5] ={1,2,3,4,5};
    int *A;
    int i,j,k,count=0;

    A =(int*)malloc(sizeof(int)*5);
   
    printf("Enter the data:");
     for(k=0; k<5; k++)
    scanf("%d", &A[k]);

    for(j=0;j<5;j++)
    key = A[j];
    if(key%2 == 0){
  printf("The number %d is not a prime number",key);
}
else{
  for(i=3; i<key; i+=2){
    if(key%i==0){
      printf("The number %d is not a prime number",key);
      count = count+1;
      break;
    }
  }
  if(count==0){
  printf("\n The number %d is a prime number",key);
}
}
free(A);
}






