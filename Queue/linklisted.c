#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=0;
struct node *rear=0;
struct node *newnode;

void enqueue(int x)
{
	
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}else
	{
		rear->next=newnode;
		rear=newnode;
	}
	
}

void display()
{
	struct node *temp;
	if(front==0&&rear==0){
		printf("underflow");
	}else
	{
		temp=front;
		while(temp!=0)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
}

void dequeue()
{
	struct node *temp;
	if(front==0 && rear==0)
	{
		printf("underflow");
	}
	else
	{
		temp=front;
		front=front->next;
		free(temp);
	}
}
void peek()
{
	if(front==0&&rear==0)
	{
		printf("underflow");
	}
	else
	{
		printf("%d",front->data);
	}
}
