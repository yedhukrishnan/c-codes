/* A program to insert nodes into a binary search tree and traverse through it in different ways. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *lchild, *rchild;
};

void insert_node(struct node**, struct node**);
void inorder(struct node**);

int main()
{
	int choice;
	struct node *root, *ptr;
	root = (struct node*)malloc(sizeof(struct node));
	root->data = NULL;
	root->lchild = NULL;
	root->rchild = NULL;
	
	while(1)
	{
		scanf("%d", &choice);
		if(choice == 9)			/*exit choice*/
			break;
		switch(choice)
		{
			case 1: 			/*insert node*/
				ptr = (struct node*)malloc(sizeof(struct node));
				ptr->lchild = NULL;
				ptr->rchild = NULL;
				scanf("%d", &ptr->data);
				insert_node(&root, &ptr);
				break;
			case 2: 			/*inorder traversal*/
				inorder(&root);
		}
	}
	return 0;
}

void insert_node(struct node **root, struct node **ptr)
{
	struct node *ptr1, *ptr2, *iptr;
	static int flag = 0;
	iptr = *ptr;
	ptr1 = *root;
	ptr2 = *root;
	if(flag == 0)
	{
		ptr2 = iptr;
		flag = 1;
	}
	while(ptr1 != NULL)
	{
		if(iptr->data < ptr1->data)
		{
			ptr2 = ptr1;
			ptr1 = ptr1->lchild;
		}
		else if(iptr->data > ptr1->data)
		{
			ptr2 = ptr1;
			ptr1 = ptr1->rchild;
		}
		else
			return;
	}
	if(ptr2->data > iptr->data)
		ptr2->lchild = iptr;
	else
		ptr2->rchild = iptr;	
}

void inorder(struct node **ptr)
{
	struct node *iptr = *ptr;
	if(iptr != NULL)
	{
		inorder(&iptr->lchild);
		printf("%d  ", iptr->data);
		inorder(&iptr->rchild);
	}
}
