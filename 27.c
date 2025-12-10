//Binary search 

#include<stdio.h>
int main(){
    int n, mid, top= n-1, bottom=0, key, i, j;
    int a[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Enter key element: ");
    scanf("%d\n, &key");

    mid= (top+bottom)/2;
while(key!=a[mid && bottom <= top]){
    
    if(key<a[mid]){
        top=mid-1;
   
    }
    else if(key>a[mid]){
        bottom= mid+1;
    }
    else if(mid==key)
    
printf("Element found!\n");
}
{
    printf("Element not found");
}

return 0;
}
        
    

