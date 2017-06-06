#include "stdafx.h"
#include <iostream>
#include "Linked_List.h"
using namespace std;

int main()
{
	LinkedList values(10);

	values.insert(20);
	values.insert(50);
	values.print();
	values.remove(20);
	values.print();
	return 0;
}