//set->set is collection of key;
//set use three deffrent fiture
//SET,UNORDERD_SET,MULTISET;

/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string v:s){
        cout<<v<<endl;
    }
    
    //print the value another way
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main()
{//element store in sorted order;
   set<string> s;
   
   //insert the value in set 
   s.insert("abc");
   s.insert("zsdf");//lon(n) time complexity
   s.insert("bcd");
   
   //use for find;
   auto it=s.find("abc");
   
   if(it!=s.end()){
       cout<<(*it);
   }
   cout<<endl;
   cout<<endl;
   
   
   //use of erase
   if(it!=s.end()){
       s.erase(it);
   }
   
   //or 
   s.erase("abc");
   
   print(s);

    return 0;
}

*/







/*

//QUESTION ON SET 
/*
Given N string, print unique strinfgs in lexiographical
order N<=10^5
|S| <=100000 */
/*

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    
    for(auto value:s){
        cout<<value<<endl;
    }

    return 0;
}
*/






//set->set is collection of key;
//set use three deffrent fiture
//SET,UNORDERD_SET,MULTISET;

/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string v:s){
        cout<<v<<endl;
    }
    
    //print the value another way
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main()
{//element store in sorted order;
   set<string> s;
   
   //insert the value in set 
   s.insert("abc");
   s.insert("zsdf");//lon(n) time complexity
   s.insert("bcd");
   
   //use for find;
   auto it=s.find("abc");
   
   if(it!=s.end()){
       cout<<(*it);
   }
   cout<<endl;
   cout<<endl;
   
   
   //use of erase
   if(it!=s.end()){
       s.erase(it);
   }
   
   //or 
   s.erase("abc");
   
   print(s);

    return 0;
}

*/








//UNORDERD_SET
//use only print key is present or not
//time complexity of UNORDERD_SET is o(1)
/*
Given N string and Q queries. in each query you are
given a string print yes if strint is present else print no;

*/

/*

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    
    int q;
    cin>>q;
    
    while(q--){
        string str;
        cin>>str;
        
        if(s.find(str)==s.end()){
            cout<<"no";
        }
        else{
            cout<<"yes";
        }
    }

    return 0;
}

*/





//MULTISET 
//set->set is collection of key;
//set use three deffrent fiture
//SET,UNORDERD_SET,MULTISET;

/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string v:s){
        cout<<v<<endl;
    }
    
    //print the value another way
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main()
{//element store in sorted order;
   set<string> s;
   
   //insert the value in set 
   s.insert("abc");
   s.insert("zsdf");//lon(n) time complexity
   s.insert("bcd");
   
   //use for find;
   auto it=s.find("abc");
   
   if(it!=s.end()){
       cout<<(*it);
   }
   cout<<endl;
   cout<<endl;
   
   
   //use of erase
   if(it!=s.end()){
       s.erase(it);
   }
   
   //or 
   s.erase("abc");
   
   print(s);

    return 0;
}

*/





/*

//MULTISET
//dublicate value allowed in multiset;
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//all opreation is log(n)

void print(multiset<string> &s){
    for(string v:s){
        cout<<v<<endl;
    }
}

int main()
{
    multiset<string> s;
   
   s.insert("abc");
   s.insert("zsddf");
   s.insert("bcd");
   s.insert("abc");
   
   //only one value is erase
//   auto it=s.find("abc"); //o(lon(n))
//   if(it!=s.end()){
//       s.erase(it);
//   }

// all value of bcd are erase
//   s.erase("bcd");

  print(s);
    return 0;
}

*/







//Nesting in STL Map and set 
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<int,int>,int>m;
    pair<int,int>p1,p2;
    p1={1,2};
    p2={2,3};
    //its compare 1st element
    cout<<(p1<p2);
    
    return 0;
}
*/


/*

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<set<int>,int>m;
    set<int> s1={1,2,3};
    set<int> s2={2,3};
    cout<<(s1<s2);
    
    return 0;
}

*/




#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>> m;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr:m){
        auto &full_name=pr.first;
        auto &list=pr.second;
        cout<<full_name.first<<" "<<full_name.second;
        cout<<list.size()<<endl;
        for(auto & element:list){
            cout<<element<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}


