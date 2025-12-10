//Linked list code shared by ISRAJALI sir

# include<stdio.h>
#define N 10
int A[N];
int ilb=-1, iub=-1;


int insertion();
int insertion_Begin();
int insertion_After();
int deletion();
int Searching();
int Sorting();
int Traversal();
int deletion_Begin();
int deletion_Begin1();
int Reversal();
int insertion_After();

int main(){
    
    int c, i=0;
    while(i!=1){
        printf("\n 1- Insertion Operation");
        printf("\n 2- Deletion Operation");
        printf("\n 3- Searchin Operation");
        printf("\n 4- Sorting Operation");
        printf("\n 5- Traversal Operation\n : ");
        scanf(" %d",&c);
        switch(c){
            case 1: printf("\n In am in Insertions Operation");
                    insertion_Begin();
                    break;
            case 2: printf("\n In am in Deletion Operation");
                    //deletion_Begin1();
                    insertion_After();
                    break;
            case 3: printf("\n In am in Search Operation");break;
            case 4: printf("\n In am in Sorting Operation");break;
            case 5: printf("\n In am in Traversal Operation");
                    Traversal();
                    break;
            case 6: printf("\n In am in Reversal Operation");
                    Reversal();
                    break;
            default:printf("\n Wrong Choice");
        }
        printf("\n\nDo u want to cont...");
        scanf("%d",&i);
        printf("\n\n");
    }
}
int insertion(){
    if(iub==-1){
        iub=0;
        ilb=0;
        printf("\n Enter the data for Array");
        scanf("%d",&A[iub]);
    }
    else{
        iub=iub+1;
        printf("\n Enter the data for Array");
        scanf("%d",&A[iub]);
    }
}
int deletion_Begin1(){
    int j;
    if(iub==-1){
        printf("\n The array is Empty ");
    }
    else {
        for(int j=ilb;j<iub;j++){
            A[j]=A[j+1];
        }
        iub=iub-1;
    }
}
int deletion_Begin(){
    int j;
    if(iub==-1){
        printf("\n The array is Empty ");
    }
    else if(ilb<=iub){
        ilb=ilb+1;
    }
    else{
        ilb=-1;
        iub=-1;
        printf("\n The array is Empty");
    }
}
int insertion_Begin(){
    int j;
    if(iub==-1){
        iub=0;
        ilb=0;
        printf("\n Enter the data for Array1: ");
        scanf("%d",&A[iub]);
    }
    else if(iub<N){
        for(j=iub;j>=ilb;j--){
            A[j+1]=A[j];
        } 
        iub=iub+1;
        printf("\n Enter the data for Array2: ");
        scanf("%d",&A[ilb]);
    }
}
int deletion(){
    if(iub==-1){
        ilb==-1;
        printf("\n Array is empty");
    }
    else{
        iub=iub-1;
    }
}
int Searching(){
    
}
int Sorting(){
    
}
int Traversal(){
    int j;
    for(j=ilb;j<=iub;j++){
        printf("\n %d - %d",j,A[j]);
    }
}
int insertion_After(){
    
}
int Reversal(){

}
int insertion_After(){
    int x, y, pos;
    printf("\n Enter number for insertion : ");
    scanf("%d",&x);
    printf("\nEnter the number after which you want to enter : ");
    scanf("%d",&y);
    for(int j=iub;j>=ilb;j--){
        if(A[j]==y){
            for(int k=iub;k>j;k--){
                A[k+1]=A[k];
            }
            A[j]=x;
            break;
        }
    }
}