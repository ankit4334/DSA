/*
#include <iostream>
using namespace std;

int main()
{
   pair<int,string> p;
   //put value in pair 
   
   
   //method 1 
   p=make_pair(2,"abc");
   cout<<p.first<<endl;
   cout<<p.second<<endl;
   
   
   //method 2 
   p={4,"ankit"};
   cout<<p.first<<endl;
   cout<<p.second<<endl;
   
   return 0;
    
}

*/










/*

#include <iostream>
using namespace std;

int main()
{
    
    /*
  int a[]={1,2,3};
  int b[]={2,3,4};
  
  pair<int,int> p_array[3];
  
  p_array[0]={1,2};
  p_array[1]={2,3};
  p_array[2]={3,4};
  
  for(int i=0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
  */
  
  /*
  
  
  int a[]={1,2,3};
  int b[]={2,3,4};
  
  pair<int,int> p_array[3];
  
  p_array[0]={1,2};
  p_array[1]={2,3};
  p_array[2]={3,4};
  
  swap(p_array[0],p_array[2]);
  
  for(int i=0;i<3;i++){
      cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
  }
   
   return 0;
    
}
*/



/*


//taking input in pair
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    
    cin>>p.first;
    cout<<p.first<<endl;
   
   return 0;
    
}


*/




//vertor uderstanding
/*
//taking input in vertor
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<int> v){
    cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
}

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);   //o(1)
    }
    
    printVec(v);
   
   return 0;
    
}

*/



/*
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<int> v){
    cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
}

int main()
{
    //vector is dyanamic nature
    vector<int> v(10,3);
    v.push_back(7);
    printVec(v);
    //use of pop_back()
    //remove last element of the vector
    
    cout<<endl;
    v.pop_back();
    printVec(v);
    
    cout<<endl;
    //copy of vector
    vector<int> v2=v;
    v2.push_back(5);
    printVec(v2);
    
   
   return 0;
    
}

*/


//copy the from one vector to another vector
//vector<int> v2=v;   Tc=o(n) 






//string vector creation
/*

#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<string> v){
    //cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
}

int main()
{
    vector<string> v;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);   //o(1)
    }
    
    printVec(v);
   
   return 0;
    
}

*/






/*

//vector of pairs

#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<pair<int,int>> &v){
    cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
        
    }
    cout<<endl;
}

int main()
{
    vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    printVec(v);
    
    
    //int input vertor pair
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    
    printVec(v);
    
   return 0;
    
}

*/






//vector of array 

#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
   int N;
   cin>>N;
   vector<int> v[N];
   
   for(int i=0;i<N;i++){
       int n;
       cin>>n;
       for(int j=0;j<n;j++){
           int x;
           cin>>x;
           v[i].push_back(x);
       }
   }
   for(int i=0;i<N;i++){
       printVec(v[i]);
   }
    
   return 0;
    
}













/*
//vector to vector 

#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void printVec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}

int main()
{
   int N;
   cin>>N;
   
   vector<vector<int>> v;
    for(int i=0;i<N;i++){
       int n;
       cin>>n;
       vector<int> temp;
       for(int j=0;j<n;j++){
           int x;
           cin>>x;
           temp.push_back(x);
       }
         v.push_back(temp);
        
    }
   for(int i=0;i<N;i++){
       printVec(v[i]);
   }
    
   return 0;
    
}

*/










//iterators:pointer like structure

/*
//iterators understanding
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   vector<int> v={2,3,5,6,7};
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
   vector<int> ::iterator it=v.begin();
   
   //iterator printing
   
//   cout<<*it<<endl;
//   cout<<(*(it+1))<<endl;

//int case of vector it+ or it++ are same
for(it=v.begin();it<v.end();it++){
    cout<<*it<<endl;
}
   
   
   return 0;
    
}

*/





/*
//iterator pairs
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   vector<int> v={2,3,5,6,7};
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
   vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
   vector<pair<int,int>> ::iterator it;
   for(it=v_p.begin();it!=v_p.end();++it){
       //cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
         cout<<(it->first)<<" "<<(it->second)<<" "<<endl;

   }
   return 0;
    
}

*/




//iterator Range based loops,auto keyword
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
   vector<int> v={2,3,5,6,7};
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
   vector<int> ::iterator it;
   for(it=v.begin();it!=v.end();it++){
       cout<<(*it)<<" ";
   }
   
   
   cout<<endl;
   
   //print in Range based loop
   for(int &value:v){
       cout<<value<<" ";
   }
   cout<<endl;
   
   //Range based in pair
   vector<pair<int,int>> t={{1,2},{2,3},{3,4}};
   for(pair<int,int> &value:t){
       cout<<value.first<<" "<<value.second<<endl;
   }
   cout<<endl;
   
   
   //auto keyword->it identify itself datatypes
   
   auto a=1.0;
   cout<<a<<endl;
   
   //above i use pair<int,int> but here only use auto
   vector<pair<int,int>> p={{1,2},{2,3},{3,4}};
   for(auto &value:p){
       cout<<value.first<<" "<<value.second<<endl;
   }
   cout<<endl;
   
   
   return 0;
    
}





