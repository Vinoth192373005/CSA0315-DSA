#include<stdio.h>
#include<stdlib.h>
struct node* head = NULL;
struct node
{
	int data;
	struct node* next;
};
void create()
{
	struct node* temp;
        
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data); 
	temp->next = NULL;
	if(head==NULL)	{
		head = temp;
	}
	else{
		struct node* ptr = head;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp; 
	}
}

void display()
{
	if(head==NULL)
	{
		printf("Linked List is Empty\n");
		return;
	}
        printf("LinkedList: ");
	struct node* ptr = head;
	while(ptr!=NULL) 
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
    printf("\n");
}

void insert_begin()
{
	struct node* temp;
       
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp;
		return;
	}
	else
	{
		temp->next = head; 
		head = temp; 
	}
}

void insert_pos()
{
	int i;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data);
	temp->next = NULL;
	if(head==NULL) 
	{
		head = temp;
	        return;
	}
	else
	{
		struct node* prev_ptr;
		struct node* ptr = head;
		int pos;
		printf("Enter position: ");
		scanf("%d",&pos);
		for(i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		temp->next = ptr;
		prev_ptr->next = temp;
	}
}
void insert_end()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter node data: ");
	scanf("%d",&temp->data); 
	temp->next = NULL;
	if(head==NULL)
	{
		head = temp; 
	        return;
	}
	else{
		struct node* ptr = head;  
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
}

void delete_begin()
{ 
	if(head==NULL) 
	{
		printf("Linked List is empty \n");
		return;
	}
	else
	{
		struct node* ptr = head; 
		printf("Deleted %d",ptr->data);
		head = head->next; 
		free(ptr); 
		
	}
}

void delete_end()
{
	if(head==NULL) 
	{
		printf("Linked List is empty | Nothing to delete \n");
		return;
	}
	else if(head->next==NULL) 
	{
		struct node* ptr = head;
		head = ptr->next;
		free(ptr);
	}
	else
	{
		struct node* ptr = head;
		struct node* prev_ptr = NULL;
		while(ptr->next!=NULL)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = NULL; 
		free(ptr); 
	}	
}

void delete_pos()
{
	int pos,i;
	printf("Enter node position to delete: ");
	scanf("%d",&pos);     
	struct node* ptr=head;                                                                               
	if(head==NULL) 
	{
		printf("Linked List is empty \n"); 
		return;
	}
	else if(pos == 0) 
	{
		ptr = head;
		head=ptr->next; 
		free(ptr); 
	}
	else
	{
		struct node* prev_ptr;
		for(i=0;i<pos;i++)
		{
			prev_ptr = ptr;
			ptr = ptr->next;
		}
		prev_ptr->next = ptr->next; 
		free(ptr);
	}
}
int main()
{
	int choice;
	while(1)
	{
	    printf("0. Create\n");
	    printf("1. display\n");
	    printf("2. Insert Node at beginning\n");
	    printf("3. Insert Node in specific position\n");
	    printf("4. Insert Node at end of LinkedList\n");
	    printf("5. Delete Node at beginning\n");
	    printf("6. Delete Node at end\n");
	    printf("7. Delete Node at position\n");
	    printf("8.Exit\n");
	    
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: create();
					break;
			case 1: display();
					break;
			case 2: insert_begin();
					break;
			case 3: insert_pos();
					break;
			case 4: insert_end();
					break;
			case 5: delete_begin();
					break;
			case 6: delete_end();
					break;
			case 7: delete_pos();
					break;
			case 8:
			        return 0;
		}
	}
}

