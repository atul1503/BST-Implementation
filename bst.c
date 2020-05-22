#include <stdio.h>
#include <stdlib.h>
struct bst
{
	struct bst *left;
	struct bst *right;
	int data;
} 
struct bst head=null;
struct bst *createnode(node,key)
{
	struct bst *temp;
	temp=(struct bst *)malloc(sizeof(struct bst));
	temp->data=key;
	return temp;
}
void getnode(node,key)
{
	if (node->data>key)
	{
		getnode(node->left,key);
	}
	else if (node->data<key)
	{
		getnode(node->right,key);
	}
	else
	{
		node->right=createnode(node,key));
	}
}
void insert()
{
	int key;
	printf("Enter the data to be entered:");
	scanf("%d",&key);
	if (head==null)
	{
		head->data=key;
	}
	else
	{
		getnode(head,key);
	}
}
void main()
{
	int choice;
	printf("------Binary Search Tree------');
	print("\n");
	printf("\n1.Insert()\n2.Delete()\n3.Search()\n4.Exit()\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1:insert();break;
			case 2:delete();break;
			case 3:search();break;
		}
	} while(choice!=4)
}