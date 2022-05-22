#include "bits/stdc++.h"
#include "Node.cpp"

using namespace std;

Node *takeInput()
{
	int data;
	cin>>data;
	Node *head=NULL,*tail=NULL;
	// Node ;

	while(data!=-1){
		Node *newNode=new Node(data);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
		cin>>data;
	}

	return head;

}

void print(Node *head){
	Node *temp=head;
	while(temp!=NULL){
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

	
	return 0;
}