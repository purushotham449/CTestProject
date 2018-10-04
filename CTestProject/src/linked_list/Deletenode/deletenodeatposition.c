/*
 * deletenodeatposition.c
 *
 *  Created on: 05-Oct-2018
 *      Author: kernel
 */

#include "../linked_list_main.h"

void deletenodeatposition(struct node *start, int pos)
{
	int i;
	if(pos == 1)
	{
		head = deletenodeatbegin(start);

	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			start =start->link;
		}
		start->link = start->link->link;
	}
}

