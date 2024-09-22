/*
____________________________________________
Ascii value of char 
->char ch='a'  ==97

int max store value 8byte=32bit=2^32-1
char max store value 4 byte=2^8-1
min value=0

*/


/*
//lower method is called type casting
#include<iostream>
using namespace std;
int main(){
	char a='a';
	int b='b';
	char ch=98;
	
	
	cout<<"char value"<<" "<<a<<endl;
	cout<<"int value"<<" "<<b<<endl;
	cout<<"char value"<<" "<<ch<<endl;
	
	char ch1=123456;
	cout<<ch1<<endl;
	
	return 0;
	
}

*/


/*
->how -ve number stored in program
let -ve no=-5
->ingore the negetive sign
->covert into b ianry repersantion
->take 2's complement

*/

/*
//cheak unsign number
#include<iostream>
using namespace std;
int main(){
unsigned int a=-112;
cout<<a<<endl;

return 0;
}
*/

#include<iostream>
using namespace std;
int main(){

int a=2;
int b=3;

bool first=(a==b);
cout<<first<<endl;

return 0;
}



