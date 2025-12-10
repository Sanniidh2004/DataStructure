//Implement a queue using enqueue, dequeue, peek in a menu-driven operation

# include<stdio.h>
#define N 10

int A[N];
int f=-1, r=-1;

void enqueue();
void dequeue();
void peek();
void traversal();
void isEmpty();
void isFull();

int main(){
    
    int c, i=0;
    while(i!=1){
        printf("\n 1-Enqueue Operation :");
        printf("\n 2- Dequeue Operation :");
        printf("\n 3- Peek Operation :");
        printf("\n 4- isFull Operation :");
        printf("\n 5- isEmpty Operation : ");
        printf("\n 6- Traversal Operation : ");
        scanf(" %d",&c);
        switch(c){
            case 1: printf("\n I am in Enqueue Operation");
                    break;
            case 2: printf("\n I am in Dequeue Operation");
                    break;
            case 3: printf("\n I am doing Peek Operation");
                    break;
            case 4: printf("\n I am in Traversal Operation");
                    break;
            case 5: printf("\n I am in isEmpty Operation");
                    break;
            case 6: printf("\n I am in isFull Operation");
                    break;
            default:printf("\n Wrong Choice");
        }
        printf("\n\nDo u want to cont...");
        scanf("%d",&i);
        printf("\n\n");
    }
}


void enqueue(){
    {
     if(r==-1){
        r=0;
        f=0;
        printf("\n Enter the data for Queue : ");
        scanf("%d",&A[r]);
    }
    else{
        r=r+1;
        printf("\n Enter the data for Array :");
        scanf("%d",&A[r]);
    }
}

}
void dequeue(){
     int j;
    if(r==-1){
        printf("\n The array is Empty ");
    }
    else {
        for(int j=f;j<r;j++){
            A[j]=A[j+1];
        }
        r=r-1;
    }
  
}
void peek(){
    printf("First element is : %d", A[r]);
}
void traversal()
    {
    int j;
    for(j=f;j<=r;j++){
        printf("\n %d - %d",j,A[j]);
    }
}

void isEmpty(){
    if(f==-1 || f>r){
        printf("\n The array is Empty ");
    }
}
void isFull(){
    int j;
    if(r>N-1){
        printf("\n The array is Full ");
    }

}


