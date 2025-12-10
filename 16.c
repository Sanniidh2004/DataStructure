//Doubled Linked List by ISRAJALI sir

#include<stdio.h>
#include<stdlib.h>

 struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};


struct Node *head=NULL, *temp;

int insertion();
int deletion();
int Searching();
int Sorting();
int Traversal();
int Reversal();

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
            case 1: printf("\n I am in Insertions Operation");
                    insertion();
                    break;
            case 2: printf("\n I am in Deletion Operation");
                    insertion();
                    break;
            case 3: printf("\n I am in Search Operation");break;
            case 4: printf("\n I am in Sorting Operation");break;
            case 5: printf("\n I am in Traversal Operation");
                    Traversal();
                    break;
            case 6: printf("\n I am in Reversal Operation");
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
int deletion(){
    struct Node *p,*temp;
    p=head;
    if(head==NULL){
        printf("\n The List is empty\n");
    }
  else{
        while((p->next)->next!=NULL){
            p=p->next;
        }
        temp=p->next;
        p->next=NULL;
        free(temp);
    }
}
int insertion_Beg(){
    struct Node *temp;
    
}
int insertion_after(){
ptr = (struct Node *)malloc(sizeof(struct Node));
ptr->data=2;
ptr->next = p->next;
p->next = ptr;
    
}
int deletion_Beg(){
    struct Node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
int Searching(){
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data = 2;
    ptr->next = NULL;
    ptr->next = p->next;
    p->next = ptr;
    int key;
    
        while(p->next!=NULL){
            if((p->next)->data == key){
          printf("\t The key element: %d ",key);
        }
        }
    
    }

int Sorting(){
    
}
int Traversal(){
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
int Reversal(){
    struct Node *p;
    p=head;

        while(p->prev!=NULL){
            p=p->next;
        }
        while(p->prev!=NULL){
            printf("\nThe element is %d" ,p->data);
            p=p->prev;
        
        }

}