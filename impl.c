#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
int choice;
struct node*head;
struct node*newnode;
struct node*temp;
head=NULL;      
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==0)
{
head=temp=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL)
{
printf("the data is%d",temp->data);
temp=temp->next;
}
return 0;
}
