#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

void traverse(struct node*head ){
struct node*ptr=head;
do{
    printf("Element =%d\n",ptr->data);
    ptr=ptr->next;
}while(ptr!=head);
}
int main(){
	struct node*head;
	struct node*second;
	struct node*third;
	
	head=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
	third=malloc(sizeof(struct node));
	
	head->data=7;
	head->next=second;
	
	second->data=55;
	second->next=third;
	
	third->data=88;
	third->next=NULL;
	
	traverse(head);
	return 0;
}