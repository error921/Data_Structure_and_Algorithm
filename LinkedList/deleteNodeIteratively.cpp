#include "bits/stdc++.h"
#include "Node.cpp"

using namespace std;

Node * takeInput()
{
	int data;
	cin>>data;
	Node *head=NULL,*tail=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);
		if(head==NULL){
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
void deleteI(Node *head,int i)
{
	Node *temp=head;
	int cnt=0;
	while(cnt<i-1 && temp!=NULL)
	{
		cnt++;
		temp=temp->next;
	}
	if(temp!=NULL)
	{
		Node *temp2=temp->next;
		temp->next=temp->next->next;
		temp2->next=NULL;
		delete(temp2);
	}


}

void print(Node *head)
{
	Node *temp=head;
	while(temp)
	{
		if(temp->next==NULL){
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
	int i;
	cin>>i;
	deleteI(head,i);
	print(head);

	
	return 0;
}