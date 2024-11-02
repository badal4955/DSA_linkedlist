#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

void traverse(struct node*ptr )
{
	while(ptr!=NULL){
	printf("Element :%d\n",ptr->data);
	ptr=ptr->next;
}
}
struct node*delete_at_index(struct node*head,int index){
struct node*p=head;
struct node*q=head->next;
for(int i=0;i<index-1;i++)
{
	p=p->next;
	q=q->next;
}
p->next=q->next;
free(q);
return head;
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

  printf("before deletion :\n");
  	 traverse(head);

  	 head=delete_at_index(head,1);
  	 printf("after deletion :\n");
  	  traverse(head);
  return 0;
}

