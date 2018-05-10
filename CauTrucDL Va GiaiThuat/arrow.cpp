#include <iostream>
using namespace std;
struct node
{
	int data;
};
int main()
{

	node a;
	a.data=4;
	cout<<"a = "<<a.data<<endl;

	node *b;
	b=&a;
	cout<<"dia chi b = "<<b<<endl;

	node *c = new node;
	c->data = 69;
	
	cout<<"c = "<<c<<"\nGia tri c gan = "<<c->data<<endl;
}