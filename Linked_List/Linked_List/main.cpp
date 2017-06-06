#include "stdafx.h"
#include <iostream>
#include "Linked_List.h"
using namespace std;

int main()
{
	LinkedList values(10);

	values.append(20);
	values.append(50);
	values.append(80);
	values.append(30);
	values.append(15);
	values.append(22);
	values.print();
	cout << values.size() << endl;
	values.reverse();
	values.print();
	cout << values.size() << endl;
	return 0;
}