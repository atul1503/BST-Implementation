#include <stdio.h>
#include <stdlib.h>
#define null 0
struct bst
{
	struct bst *left;
	struct bst *right;
	int data;
};
struct bst *head=null;
void search(struct bst *node,int key,int dflag)
{
	struct bst *temp;
	if (node->data>key)
	{
		search(node->left,key,dflag);
		temp=node;
	}
	else if (node->data<key)
	{
		search(node->right,key,dflag);
		temp=node;
	}
	else
	{
		if (node->data==key && dflag!=1)
		{
			printf("Element found :)\n");
		}
		else if (node->data==key && dflag==1)
		{
			temp=null;
			printf("Element deleted\n");
		}
		else
		{
			printf("Element not found\n");
		}
	}
}
void delete()
{
	int key,dflag=1;
	printf("Enter the node to be deleted:");
	scanf("%d",&key);
	search(head,key,1);
}
struct bst *createnode(struct bst *node,int key)
{
	struct bst *temp;
	temp=(struct bst *)malloc(sizeof(struct bst));
	temp->data=key;
	node=temp;
}
void getnode(struct bst *node,int key)
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
		createnode(node,key);
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
	int choice,key;
	printf("------Binary Search Tree------");
	printf("\n");
	printf("\n1.Insert\n2.Delete\n3.Search\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1:insert();break;
			case 2:delete();break;
			case 3:printf("Enter the element to be searched\n");scanf("%d",&key);search(head,key,0);break;
		}
	} while(choice!=4);
}