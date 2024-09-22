/*

#include<iostream>
using namespace std;
int main(){
	
	
	
	int arr1[15];
	cout<<"value at 15 index"<<arr1[14]<<endl;
	
	int arr2[10]={0};
	int n=10;
	cout<<"printing the arry and initialising with 0"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
	
	
	int arr3[10]={1};
	n=10;
	cout<<endl<<"printing the arry and initialising with 1"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr3[i]<<" ";
	}
	
	
	return 0;
}

*/

/*
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	cout<<"printing the array"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"printing Done"<<endl;
}

int main(){
	int third[15]={2,7};
	int n=15;
	printArray(third,10 );
	
	int fourth[10]={0};
	n=10;
	printArray(fourth,10);
	
	int fifth[10]={1};
	n=10;
	printArray(fifth,n);
	
	int fifthSize=sizeof(fifth)/sizeof(int);
	cout<<"size of fifth is"<<fifthSize<<endl;
	
	return 0;
}

*/

/*
#include<iostream>
using namespace std;
int main(){
	char ch[5]={'a','b','c','r','p'};
	cout<<ch[3]<<endl;
	
	cout<<"print the array"<<endl;
	
	for(int i=0;i<5;i++){
		cout<<ch[i]<<" ";
	}
	cout<<"printing Done"<<endl;
	
	double firstDouble[5];
	float firstFloat[6];
	bool firstBool[9];  
	return 0;
}

*/


/*
//find the max element in array
#include<iostream>
using namespace std;

int getMax(int arr[],int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
	
}



int getMin(int arr[],int n){
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
	
}

int main(){
	
	int size;
	cin>>size;
	
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
cout<<"maxinum element in array"<<getMax(arr,size)<<endl;


cout<<"minimum element in array"<<getMin(arr,size)<<endl;

	return 0;
}
*/


/*  
//update the array 
//value change because its array takes address

#include<iostream>
using namespace std;

void update(int arr[],int n){
	
	cout<<"insdie the funciton"<<endl;
	arr[0]=120;
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
	
	cout<<"going back to main funciton"<<endl;
	
}

int main(){
	int arr[3]={1,2,3};
	
	update(arr,3);
	
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}

*/



/*
#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
	
	 for(int i=0;i<size;i++){
	 	if(arr[i]==key){
	 		return 1;
		 }
		 
	 }
	 return 0;
	
}

int main(){
	
	int arr[10]={5,7,-2,10,22,-2,0,5,22,13};
	
	cout<<"enter the element search for"<<endl;
	int key;
	cin>>key;
	
	bool found=search(arr,10,key);
	
	if(found){
		cout<<"key is present"<<endl;
	}
  else{
  	cout<<"key is not present"<<endl;
  }
	
	
	return 0;
}

*/



//reverse a array
#include<iostream>
using namespace std;

void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
	swap(arr[start],arr[end]);
	start++;
	end--;	
	}
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}




int main(){
	
	int arr1[6]={1,4,0,5,-2,15};
	int arr2[5]={2,6,3,9,4};
	
	reverse(arr1,6);
	reverse(arr2,5);
	
	printArray(arr1,6);
	printArray(arr2,5);
	return 0;
}

