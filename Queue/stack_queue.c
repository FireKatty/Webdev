#include<stdio.h>
#define N 5
int s1[N],s2[N];
int top1=-1;
int top2=-1;
int count=0;


void enqueue(int x)
{
	push1(x);
	count++;
}
void push1(int data)
{
	if(top1==N-1)
	{
		printf("Overflow");
	}
	else
	{
		top1++;
		s1[top1]=data;	
	}
}

void push2(int data)
{
	if(top2==N-1)
	{
		printf("Overflow");
	}
	else
	{
		top2++;
		s2[top2]=data;	
	}
}

void dequeue()
{
	
	if(top1==-1&&top2==-1)
	{
		printf("queue is empty");
	}
	else
	{
		int i,a,b;
		for(i=0;i<count;i++)
		{
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("%d",b);
		count--;
		for(i=0;i<count;i++)
		{
			a=pop2();
			push1(a);
		}
	}
}

int pop1()
{
	return s1[top1--];
}
int pop2()
{
	return s2[top2--];    
}

void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("%d",s1[i]);
	}
}

int main()
{
	enqueue(4);
	dequeue();
	display();
}
