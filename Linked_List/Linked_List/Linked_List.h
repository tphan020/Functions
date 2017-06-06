#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

class LinkedList {
	public:
		LinkedList();
		LinkedList(int data);
		void print();
		void append(int value);
		void remove(int value);
		int size();
		void reverse();
		void find(int value);
	private:
		int data;
		LinkedList *head;
		LinkedList *next;

};

#endif