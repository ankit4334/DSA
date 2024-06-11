/*
Bitwise operator
1->and(&)
x y z
0 0 0
0 1 0
1 0 0
1 1 1

ex->
a=5 101
b=7 111
ans 101=5

2->or(|)

3->NOT(~)

4->XOR(^)
x y z
0 0 0
0 1 1
1 0 1
1 1 0

5->LEFT SHEFT(<<)
ex.5<<1=0000000101==0000001010
ex.3<<2=11=1100
(another logic is multiply 2 by shifted num)


5->RIGHT SHIFT(>>)
EX.5>>2=101=1
(another logic is dived 2 by shifted num)










*/

/*

#include<iostream>
using namespace std;
int main(){
	int a=4;
	int b=6;
	cout<<"a&b"<<(a&b)<<endl;
	cout<<"a|b"<<(a|b)<<endl;
	cout<<"~a"<<~a<<endl;
	cout<<"a^"<<(a^b)<<endl;
	
	
	cout<<(17<<1)<<endl;
	cout<<(17<<2)<<endl;
	cout<<(17>>1)<<endl;
	cout<<(17>>2)<<endl;
	
	cout<<endl;
    cout<<endl;
   	cout<<endl;
	cout<<endl;
	cout<<endl;

	
	
	
	//increament and decrement
	cout<<"increament and decrement"<<endl;
	int i=7;
	cout<<(++i)<<endl;
	cout<<(i++)<<endl;
	cout<<(i--)<<endl;
	cout<<(--i)<<endl;
	return 0;
}

*/


//fibonacci series 
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//int a=0;
//int b=1;
//for(int i=1;i<=n;i++){
//	int nextNumber=a+b;
//cout<<nextNumber<<" ";
//a=b;
//b=nextNumber;
//}
//	return 0;
//	}




//cheak number is prime or not
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n;
//	cin>>n;
//	bool isPrime=1;
//	for(int i=2;i<n;i++){
//		if(n%i==0){
//			isPrime=0;
//			break;
//		}
//	}
//	
//	if(isPrime==0){
//		cout<<"Not a prime Number"<<endl;
//	}
//	else{
//		cout<<"is a prime"<<endl;
//	}
//
//	return 0;
//	}




//use of continue;

//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=0;i<5;i++){
//		cout<<"HI"<<endl;
//		cout<<"HEY"<<endl;
//		continue;
//		cout<<"Reply toh karde"<<endl;
//	}
//	
//	return 0;
//	}



////QUESTION
//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=0;i<=15;i+=2){
//		cout<<i<<" ";
//	
//	if(i&1){
//		continue;
//	}
//	i++;
//	}
//	return 0;
//	}


//question
//
//#include<iostream>
//using namespace std;
//int main(){
//for(int i=0;i<5;i++){
//	for(int j=i;j<=5;j++){
//		cout<<i<<" "<< j <<endl;
//			}
//}
//	return 0;
//	}


//question
//
//#include<iostream>
//using namespace std;
//int main(){
//for(int i=0;i<5;i++){
//	for(int j=i;j<=5;j++){
//		if(i+j==10){
//			break;
//		}
//		cout<<i<< " " << j <<endl;
//			}
//}
//	return 0;
//	}


//scop variable
//in a block not creat same name variable
//
//#include<iostream>
//using namespace std;
//int main(){
//	int a=5;
//	int a=8;
//	cout<<a<<endl;
//	return 0;
//}


//question

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
while(n!=0){
	if(n&1){
		c++;
	}
	n=n>>1;
	cout<<c<<endl;
}
	return 0;
}


