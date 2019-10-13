#include<iostream>

using namespace std;

struct node
{
	int key;
	int data;
	struct node* next;
};

struct node* head = NULL;
//struct node* current = NULL;

void insert(int key, int data)
{
	struct node* temp = new struct node;
	temp->key = key;
	temp->data = data;

	temp->next = head;
	head = temp;

//	cout<<head->data<<endl;
}

bool isempty()
{
	return (head == NULL);
}

void print()
{
	struct node* current = head; 
//	cout<<current->data<<endl;
	while(current!=NULL)
	{
		if(!isempty)
		{
			cout<< "Please inpute data to the link!\n";
		}
		else cout<< current->key <<" -> "<< current->data <<endl;
		
		
		current = current->next;
	}
}

int main()
{
	for(int i = 1; i<10; i++)
		insert(i, i*5);

	print();
	return 0;

}
