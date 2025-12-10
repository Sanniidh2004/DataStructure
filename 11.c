//Fibonacci series using function and call by value and call by reference

#include <stdio.h>
int fibonacci(int n) {
    int a = 0, b = 1, d;
    if (n == 0)
        return a;
//void fibonacci(int n, int *d) {
//int a = 0, b = 1, d;
//if (n == 0) {
//return a;
//}

for(int i=3; i <= n; i++){
    printf("%d ", d);
d = a + b;
a = b;
b = d;
}
//*d = b;
return b;
}
int main()
{
    int n;
printf("Length of the Fibonacci series :");
scanf("%d", &n);
for(int i = 0; i <n; i++){
printf("\nThe Fibonacci series is : %d  ", fibonacci(i));
}
return 0;
}




    
   

