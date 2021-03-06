/*
 * linked_list_main.c
 *
 *  Created on: 04-Oct-2018
 *      Author: kernel
 */
#include "linked_list_main.h"

void linked_list_main(void)
{
	int ch, data, position;
	while(1)
	{
		printf("-------------------------------------\n \n");
		printf("Choose the below option \n");
		printf("1. Create List \n");
		printf("2. Print List \n");
		printf("3. Add Node at the begin of the list \n");
		printf("4. Add Node at the end of the list \n");
		printf("5. Add Node at the given position of the list \n");
		printf("6. Delete the node at begin of the list \n");
		printf("7. Delete the node at end of the list \n");
		printf("8. Delete Node at the given position of the list \n");
		printf("Enter the choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			head = create_list(head);
			break;
		case 2:
			if(head == NULL)
			{
				printf("List is Empty\n");
			}
			else
			{
				print(head);
			}
			break;
		case 3:
			printf("Enter the data \n");
			scanf("%d",&data);
			head = addnodeatbegin(head, data);
			break;
		case 4:
			printf("Enter the data \n");
			scanf("%d",&data);
			addnodeatend(head,data);
			break;
		case 5:
			printf("Enter the position \n");
			scanf("%d",&position);
			printf("Enter the data \n");
			scanf("%d",&data);
			addnodeatposition(head, position,data);
			break;
		case 6:
			if(head == NULL)
			{
				printf("List is Empty\n");
			}
			else
			{
				head = deletenodeatbegin(head);
			}
			break;
		case 7:
			if(head == NULL)
			{
				printf("List is Empty\n");
			}
			else
			{
				deletenodeatend(head);
			}
			break;
		case 8:
			if(head == NULL)
			{
				printf("List is Empty\n");
			}
			else
			{
				printf("Enter the position \n");
				scanf("%d",&position);
				deletenodeatposition(head,position);
			}
			break;
		default:
			printf("Wrong choice \n");
			break;
		}
	}
	printf("Linked list operation done \n");
}

