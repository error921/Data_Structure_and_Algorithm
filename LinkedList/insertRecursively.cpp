#include "bits/stdc++.h"
#include "Node.cpp"

using namespace std;

Node * takeInput()
{
	int data;
	cin>>data;
	Node*head=NULL,*tail=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);
		if(head==NULL)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{
			tail->next=newNode;
			tail=newNode;
		}
		cin>>data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp=head;

	while(temp)
	{
		if(temp->next==NULL)
		{
			cout<<temp->data<<endl;
		}
		else{
			cout<<temp->data<<" -> ";
		}
		temp=temp->next;
	}
}

int length(Node *head)
{
	if(head==NULL)
		return 0;

	return 1+length(head->next);
}
void insertRec(Node *head,int count,int k,int data)
{
	if(count==k-1)
	{
		Node *newNode=new Node(data);
		Node *right=head->next;
		head->next=newNode;
		newNode->next=right;
		return;
	}

	insertRec(head->next,count+1,k,data);
}

int main()
{
	Node *head=takeInput();
	print(head);

	cout<<length(head)<<endl;
	int k,data;
	cin>>k>>data;
	insertRec(head,0,k,data);
	print(head);

	
	return 0;
}