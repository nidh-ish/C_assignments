#include<stdio.h>
#include<stdlib.h>

struct Node // defining a structure
{
	int dt;
	struct Node* nt;
};

struct Node* rt; // rt holds address of first node

int linklist() // appending new node to linked list
{
	struct Node* tem;
	
	tem = (struct Node*)(malloc(sizeof(struct Node)));//assigning memory to temporary pointer 
	tem->nt = NULL;
	
	scanf("%d", &tem->dt);//scanning the input data
	
	if(rt != NULL)  // if there is more than one node following condition executes
	{
		struct Node* new = rt;
		 
		while(new->nt!=NULL)
		{
			new = new->nt;
		}
		new->nt = tem;
	}
	else // if there is single node
	{
		rt = tem;
	}
	
	return 0;
}

int printlist() //printing the linked list using this function
{
	struct Node* new1;
	
	new1 = rt;
	
	while(new1 != NULL)  // new1 travels through the list and prints corresponding node data
	{
		printf("%d-->", new1->dt);
		new1 = new1->nt;
	}
	
	printf("NULL\n");
	
	return 0;
}

void delodd(struct Node* head) // deletes all the odd numbers from the linked list
{
    	struct Node* curr = head;
    	struct Node* l_even;
    
	while (curr != NULL && curr->dt % 2 != 0)
	{
        	curr = curr->nt;
    	}
    
	head = curr;
    
	if (curr == NULL) 
   	{
		return;
    	}
    
	l_even = curr;
    
	curr = curr->nt;
    
	while (curr != NULL)
    	{
        
		if (curr->dt % 2 == 0)
       		{
            
			l_even->nt = curr;
            		l_even = curr;
        	}
        
		curr = curr->nt;
    	}
    
	l_even->nt = NULL;
}

void deleteFirst()  // deletes the first element
{
	struct Node *toDelete;
        
	toDelete = rt;
        
	rt = rt->nt;
        
	free(toDelete);
}

int main() // calling the main function
{
	int n;

	scanf("%d", &n);
	
	for(int i = 0; i < n; i ++)//appending the nodes
	{
		linklist();
	}
	
	printlist(); //printing the list
	
	while(rt->dt % 2 != 0 ) //deleting the first node if it is odd
	{
		if(rt->nt != NULL) // it continues until first node is even
		{
			deleteFirst();
		}
		
		else // else it breaks
		{
                        deleteFirst();
			break;
		}
	}
	
	delodd(rt); // deleting the other odd elements
	printlist(); // printing the new list
	
	return 0;
}
