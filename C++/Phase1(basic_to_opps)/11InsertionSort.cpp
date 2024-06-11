/*
//Insertion Sort
//why insetion->
it is adeptable
it is stable
*/
#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j;
		for(j=i-1;j>=0;j--){
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=temp;
	}
}


void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[6]={8,6,50,10,14,1};
	InsertionSort(arr,6);
	print(arr,6);
	return 0;
}

//Time complexity=O(n^2) best case=O(n)
//space comlexity=
