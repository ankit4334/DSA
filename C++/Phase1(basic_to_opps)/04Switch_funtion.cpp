//Switch case and functiion

/*
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	
	char ch;
	cin>>ch;
	
	switch(ch){
		case '+':
			cout<<a+b<<endl;
			break;
			
		case '-':
			cout<<a-b<<endl;
			break;
			
	    case '*':
			cout<<a*b<<endl;
			break;
			
		case '/':
			cout<<a/b<<endl;
			break;
			
		default:
		cout<<"no char"<<endl;		
	}
	return 0;
}

*/

//power quesion

/*
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	cout<<"answer is "<<ans<<endl;
	return  0;
}
*/

//power(a,b) using function

/*
#include<iostream>
using namespace std;

int power(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"power of the number"<<power(a,b);
	return 0;
}

*/


//nCr question;

/*
#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}


int nCr(int n,int r){
	int num=factorial(n);
	int demo=factorial(r)*factorial(n-r);
	return num/demo;
}
int main(){
	
	int n,r;
	cin>>n>>r;
	//factorial(n);
	cout<<"nCr"<<nCr(n,r)<<endl;
	return 0;
}
*/


//use of void


/*
#include<iostream>
using namespace std;

void printCounting(int n){
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	
	printCounting(n);
	return 0;
}

*/

/*

//prime number using function

#include<iostream>
using namespace std;
//1 ->Prime no.
//0 ->Not a Prime no.

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	
	if(isPrime(n)){
		cout<<"prime number"<<endl;
	}
	else{
		cout<<"not a prime number"<<endl;
	}
	

	return 0;
}

*/

//question
#include<iostream>
using namespace std;
void update(int a){
	a=a/2;
}
int main(){
	int a=10;
	update(a);
	cout<<a<<endl;
	return 0;
}


/*
#include <iostream>

using namespace std;

int update(int a){
    a-=5;
  return a;
}

int main()
{
   int a=15;
   update(a);
   cout<<a<<endl;
    return 0;
}

*/


#include <iostream>

using namespace std;

int update(int a){
    int ans=a*a;
  return ans;
}

int main()
{
   int a=14;
   a=update(a);
   cout<<a<<endl;
    return 0;
}


