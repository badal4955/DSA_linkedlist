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
struct node*insert_in_between(struct node*n1,int data,int index){
    struct node*ptr=malloc(sizeof(struct node));
    struct node*p=n1;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
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

n1=insert_in_between(n1,10,2);
traverse(n1);
return 0;
}

