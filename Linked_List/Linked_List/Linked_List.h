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
		void insert(int value);
		void remove(int value);
	private:
		int data;
		LinkedList *next;

};

#endif