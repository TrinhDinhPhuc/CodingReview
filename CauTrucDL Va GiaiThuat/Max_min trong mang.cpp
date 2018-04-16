#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a[100];
    int n=7;
    for (int i=0;i<n;i++)
        a[i]=rand()%50 ; //rand()%range + min 
    for (int i ; i<n;i++)
        cout<<a[i]<<"  ";
    int MAX= a[0];
    int dem =1;
    for (int i=0; i<n;i++)
    {
        if(a[i]>MAX)
        {
            dem=1;
            MAX=a[i];
        }
        else if (a[i]==MAX)
        {
            dem++;
        }
    }
    cout<<"MAX= "<<MAX<<"  Dem = "<<dem;
}