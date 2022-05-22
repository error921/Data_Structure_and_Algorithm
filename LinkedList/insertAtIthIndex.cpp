#include "bits/stdc++.h"
#include "Node.cpp"

using namespace std;
void insert(Node *head,int i,int data)
{
	Node *temp=head;
	Node *newNode=new Node(data);
	if(i==0){
		newNode->next=head;
		head=newNode;
		return ;
	}
	int cnt=0;
	while(cnt!=i-1){
		temp=temp->next;
		cnt++;
	}

	//right link
	Node *right=temp->next;
	temp->next=newNode;
	newNode->next=right;
	// return head;
}

// Node *insert(Node *head,int i,int data)
// {
// 	Node *temp=head;
// 	Node *newNode=new Node(data);
// 	if(i==0){
// 		newNode->next=head;
// 		head=newNode;
// 		return head;
// 	}
// 	int cnt=0;
// 	while(cnt!=i-1){
// 		temp=temp->next;
// 		cnt++;
// 	}

// 	//right link
// 	Node *right=temp->next;
// 	temp->next=newNode;
// 	newNode->next=right;
// 	return head;
// }

Node * takeInput(){
	int data;
	cin>>data;
	Node *head=NULL,*tail=NULL;
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
	insert(head,5,100);
	print(head);
	
	return 0;
}