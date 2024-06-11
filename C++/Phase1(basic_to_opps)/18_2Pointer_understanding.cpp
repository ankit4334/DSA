

#include <iostream>
using namespace std;

int main()
{
   
   int i=5;
   
   int *p=&i;
   int **p1=&p;
   
   cout<<*p<<" "<<**p1<<endl;
   
   cout<<&i<<" "<<p<<" "<<*p1<<" "<<&p<<" "<<p1<<" "<<&p1<<endl;
    
    return 0;
}


