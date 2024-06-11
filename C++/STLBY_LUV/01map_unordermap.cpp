//map in stl
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//in map i+ and i++ is diffrent

int main()
{
    //map contain key and value
    //ex->ram:1,syam:2;
    //map store  value in sort
    
    map<int,string> m;
    
    //insert the value in map
    //ways 1 
    m[1]="abc";        //Tc= o(log(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    
    //printing map way1
    map<int,string> ::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    cout<<endl;
    //pring map another way2
    
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
*/








//printing map using function
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
   
    map<int,string> m;
    
    //map store uniqk value
    
    //insert the value in map
    //ways 1 
    m[1]="abc";  //O(lon(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    
   print(m);

    return 0;
}
*/










//find() method in map
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
   
    map<int,string> m;
    m[1]="abc";  //O(lon(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    
   //print(m);
   //map return iterator
   auto it=m.find(3);         //Tc=O(log(n));
   if(it==m.end()){
       cout<<"NO value"<<endl;
   }
   else{
       cout<<(*it).first<<" "<<(*it).second<<endl;
   }

    return 0;
}

*/












/*
//erase() method in map
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
   
    map<int,string> m;
    m[1]="abc";  //O(lon(n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    
    //eraseing value way 1 
   // m.erase(3);                  //Tc=O(log(n));
   
   //eraseing value method 2 
   
   auto it=m.find(5);
   m.erase(it);
   
    print(m);
    
    m.clear();
    print(m);

   
    return 0;
}

*/


//if map<string,string> m;
// m["abcd"]="abcd";    Tc=s.size()*lon(n);



/*
given n string,print qnique string in lexiographical
order with their frequency
*/
/*
//QUESTION ON MAP
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
   
   
    return 0;
}
*/








/*
//Unordered Map & multimaps
//Unordered map time complexity less then map
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main()
{
    //Unordered map
    //1.inbuilt imlementaion
    //2.Time complexity
    //3.valid kesy datatype 
    
    //its store not sort 
    
    //other like map
    unordered_map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    
  print(m);
    
    return 0;
}
*/








//QUESTION on unordered_map

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
   int q;
   cin>>q;
   while(q--){
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }
   
   
    return 0;
}


//multimaps->its take duplicates
//map<int,vector<string>> m;



