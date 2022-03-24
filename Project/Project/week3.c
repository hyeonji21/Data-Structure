// 자기 참조 구조체

#include <stdio.h>
#include <stdlib.h>
#include "week3_1.h"

int main(void)
{
	int* newData;
	int* nodeData;
	NODE* node;

	newData  = (int*)malloc(sizeof(int));
	*newData = 7;
	node = createNode (newData);

	newData  = (int*)malloc(sizeof(int));
	*newData = 75;
	node->link = createNode(newData);

	nodeData = (int*)node->dataPtr;
	printf("Data from node 1: %d\n", *nodeData);
	
	nodeData = (int*)node->link->dataPtr;
	printf("Data from node 2: %d\n", *nodeData);

	return 0;
} // main