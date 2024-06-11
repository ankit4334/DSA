
/*

//pointer starting and understanding
//pointer->pointer use for storing the address of any variable


#include <iostream>
using namespace std;

int main()
{
   int num=5;
   cout<<num<<endl;
   
   
   //addreess of operator
   cout<<"addreess of num is->"<<&num<<endl;
   
   int *ptr=&num;
   cout<<"Address is :"<<ptr<<endl;
   cout<<"Value is :"<<*ptr<<endl;
   
   cout<<"Size of integer is:"<<sizeof(num)<<endl;
   cout<<"Size of pointer is:"<<sizeof(ptr)<<endl;

    return 0;
}


*/







/*

#include <iostream>
using namespace std;

int main()
{
//   int *p=0;
//   cout<<*p<<endl;
   
   
   int i=5;
   int *p=0;
   p=&i;
   
   cout<<p<<endl;
   cout<<*p<<endl;
   
    return 0;
}

*/






/*

#include <iostream>
using namespace std;

int main()
{
    int num=5;
    int a=num;
    a++;
    
    cout<<num<<endl;
    
    int *p=&num;
    
    cout<<"before:"<<num<<endl;
    (*p)++;
    cout<<"after:"<<num<<endl;
    
   
    return 0;
}

*/






/*

//copy a pointer
#include <iostream>
using namespace std;

int main()
{
    int num=5;
    
    int *p=&num;
    
    int *q=p;
    
    cout<<p<<"  "<<q<<endl;
    cout<<*p<<"  "<<*q<<endl;
   
    return 0;
}

*/





/*


//4 byte increse pointer Address
#include <iostream>
using namespace std;

int main()
{
    int i=3;
    int *t=&i;
    
    *t=*t+1;
    
    cout<<*t<<endl;
    
    cout<<"before t"<<t<<endl;
     
    t=t+1;
    cout<<"after t"<<t<<endl;
   
    return 0;
}



*/







//---------------------------------------------------------

//Pointer part-2



//pointer with array 

/*
#include <iostream>
using namespace std;

int main()
{
    int arr[6]={10,2,3,4,5,6};
    
    //arr is show first index of addresss
    
    cout<<"addresss of first memory block is"<<arr<<endl;
    
    cout<<"address of first memory block is"<<&arr[0]<<endl;
    
    cout<<"address of second memory block is"<<&arr[1]<<endl;
   
   
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;
   //first location element is printing
   
   cout<<"value of first memory block is:"<<*arr<<endl;
   
   //print 11 because add 1
   cout<<"value of first memory block is:"<<*arr+1<<endl;

   cout<<endl;
   cout<<endl;
   
      cout<<"value of 4th memory blokc is:"<<arr[3]<<endl;
      cout<<"value of 4th memory blokc is:"<<*(arr+3)<<endl;
      
    cout<<endl;
   cout<<endl;
   
   cout<<"4th memory block is:";
   int i=3;
   cout<<i[arr]<<endl;
   
    return 0;
}



*/





/*

#include <iostream>
using namespace std;

int main()
{
    int arr[10]={10,2,3,4,5,6,12,13,14,15};
    
    cout<<"full size:"<<sizeof(arr)<<endl;
    
    int *ptr=&arr[0];
    cout<<"one size:"<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
   
    return 0;
}

*/




/*
#include <iostream>
using namespace std;

int main()
{
    int arr[6]={10,2,3,4,5,6};
    
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    
    cout<<endl;cout<<endl;
    
    int *p=&arr[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;
    
   
    return 0;
}


*/


/*

#include <iostream>
using namespace std;

int main()
{
    int arr[6]={10,2,3,4,5,6};
    
    //ERROR
    //arr=arr+1;
    
   int *ptr=&arr[0];
   ptr=ptr+1;
   cout<<ptr<<endl;
    return 0;
}

*/









//pointer with char array


/*
#include <iostream>
using namespace std;

int main()
{
    int arr[6]={10,2,3,4,5,6};
    
    char ch[6]="abcde";
    
    cout<<arr<<endl;
    
    cout<<ch<<endl;
    
    //int array and char array cout function is 
    //Implemetationly diffrent
    
    char *c=&ch[0];
    cout<<c<<endl;
    
    return 0;
}


*/














/*

#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    
    char ch[6]="abcde";
    
    cout<<arr<<endl;
    
    cout<<ch<<endl;
    
    char *c=&ch[0];
    cout<<c<<endl;
    
    
    char temp='z';
    
    char *p=&temp;
    
    cout<<p<<endl;

    return 0;
}

*/



//------------------------------------------------

//Pointers with function


/*

#include <iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

//update address
void update(int *p){
    p=p+1;
    cout<<"inside"<<p<<endl;
}

//update value
void update1(int *p){
    *p=*p+1;
   
}

int main()
{
    int value=5;
    int *p=&value;
    
    print(p);
    
    
       cout<<endl;cout<<endl;

    
    cout<<"before"<<p<<endl;
    
    update(p);
    
    cout<<"After"<<p<<endl;
    
    cout<<endl;cout<<endl;
    
    //------------------------------------------------
    cout<<"update value"<<endl;
    
    cout<<"before"<<*p<<endl;
    
    update1(p);
    
    cout<<"After"<<*p<<endl;
    

    return 0;
}




*/





//------------------------------------------------
//Pointers with array and function



#include <iostream>
using namespace std;

int getsum(int arr[],int n){
        cout<<"size:"<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    
    cout<<"Sum is:"<<getsum(arr,5)<<endl;
    
    return 0;
}



//printing a specific part using pointer
#include <iostream>
using namespace std;

int getsum(int arr[],int n){
        cout<<"size:"<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    
    cout<<"Sum is:"<<getsum(arr+2,3)<<endl;
    
    return 0;
}

  


