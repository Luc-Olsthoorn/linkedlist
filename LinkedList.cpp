#include <iostream>
using namespace std;

class Node
{
	public:
		
		int value;
		Node *next;
		
		Node(int a)
		{
			value = a;
			next = NULL;
		}
		Node(int a, Node *b)
		{
			value = a;
			next = b;
		}
};

int main()
{
   
	Node *head;
	Node *temp;
	Node *inc;
	Node *old;
	int a =0;
	int n = 0;
	int b = 0; 
	int enter = 0;
	cin >> n;
	cin >>b;
	temp= new Node(b, NULL);
	head =  new Node(0, temp);
	for(int i = 1; i<n; i++)
	{
		cin >> b;
		temp = new Node(b, temp);
		temp->next->next = temp;
		temp->next = NULL;

		
	}
	
	inc = new Node(0, head->next);	
	int add, step, num;
	cin >> add;
	for(int j= 0; j < add; j++)
	{	
		cin >> step;
		cin >> num;
		int k = 1;
		int g = 0;
			while(inc->next->next != NULL && g < num)
			{
				if(k==step)
				{
					cin >> enter;
					temp = new Node(enter, inc->next->next);
					inc->next->next = temp;
					k=0;
					g++;
				}
				else{
				
				k++;
				}
				inc->next=inc->next->next;
			}
		inc->next = head->next;

	}
	
	inc->next = head->next;
	
	while(inc->next != NULL)
	{
		cout << inc->next->value;
		inc->next=inc->next->next;
	}
	
}
