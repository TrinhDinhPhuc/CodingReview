#include <iostream>
using namespace std;

struct node
{
	 int data;
	 node *next;
};

typedef node *List;

void create(List &l)
{
	l = NULL;
}

void add_last(List &l, int x)
{
	node *q = new node;
}

int main()
{
	List l;
	create(l);
}