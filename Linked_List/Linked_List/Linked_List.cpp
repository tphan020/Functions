// Linked_List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Linked_List.h"


LinkedList::LinkedList() {
	data = 0;
	next = NULL;
	head = this;
}
LinkedList::LinkedList(int x)
{
	data = x;
	next = NULL;
	head = this;
}

void LinkedList::print()
{
	LinkedList * temp = head;
	while (temp->next != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void LinkedList::append(int value)
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

int LinkedList::size()
{
	int total = 0;
	LinkedList * temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
		total++;
	}
	return total+1;
}

void LinkedList::find(int value)
{
	LinkedList * temp = head;
	while (temp->next != NULL)
	{
		if (temp->data == value)
		{
			head = temp;
			return;
		}
		temp = temp->next;
	}

}

void LinkedList::reverse()
{
	LinkedList * cur = head;
	LinkedList * prev = NULL;
	LinkedList * next;
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
	


}


