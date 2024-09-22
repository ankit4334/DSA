
//BUBBLE SORT
#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[6]={8,6,50,10,14,1};
	BubbleSort(arr,6);
	print(arr,6);
	return 0;
}

//Time complexity=O(n^2)  best case=O(n)

//Space complexity=O(1)
