#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	else if((rear+1)%N==front)
	{
		printf("queue is full");
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=x;
		rear++;
	}
}

void dequeue()
{
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%N;
	}
}

void display()
{
	int i=front;
	if(front==-1 && rear ==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("Queue is:");
		while(i!=rear)
		{
			printf("%d",queue[i]);
			i=(i+1)%N;
		}
		
	}
}

void peek()
{
	if(front==-1&&rear==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("%d",queue[front]);
	}
}

int main()
{
	enqueue(2);
	dequeue();
	display();
	peek();
}

