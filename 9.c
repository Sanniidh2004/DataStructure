//Program the data of employees using structure

#include <stdio.h>
struct Emp{
  int ID;
  char Name[20];
  char G;
};
struct Emp e1,e2; //struct Emp e[100];

int main(){
    printf("Enter the Employee ID :");
    scanf("%d", &e1.ID);
    printf("Enter the Employee Name :");
    scanf("%s", e1.Name);
    printf("Enter the Employee Gender :");
    scanf("%c", &e1.G);
    
    printf("Enter the Employee ID :");
    scanf("%d", &e2.ID);
    printf("Enter the Employee Name :");
    scanf("%s", e2.Name);
    printf("Enter the Employee Gender :");
    scanf("%c", &e2.G);
}

