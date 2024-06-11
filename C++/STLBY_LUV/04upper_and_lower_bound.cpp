
/*
//upper bound and lower bound

#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

int main(){

int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

//upper bound and lower bound apply in sorted arr

sort(a,a+n);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

cout<<endl;

int *ptr=lower_bound(a,a+n,5);
cout<<(*ptr)<<endl;

cout<<endl;
cout<<endl;
cout<<endl;

int *p=upper_bound(a,a+n,5);
if(ptr==(a+n)){
    cout<<"Not found";
    return 0;
}
cout<<(*p)<<endl;


return 0;
}


*/











/*
//Inbuilt function in stl

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

int min=*min_element(v.begin(),v.end());
cout<<min<<endl;


int max=*max_element(v.begin(),v.end());
cout<<max<<endl;


//find for sum
int sum=accumulate(v.begin(),v.end(),0);  //0 is intial sum
cout<<sum<<endl;


//count  of any element
int ct=count(v.begin(),v.end(),6);
cout<<ct<<endl;



//find function
int element=*find(v.begin(),v.end(),2);
cout<<element<<endl;




//reverse function
reverse(v.begin(),v.end());
for(auto val:v){
    cout<<val<<" ";
}
cout<<endl;

    return 0;
}


*/














//all_of,none_of,and any_of function
//all above function return true and false
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
 
 //lambda functions
// cout<<[](int x,int y){return x+y;}(4,7)<<endl;

vector<int> v={2,-3,-5};
cout<<all_of(v.begin(),v.end(),

[](int x){return x>0;})<<endl;



cout<<any_of(v.begin(),v.end(),

[](int x){return x>0;})<<endl;


cout<<none_of(v.begin(),v.end(),

[](int x){return x>0;})<<endl;
  
     

    return 0;
}




