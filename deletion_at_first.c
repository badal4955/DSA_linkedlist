#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node*prev;
	int data;
	struct node*next;
};
void traverse(struct node*ptr){
    while(ptr!=NULL){
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*delete_at_first(struct node*n1){
    struct node*ptr=n1;
    n1=n1->next;
    free(ptr);
    return n1;
}
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

n2->prev=n1;
n2->data=44;
n2->next=n3;

n3->prev=n2;
n3->data=66;
n3->next=n4;

n4->prev=n3;
n4->data=99;
n4->next=NULL;

printf("before deletion:\n");
traverse(n1);

n1=delete_at_first(n1);
printf("after deletion:\n");
traverse(n1);
return 0;
}