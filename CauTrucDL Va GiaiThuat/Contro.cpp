#include <iostream>

using namespace std;

int main()
{
int a=4;
int *p;
p=&a;
int *c;
c = new int;
*c=69;
cout<<a<<"  "<<&a<<"  "<<"\n\n";
cout<<p<<"  "<<&p<<"  "<<*p<<"  "<<"\n\n";
cout<<c<<"  "<<&c<<"  "<<*c<<"  "<<"\n\n";



}
