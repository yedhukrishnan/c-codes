/* Program to insert node into a linked list by passing it by reference to another function */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start;
void insert(struct node **);

int main()
{
	int n, i, value;
	struct node *ptr;
	start = (struct node*)malloc(sizeof(struct node));
	start->next = NULL;
	printf("Enter limit : ");
	scanf("%d", &n);
	
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &value);
		ptr = (struct node*)malloc(sizeof(struct node));
		ptr->data = value;
		insert(&ptr);
	}
	
	ptr = start;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("%d  ", ptr->data);
	}
	printf("\n");
	
	return 0;
}

void insert(struct node **ptr)
{
	struct node *ptr1;
	ptr1 = start;
	while(ptr1->next != NULL)
		ptr1 = ptr1->next;
	ptr1->next = *ptr;
}
