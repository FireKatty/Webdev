 #include<stdio.h>
 #include<malloc.h>
 
 struct node{
 	int data;
 	struct node *next;
 };
 
 struct node *front=0;
 struct node *rear=0;
 
 void enqueue(int x)
 {
 	struct node *newnode;
 	newnode = (struct node*)malloc(sizeof(struct node));
 	newnode->data=x;
 	newnode->next=0;
 	if(front==0&&rear==0)
 	{
 		front=rear=newnode;

	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
 }
 
 void dequeue()
 {
 	struct node *temp;
 	temp=front;
 	if(front==0 && rear==0)
 	{
 		printf("underflow");
 		
	 }
	 else if(front==rear)
	 {
	 	front=rear=0;
	 	free(temp);
	 }
	 else
	 {
	 	front=front->next;
	 	rear->next=front;
	 	free(temp);
	 }
 }
 
 void display()
 {
 	struct node *temp;
 	if(front==0&&rear==0)
 	{
 		printf("Queue is empty");
	 }
	 else
	 {
	 	while(temp->next!=front)
	 	{
	 		printf("%d",temp->data);
	 		temp=temp->next;
		 }printf("%d",temp->data);
	 }
 }
 
 void peek()
 {
 	if(front==0&rear==0)
 	{
 		printf("Queue is empty");
	 }
	 else
	 {
	 	printf("%d",front->data);
	 }
 }
 
 int main()
 {
	enqueue(4);
 	dequeue();
 	display();
 	peek();
 }
