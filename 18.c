//Implement a queue using enqueue, dequeue, peek in a menu-driven operation

# include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


struct Node *head=NULL, *temp;


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
 struct Node *ptr;
    if(head==NULL){
        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("\n Enter the data : ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
        temp=ptr;
    }
    else{
        ptr=(struct Node *)malloc(sizeof(struct Node));
        printf("\n Enter the data : ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        temp->next=ptr; //Linking
        ptr->prev=temp;
        temp=ptr;
    }  

}
void dequeue(){
 struct Node *temp;
    temp=head;
    head=head->next;
    free(temp);
  
}
void peek(){
  printf("\n Enter the first element: %d"); 
}
void traversal(){
 struct Node *p;
    p=head;
    if(head==NULL){
        printf("\n The List is empty\n");
    }
    else{
        while(p!=NULL){
            printf("\t The data is : %d ",p->data);
            p=p->next;
        }
    }    
}

void isEmpty(){
 if (head== NULL){
    printf("\nQueue is empty");
 } 
}
void isFull(){
   ptr=(struct Node*)malloc(sizeof(struct Node));
   if(ptr==NULL){
    printf("\n Queue is full");
   }
}
