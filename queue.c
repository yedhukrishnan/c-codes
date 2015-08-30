#include <stdio.h>
#define LIMIT 20

int front = -1, rear = -1, q[LIMIT];
void enqueue(int);
void dequeue();

int main()
{
	char c;
	int n, i;
	while(1)
	{
		scanf("\n%c%d", &c, &n);
		if(c == 'q' && n == 0)
			break;
		else if(c == '+')
			enqueue(n);
		else if(c == '-')
			dequeue();
		
		for(i = front ; i < (rear + 1) % LIMIT ; i = (i + 1) % LIMIT)
			printf("%d ", q[i]);
		printf("\n");
	}
	return 0;
}

void enqueue(int n)
{
	if(front == (rear + 1) % LIMIT)
		printf("Queue is full!\n");
	else if(front == -1 && rear == -1)
	{
		front++;
		rear++;
		q[rear] = n;
	}
	else
	{
		rear = (rear + 1) % LIMIT;
		q[rear] = n;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
		printf("Queue is empty!\n");
	else if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front = (front + 1) % LIMIT;
	}
}

