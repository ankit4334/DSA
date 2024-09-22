//ALL ABOUT CHAR ARRAYS,STRING $ SOLVING QUESTION

/*
#include<iostream>
using namespace std;

int main(){
  
  //single char
  //char a='z';
  
  //string->string is 1-diamentional array 
  
 //char array
 //char  ch[10];
 
 //char array taking input
 //char name[20];
 //cin>>name;
 
 
 //'\0'->it null char
 //use as a terminator
 
char name[20];

cout<<"Enter your name->";

cin>>name;

name[2]='\0';

cout<<"your name is-> "<<name<<endl;
  
    return 0;
}
*/









/*
//taking input using getline
#include <iostream>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    cout<<a<<endl;

   return 0;
}

*/

//taking input in array ;

#include <iostream>
using namespace std;

int main()
{
    char c[20];
    cout<<"enter the value of c"<<endl;
    cin.get(c,20);
    cout<<c<<endl;

   return 0;
}








/*
//find length
#include <iostream>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"your name is ->"<<name<<endl;
    cout<<"length->"<<getlength(name);

   return 0;
}

*/





/*

#include <iostream>

using namespace std;
//one diamention charcter array is called string...




//find the lentgh of a charArray
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


//find the reverse of a string 
void reverse(char name[],int n){
    
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

//tolowerCase changing

char tolowerCase(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


//cheak the string is palindrom or not

bool checkPalindrome(char a[],int n){
    int  s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
   char name[20];
   cout<<"Enter your name"<<endl;
   cin>>name;
   
   //name[2]='\0';
   
   cout<<"your name is->"<<name<<endl;
   
   int len=getlength(name);
 
   cout<<"length->"<<len<<endl;
   
   reverse(name,len);
 cout<<"your name is->"<<name<<endl;
 

 //cheak the string is palindrom or not
 cout<<"palindrome or not->"<<checkPalindrome(name,len)<<endl;


//upper case to lower case
 cout<<"charctert is->"<<tolowerCase('b')<<endl;
 cout<<"charctert is->"<<tolowerCase('C')<<endl;
    return 0;
}

*/

/*


//starting a string
#include <iostream>
using namespace std;

int main(){
    
    //creating string
    
    string str="ankit";
    cout<<str<<endl;
    
    str.push_back('c');
    cout<<str<<endl;
    
    str.pop_back();
    cout<<str<<endl;
    
    
    return 0;
}

*/








/*
//cheak valid palindrom or not
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
    
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
        
    }
};

*/


