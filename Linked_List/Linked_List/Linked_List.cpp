// Linked_List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Linked_List.h"


LinkedList::LinkedList() {
	data = 0;
	next = NULL;
}
LinkedList::LinkedList(int x)
{
	data = x;
	next = NULL;
}

void LinkedList::print()
{
	LinkedList * temp = this;
	while (temp->next != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void LinkedList::insert(int value)
{
	LinkedList * newNode = new LinkedList;
	newNode->data = value;
	newNode->next = NULL;
	LinkedList * temp = this;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	
}

void LinkedList::remove(int value)
{
	LinkedList * prev = NULL;
	LinkedList * temp = this;
	while (temp->next != NULL) {
		if (temp->data == value)
		{
			prev->next = temp->next;
			delete temp;
			return;
		}
		prev = temp;
		temp = temp->next;
	}
	
}


