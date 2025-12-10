#include<stdio.h>
int swap(int *a, int *b);
void disp(int *arr, int N);
int main(){
    int i,j,temp, N=6;
    int A[]={35,33,27,14,10,7};
    for(j=0;j<N-1;j++)
    {
        printf("\nPass : %d\n", j+1);
        disp(A,N);
        for(i=0;i<N-1-i;i++){
            if(A[i]>A[i+1]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
            disp(A,N);
        }
    }
}
void disp(int *arr, int N){
    for(int k=0;k<N;k++){
        
    }
}