/*
#include<iostream>
using namespace std;
int main(){
//	int n;
//	cin>>n;
//	cout<<"hello"<<endl;

//use cin.get()
int a,b;
a=cin.get();  //its char value
cout<<"value of a is"<<a<<endl;
	return 0;
}
*/



//find uppercase and lovercase 

//#include<iostream>
//using namespace std;
//int main(){
//	char ch;
//	cin>>ch;
//	if(ch>='a' && ch<='z'){
//		cout<<"this is lowercase"<<endl;
//	}
//	else if(ch>='A' && ch<='Z'){
//		cout<<"this is uppercase"<<endl;
//	}
//	else if(ch>='0' && ch<='9'){
//		cout<<"this is number"<<endl;
//	}
//	else{
//		cout<<"this unvalid number"<<endl;
//			}
//	return 0;
//}



//sum of number using while loop

//
//#include<iostream>
//using namespace std;
//int main(){
//int n;
//cin>>n;
//int i=1;
//int sum=0;
//while(i<=n){
//	sum+=i;
//	i++;
//}
//cout<<sum<<endl;
//	return 0;
//}



#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
int row=1;
while(row<=n){
	int col=1;
	while(col<=n){
		char ch='A'+row-1;
		cout<<ch;
		col=col+1;
	}
	cout<<endl;
	row=row+1;
}
	return 0;
}


