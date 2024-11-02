#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node*prev;
	int data;
	struct node*next;
};

int main(){
    struct node*n1;
    struct node*n2;
    struct node*n3;
    struct node*n4;
    n1=malloc(sizeof(struct node));
    n2=malloc(sizeof(struct node));
    n3=malloc(sizeof(struct node));
    n4=malloc(sizeof(struct node));
   
n1->prev=NULL;
n1->data=23;
n1->next=n2;
printf("%d ",n1->data);

n2->prev=n1;
n2->data=44;
n2->next=n3;
printf("%d ",n2->data);

n3->prev=n2;
n3->data=66;
n3->next=n4;
printf("%d ",n3->data);

n4->prev=n3;
n4->data=99;
n4->next=NULL;

printf("%d ",n4->data);
return 0;
}