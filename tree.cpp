#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
	int data;
	node *left,*right;
}*root;
void postorder(node* temp)
{
	static int n=0;
	if(temp==NULL)
		return;
	else if(temp->left!=NULL)
	{
		cout<<temp->left->data;
		postorder(temp->left);
	}
	if(n!=1)
	{
		cout<<temp->data;
		n=1;
	}
	if(temp->right!=NULL)
	{
		cout<<"\t"<<temp->right->data;
		postorder(temp->right);
	}n=0;
}
void del(int num,node *&temp)
{
	if(temp==NULL)
	{
		delete temp;
		temp=NULL;
		return;
	}
	else if(temp->right!=NULL&&num==temp->right->data)
	{
		delete temp->right;
		temp->right=NULL;
		return;
	}
	else if(temp->left!=NULL&&num==temp->left->data)
	{
		delete temp->left;
		temp->left=NULL;
		return;
	}
	else if(num>temp->data)
		del(num,temp->right);
	else
		del(num,temp->left);
}
void insert(int num, node *&temp)
{
	if(temp==NULL)
	{
		node* temp1 = new node;
		temp = temp1;
		temp->data = num;
		temp->left=NULL;
		temp->right=NULL;
		cout<<temp->data<<" is inserted\n";
	}
	else if(num > temp->data)
	{
		insert(num,temp->right);
		cout<<"big\n";
	}
	else
	{
		insert(num,temp->left);
		cout<<"small\n";
	}
}
void preorder(node *temp)
{
	if(temp==NULL)
	{
		return;
	}
	cout<<"\t"<<temp->data;
	preorder(temp->left);
	preorder(temp->right);
}
node* search(int num,node *&temp)
{
	node* flag=NULL;
	if(temp==NULL)
		return 0;
	else if(temp->data==num)
	{
		flag=temp;
		return flag;
	}
	else
	{
		flag=search(num,temp->left);
		flag=search(num,temp->right);
	}
	return flag;
}
int main()
{
	root=NULL;
	int opt,num;
	while(1)
	{
		cout<<"Enter the option\n";
		cout<<"1. Insert\n2. Delete\n3. Search\n4. Display\n5.Exit\n";
		cin>>opt;
		switch(opt)
		{
			case 1:
				cout<<"Enter the number to insert\n";
				cin>>num;
				insert(num,root);
				break;
			case 2:
				cout<<"Enter number to delete\n";
				cin>>num;
				del(num,root);
				break;
			case 3:
				cout<<"Enter number to search\n";
				cin>>num;
				if(search(num,root)!=NULL)
					cout<<"Number is found\n";
				else
					cout<<"Number is not found\n";
				break;
			case 4:
				cout<<"\nEnter option\n1. Pre order\n2. post order\n3.In order\n";
				cin>>opt;
				switch(opt)
				{
					case 1:
						preorder(root);
						break;
					case 2:
						postorder(root);
						break;
					case 3:
						inorder(root);
						break;
				}
				break;
			default:
				exit(0);
				break;


		}
	}
}
