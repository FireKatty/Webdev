#include<stdio.h>
#define N 5
int queue[5];
int front = -1;
int rear = -1;

void enqueue(int x)
{
	if(rear == N-1)
	{
		printf("Overflow");
		
	}
	else if(front==-1 && rear==-1)
	  {
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Underflow");
	}
	else if(front==rear)
	{
		front = rear =-1;
	}
	else
	{
		printf("%d",queue[front]);
		front++;
	}
}

void peek()
{
	if(front== -1 && rear==-1)
	{
		printf("underflow");
		
	}
	else
	{
		printf("%d",queue[front]);
	}
	
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("underflow");
	}else
	{
		for(i=front;i<rear+1;i++)
		{
			printf("%d",queue[i]);
		}
	}
}

int main()
{
	enqueue(3);
	dequeue();
	display();
	peek();
}
