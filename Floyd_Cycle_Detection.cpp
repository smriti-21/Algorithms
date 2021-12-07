#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class Node
{
public:
	int data;
	Node *next;	
};

void insert(Node **head,int val){
	Node *temp = new Node();
	temp->data = val;
	temp->next = *head;
	*head = temp;
}

int detectloop(Node **head){
	Node *slow = *head;
	Node* fast = *head;
	while(slow && fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(fast == slow){
			return 1;
		}
	}
	return 0;
}

int main()
{
	init_code();
	Node *head = NULL;
	insert(&head,20);
	insert(&head, 4);
    insert(&head, 15);
    insert(&head, 10);
    head->next->next->next = head;

    if(detectloop(&head)){
    	cout<<"Loop Detected";
    }
    else{
    	cout<<"No Loop";
    }
}
