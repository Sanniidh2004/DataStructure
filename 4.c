//Detect if an element is a prime number or not

#include <stdio.h>
int main(){
    int n=17;
    int i;
   
    for(i=2;i<n;i++){
        if(n%i==0)
printf("It is not a prime number");
    else{
    printf("It is a prime number");
    break;
    }
}
  return 0;  
}

//#include<stdio.h>
//int main(){
  //int key = 17;
  //int i, count =0;

//if(key%2 == 0){
  //printf("The number %d is not a prime number",key);
//}
//else{
  //for(i=3; i<key; i+=2){
    //if(key%i==0){
      //printf("The number %d is not a prime number",key);
      //count = count+1;
      //break;
    //}
  //}
  //if(count==0){
  //printf("\n The number %d is a prime number",key);
//}
//}
//}