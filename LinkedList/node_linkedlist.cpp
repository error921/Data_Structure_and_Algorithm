//Here this linkedlist will justr take 2 node value and print it

#include "bits/stdc++.h"
#include "Node.cpp"

using namespace std;

int main()
{
	//statically 

	Node n1(1);
	Node *head=&n1;
	Node n2(2);
	n1.next=&n2;


	cout<<head->data<<endl;
	cout<<head->next->data<<endl;

	
	return 0;
}