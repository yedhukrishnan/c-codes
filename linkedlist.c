/* Linked List Operations */

#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE *next;
};

typedef struct NODE node;

node *start, *ptr, *new1;
int len;

void insert_node(int);
void delete_node(int);
void display_list();
void reverse_list();
void sort_list();

int main()
{
	int n, choice;
	
	start = (node*)malloc(sizeof(node));
	start->data = NULL;
	start->next = NULL;
		
	while(1)
	{
		printf(" 1 - Insert Node\n 2 - Delete Node\n 3 - Display Linked List\n 4 - Reverse Linked List\n 5- Sort List\n 0 - Exit\n   : ");
		scanf("%d", &choice);
		if(choice == 0)
			break;
		switch(choice)
		{
			case 1:
				printf("Enter value : ");
				scanf("%d", &n);
				insert_node(n);
				break;
			case 2:
				printf("Enter value : ");
				scanf("%d", &n);
				delete_node(n);
				break;
			case 3:
				display_list();
				break;
			case 4:
				reverse_list();
				break;
			case 5:
				sort_list();
				break;
			default:
				printf("Wrong choice!\n");
		}
	}
	return 0;
}

void insert_node(int n)
{
	new1 = (node*)malloc(sizeof(node));
	new1->data = n;
	new1->next = NULL;
	
	ptr = start;
	
	while(ptr->next != NULL)
		ptr = ptr->next;
	
	ptr->next = new1;	
	len++;
}

void display_list()
{
	printf("LINKED LIST\n");
	ptr = start;
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("%d  ", ptr->data);
	}
	printf("\n");
}

void reverse_list()
{
	node *ptr1, *ptr2;
	ptr = start->next;
	if(start->next == NULL)
	{
		printf("No nodes in linked list\n");
		return;
	}
	if(ptr->next != NULL)
	{
		ptr1 = ptr->next;
		ptr->next = NULL;
		ptr2 = ptr1->next;
		while(ptr1->next != NULL)
		{
			ptr1->next = ptr;
			ptr = ptr1;
			ptr1 = ptr2;		
			ptr2 = ptr1->next;
		}
		ptr1->next = ptr;
		start->next = ptr1;
	}
	printf("Linked List reversed!\n");
}

void delete_node(int n)
{
	node *ptr1;
	if(start->next != NULL)
	{
		ptr = start->next;
		ptr1 = start;
		while(ptr->data != n && ptr->next != NULL)
		{
			ptr = ptr->next;
			ptr1 = ptr1->next;
		}
		if(ptr->data == n)
		{
			ptr1->next = ptr->next;
			printf("Node deleted successfully\n");
		}
		else
			printf("Value not found\n");
	}
	else
		printf("No nodes to delete\n");
}

void sort_list()
{
	node *ptr1, *ptr2, *ptr3;
	int i, j;
	
	for(i = 0 ; i < len ; i++)
	{
		ptr1 = start;
		ptr2 = start->next;
		ptr3 = ptr2->next;
		for(j = 0 ; j < (len - 1) ; j++)
		{
			if(ptr2->data > ptr3->data)
			{
				ptr2->next = ptr3->next;
				ptr3->next = ptr2;
				ptr1->next = ptr3;
				ptr1 = ptr3;
				ptr3 = ptr2->next;
			}
			else
			{
				ptr1 = ptr2;
				ptr2 = ptr3;
				ptr3 = ptr3->next;
			}
		}
	}
}	

