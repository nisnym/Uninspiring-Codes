#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int data){
		this-> data = data;
		next = NULL;
	}
};
//node class
void insertAtHeas(node* &head , int data){
	if (head == NULL)
	{
		head = new node(data);
		return;
	}
	node* n = new node(data);
	n-> next = head;
	head = n;
}

void insertAtMid(node * &head , int data , int pos){
	if (pos == 0)
	{
		insertAtHeas(head,data);		
	}
	else {
		node* temp = head;
		for (int jump = 1; jump <= pos-1 ; ++jump)
		{
			temp = temp -> next;
		}
		node * n = new node(data);
		n -> next = temp -> next;
		temp -> next = n;

	}
}
//recuresive reverse
node* recRev(node* head){
	if (head == NULL or head -> next == NULL){
		return head;
	}
	node *sHead = recRev(head -> next);
	head -> next -> next = head;
	head -> next = NULL;
	return sHead;
}

node* merge(node *a, node* b){
	if (a == NULL)
	{
		return b;
	}
	if (b == NULL)
	{
		return a;
	}
	node* c ;
	if(a -> data < b -> data){
		c = a;
		c -> next = merge(a -> next , b);
	}else{
		c = b;
		c -> next = merge(a,b -> next);
	}
	return c;
}

void printLink(node * head){
	while(head != NULL){
		cout<<head->data<<"-->";
		head = head -> next;
	}
	cout<<endl;
}

//kthe element rev
node* kRev (node* head, int k){
	if(head == NULL)
		return NULL;
	//reverse the first k nodes
	node* prev = NULL;
	node* current = head;
	node* temp ;
	int cnt =1;
	while(current != NULL and cnt<= k){
		temp = current -> next;
		current -> next = prev;
		prev = current;
		current = temp;
		cnt++;
	}
	if (temp != NULL)		
	{
		head -> next = kRev(temp,k);
	}
	return prev;
}
//iterative reverse
void reverse(node* &head){
	node* prev = NULL;
	node* current = head;
	node* temp ;
	while(current != NULL){
		temp = current -> next;
		current -> next = prev;
		prev = current;
		current = temp;
	}
	head = prev;
	return;
}
node * midPoint(node * head){
	node * slow = head;
	node * fast = head -> next;

	while(fast != NULL and  fast -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}
node * mergeSort(node * head){
	if (head == NULL or head -> next == NULL)
	{
		return head;
	}
	node * mid = midPoint(head);

	node * a = head;
	node * b = mid -> next ;
	mid -> next = NULL;

	a = mergeSort(a);
	b = mergeSort(b);

	return merge(a,b);
}

int main() {
	node* head = NULL;
	insertAtHeas(head,4);
	insertAtHeas(head,3);
	insertAtHeas(head,2);
	insertAtHeas(head,1);
	// insertAtHeas(head,0);
	// insertAtMid(head,100,3);
	// printLink(head);
	// // head = recRev(head);
	// // printLink(head);
	// reverse(head); 
	// printLink(head);
	// head = kRev(head,3);
	// printLink(head);

	node * b =NULL;
	insertAtHeas(b,45);
	insertAtHeas(b,345);
	insertAtHeas(b,42);
	insertAtHeas(b,25);
	insertAtHeas(b,41);
	insertAtHeas(b,6);

	// node* head2 = merge(head,b);
	// printLink(head2);
	

	b = mergeSort(b);
	printLink(b);
	return 0;
}