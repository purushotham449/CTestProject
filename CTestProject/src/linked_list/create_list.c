#include "linked_list_main.h"

struct node *create_list(struct node *start)
{
	int num, data;
	printf("List is empty \n");
	printf("Enter the list size \n");
	scanf("%d",&num);
	while(num > 0)
	{
		printf("Enter the data \n");
		scanf("%d",&data);
		if(start == NULL)
		{
			start = addnodeatbegin(start,data);
//			printf("addnodeatbegin = %d\n", start->info);
		}
		else
		{
			addnodeatend(start,data);
		}
		num --;
	}
	return start;
}
