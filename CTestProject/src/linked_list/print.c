/*
 * print.c
 *
 *  Created on: 04-Oct-2018
 *      Author: kernel
 */

#include "linked_list_main.h"

void print(struct node * start)
{
	int i=1;
	while(start != NULL)
	{
		printf("Data %d = %d\n",i, start->info);
		start = start->link;
		i++;
	}
}
