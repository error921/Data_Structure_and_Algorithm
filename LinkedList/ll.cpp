#include "bits/stdc++.h"


using namespace std;

class Node{
public:
	int data;
	Node *next;
	Node(int val)
	{
		this->data=val;
		next=NULL;
	}

};

Node * takeInput()
{
	int n;
	cin>>n;
	Node *head=NULL,*tail=NULL;
	while(n!=-1)
	{
		Node *newNode=new Node(n);
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
		cin>>n;

	}
	return head;
}


void print(Node *head)
{
	Node*temp=head;
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

int main()
{

	Node *head=takeInput();
	print(head);
	

	
	return 0;
}