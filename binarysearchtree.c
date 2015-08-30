#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE *lchild, *rchild;
};

typedef struct NODE node;

void insert_element(int);
void print_tree(node*);

node *root, *new1, *ptr, *parent;

int main()
{
	int limit, num, i;
	
	root = (node*)malloc(sizeof(node));
	root->data = NULL;
	root->rchild = NULL;
	root->lchild = NULL;
	
	printf("BINARY SEARCH TREE\n");
	printf("Enter the limit : ");
	scanf("%d", &limit);
	printf("Enter the elements\n");
	for(i = 0 ; i < limit ; i++)
	{
		scanf("%d", &num);
		insert_element(num);
	}
	
	print_tree(root);
	
	return 0;
}

void insert_element(int n)
{
	new1 = (node*)malloc(sizeof(node));
	new1->data = n;
	new1->lchild = NULL;
	new1->rchild = NULL;
	
	ptr = root;
	
	if(ptr->data == NULL)
	{
		ptr = new1;
	}
	else
	{	
		while(ptr > n)
			{
				parent = ptr;
				ptr = ptr->lchild;
		
			}
			else
			{
				parent = ptr;
				ptr = ptr->rchild;
		
			}
		}
		if(parent->data > n)
			parent->lchild = new1;
		else
			parent->rchild = new1;
	}
}

void print_tree(node *ptr)
{
	if(ptr != NULL)
	{
		print_tree(ptr->lchild);
		printf("%d  ", ptr->data);
		print_tree(ptr->rchild);
	}
}
			
	
