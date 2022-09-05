#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	int priorty;
	
	struct node *next;
};

struct node *newnode,*front=0,*temp;

void Priorty_Enqueue()
{
	int priorty;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=0;
	
	printf("\nEnter the Data in the Node:\n");
	scanf("%d",&newnode->data);
	
	printf("\nEnter the Priorty of data:\n");
	scanf("%d",&priorty);
	newnode->priorty=priorty;
	
	if(front==0 || front->priorty>priorty)
	{
		newnode->next=front;
		front=newnode;
	}
	else
		{
			
			temp=front;
			
			while(temp->next!=0 && temp->next->priorty<priorty)
			{
				temp=temp->next;
			}
			
			newnode->next=temp->next;
			temp->next=newnode;
			
		}
}

void Priorty_Dequeue()
{
	temp=front;
	
	if(front==0)
		printf("No Node Present in The Queue:\n");
		
	else
		{
			while(temp->next!=0)
			{
				printf("\nData:%d\n",temp->data);
				temp=temp->next;
			}
			
			printf("\nData:%d\n",temp->data);
			
	}
		
}

void display()
{
	temp=front;
	
	if(front==0)
		printf("Queue Underflow:\n");
		
	else
		{
			printf("\nElement in The Queue:\n");
			
			while(temp->next!=0)
			{
				
				printf("\nData:%d\n",temp->data);
				temp=temp->next;
			}
			
			printf("\nData:%d\n",temp->data);
		}
}

void main()
{
	int c=1,choice;
	
	printf("*****QUEUE OPERATIONS*****\n\n");
	
	printf("1.Enqueue:\n2.Dequeue:\n3.Display:\n");
	
	do
	{
		printf("\nEnter Your Choice:\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:Priorty_Enqueue();
				   break;
		
			case 2:Priorty_Dequeue();
				   break;
				 
			case 3:display();
				   break;  	   
			
			default:printf("Wrong Choice:\n");
		}
		
		printf("\nDo you want to continue:1 or 0\n");
		scanf("%d",&c);
		
	}while(c==1);
}
	

