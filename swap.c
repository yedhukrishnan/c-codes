#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE *next;
};

typedef struct NODE node;

node *head, *ptr, *new1, *ptr1, *ptrold;
int len;

void insert_node(int);
void display_list();
void swap(node **head);

int main()
{
	int i, choice;
	
	head = (node*)malloc(sizeof(node));
	head->data = 1;
	head->next = NULL;
	
	for(i = 2; i <= 10 ; i++)
		insert_node(i);
	
	display_list();
	swap(&head);
	display_list();
	
	return 0;
}

void insert_node(int n)
{
	new1 = (node*)malloc(sizeof(node));
	new1->data = n;
	new1->next = NULL;
	
	ptr = head;
	
	while(ptr->next != NULL)
		ptr = ptr->next;
	
	ptr->next = new1;	
	len++;
}

void display_list()
{
	printf("LINKED LIST\n");
	ptr = *head;
	printf("%d  ", head->data);
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("%d  ", ptr->data);
	}
	printf("\n");
}

void swap(node **head)
{
	&ptr = head;
	
	if(ptr->next != NULL)
	{
		ptr1 = ptr->next;
		ptr->next = ptr1->next;
		ptr1->next = ptr;
		ptrold = ptr;
		ptr = ptr->next;
	}
	while(ptr->next != NULL)
	{
		ptrold->next = ptr1;
		ptr->next = ptr1->next;
		ptr1->next = ptr;
		ptrold = ptr;
		if(ptr->next != NULL)
			ptr = ptr->next;
	}
}
	
