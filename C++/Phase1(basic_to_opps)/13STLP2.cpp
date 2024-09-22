
//STL

/*
//udetstanding the stack
#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    
    s.push("ankit");
    s.push("kumar");
    s.push("prasad");
    
    cout<<"Top Element->"<<s.top()<<endl;
    
    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;
    
    cout<<"Size of stack->"<<s.size()<<endl;
    
    cout<<"Empty or not->"<<s.empty()<<endl;
    
    
    return 0;
}

*/


/*

//udetstanding the queue
#include <iostream>
#include<queue>
using namespace std;

int main()
{
    
    queue<string> q;
    
    q.push("ankit");
    q.push("kumar");
    q.push("prasad");
    
    cout<<"Size before pop->"<<q.size()<<endl;
    
    cout<<"first Element->"<<q.front()<<endl;
    q.pop();
    
    cout<<"first element->"<<q.front()<<endl;
    
    cout<<"Size after pop->"<<q.size()<<endl;
    
    return 0;
}

*/


/*
//udetstanding the priority_queue
#include <iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;
    
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    
    cout<<"Size->"<<maxi.size()<<endl;
    
    int n=maxi.size();
    
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;



    mini.push(5);
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    
    cout<<"Size->"<<mini.size()<<endl;
    
    int m=mini.size();
    
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    
    cout<<"Empty or not->"<<mini.empty()<<endl;



    
    return 0;
}

*/


/*
//udetstanding the set
#include <iostream>
#include<set>
using namespace std;

int main()
{
   set<int> s;
   
   s.insert(9);
   s.insert(5);
   s.insert(0);
   s.insert(2);  
   s.insert('a');
   s.insert(2);
   s.insert(5);
   s.insert(7);

//working on online complier
   for(auto i:s){
       cout<<i<<endl;
   }
   
   set<int>::iterator it=s.begin();
   it++;
   
   s.erase(it);
   
   
   for(auto i:s){
       cout<<i<<endl;
   }
   cout<<endl;
   cout<<endl;


cout<<"S is present or not->"<<s.count(5)<<endl;
cout<<"S is present or not->"<<s.count(-5)<<endl;

set<int>::iterator itr=s.find(5);

cout<<"value present at itr->"<<*it<<endl;

for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}cout<<endl;
   
    return 0;
}
*/


/*
//udetstanding the map
#include <iostream>
#include<map>
using namespace std;

int main()
{

map<int,string> m;

m[1]="ankit";
m[12]="kumar";
m[3]="prasad";

m.insert({5,"rocky"});

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding 13 present or not->"<<m.count(12)<<endl;
cout<<"finding 13 present or not->"<<m.count(-12)<<endl;


m.erase(12);
cout<<"after erase"<<endl;

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}cout<<endl;


auto it=m.find(5);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}



   
    return 0;
}

*/


//udetstanding the algorithm
#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(6);
v.push_back(7);

for(int i:v){
    cout<<i<<" ";
}cout<<endl;

//to cheak binary serch element presant or not
cout<<"cheak present or not->"<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"cheak present or not->"<<binary_search(v.begin(),v.end(),5)<<endl;


cout<<"lover bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
cout<<"lover bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

int a=3;
int b=5;
cout<<"Max->"<<max(a,b)<<endl;
cout<<"min->"<<min(a,b)<<endl;

swap(a,b);
cout<<"value of a ->"<<a<<endl;

string abcd="abcd";
reverse(abcd.begin(),abcd.end());
cout<<"reverse string->"<<abcd<<endl;


rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;



    return 0;
}






