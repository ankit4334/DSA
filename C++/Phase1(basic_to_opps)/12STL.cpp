//Stl
/*

#include <iostream>
#include<array>
using namespace std;

int main()
{
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    
    int  size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
cout<<"element at 2nd index"<<a.at(2)<<endl;
cout<<"empty or not"<<a.empty()<<endl;
cout<<"first element"<<a.front()<<endl;
cout<<"last element"<<a.back()<<endl;
    return 0;
}

*/

/*


#include <iostream>
#include<vector> 
using namespace std;

int main()
{
    vector<int> v;
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
    
     v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    
     v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size->"<<v.size()<<endl;
    
    
    ,
    //now
    cout<<"element at 2rd index"<<v.at(2)<<endl;
    cout<<"front"<<v.front()<<endl;
    cout<<"last"<<v.back()<<endl;
    
    
    //pop method
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
        
    }cout<<endl;
    
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }
    
    
    
    //
    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after  clear isze"<<v.size()<<endl;
    return 0;
}

*/

/*


//vector understanding;
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    
    cout<<"Element at 2nd Index-> "<<v.at(2)<<endl;
    
    cout<<"front->"<<v.front()<<endl;
    
    cout<<"Back->"<<v.back()<<endl;


    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
   

    cout<<"Before Clear size "<<v.size()<<endl;
    
    v.clear();
    
    cout<<"after Clear size"<<v.size()<<endl; 
    
    
    //intilies the 1 
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    //copy a in another veriable 
    vector<int> last(a);
    cout<<"print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}
*/

/*

//deque understanding;
#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    d.pop_front();
    //d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
     d.push_back(3);
     
     cout<<"print fist Index element-> "<<d.at(1)<<endl;
     
     cout<<"Front-> "<<d.front()<<endl;
     cout<<"Back-> "<<d.back()<<endl;
     
     
     cout<<"Empty or not "<<d.empty()<<endl;
     
     //printing before erase
     for(int i:d){
         cout<<i<<" ";
     }cout<<endl;
    
     
     cout<<"befoe erase-> "<<d.size()<<endl;
     //in deque erase take argument
     d.erase(d.begin(),d.begin()+1);
     cout<<"after erase-> "<<d.size()<<endl;
     
     //now which element presant
     for(int i:d){
         cout<<i<<" ";
     }cout<<endl;
    
    
    
    return 0;
}

*/

/*

//deque understanding;
#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    
    //for copy list
    list<int> k(l);
    
    
    
    //add new element at back
    l.push_back(1);
    
    //add new element at front
    l.push_front(2);
    
    //printing list
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    //erase the element
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    
    cout<<"size of list->"<<l.size()<<endl;
    
    
    //initialize the list
    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    
    
    return 0;
}

*/




