/*
//swap alternet element

#include<iostream>
using namespace std;

void Swapalternet(int arr[],int n){
	for(int i=0;i<n;i+=2){
	if(i+1<n){
		swap(arr[i],arr[i+1]);
	}

	}
}


void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int even[6]={1,2,3,4,5,6};
	int odd[5]={1,2,3,4,5};
	 
	Swapalternet(even,6);
	Swapalternet(odd,5);
	
	print(even,6);
	print(odd,5);
	
	return 0;
}
*/






/*
//findUnique value
#include<iostream>
using namespace std;


int findUnique(int arr[],int size){
	int ans=0;
	for(int i=0;i<size;i++){
		ans=ans^arr[i];
	}
	return ans;
}


void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
	int arr[5]={1,2,1,2,5};
	
	findUnique(arr,5);
	
	print(arr,5);
	cout<<findUnique(arr,5)<<endl;
	return 0;
}

*/


/*
//find Duplicate in the array
#include<iostream>
using namespace std;

//method 1

int duplicate(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				return arr[i];
			}
		}
	}
	return -1;
}


//second method to find duplicate
int dublicate(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	for(int i=0;i<n;i++){
		ans=ans^i;
	}
	return ans;
}



int main(){
	int arr[6]={5,1,2,3,4,2};
	
	cout<<dublicate(arr,6);
	return 0;
}

*/

/*
//find all duplicates in array
//ak logic not good process
#include<iostream>
using namespace std;

void dublicate(int arr[],int n){
for(int i=0;i<n-1;i++){
	int c=0;
	for(int j=i+1;j<n;j++){
		if(arr[i]==arr[j]){
			c=c+2;
		}
	
	}
	if(c==2){
		cout<<arr[i];
	}
	cout<<endl;

}
}

int main(){
	
	int arr[8]={4,3,2,7,8,2,3,1};
	
	dublicate(arr,8);
	
	return 0;
}
*/

/*
//you must do this quesion

//intersection of two Arrays
#include<iostream>
using namespace std;
int intersection(int arr1[],int n1,int arr2,int n2){
	
}
int main(){
	
	int arr1[6]={1,2,2,2,3,4};
	int arr2[4]={2,2,3,3};
	
	return 0;
}
*/


/*

//Pair sum
#include<iostream>
using namespace std;
void pairsum(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==5){
			cout<<arr[i]<<" "<<arr[j];
			}
		}cout<<endl;
		
	}
}


int main(){
	int arr[5]={1,2,3,4,5};
	
	pairsum(arr,5);
	
	return 0;
}

*/

//same it is triplets with given sum




//next question Sort 0,1
//Sort 0,1 problem
#include<iostream>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortOnezero(int arr[],int n){
	int left=0,right=n-1;
	
	while(left<right){
		while(arr[left]==0 && left<right){
			left++;
		}
		while(arr[right]==1 && left<right){
			right--;
		}
	
			swap(arr[left],arr[right]);
		left++;
		right--;
	}
	
	
}

int main(){
	
	int arr[8]={1,1,0,0,0,0,1,0};
	sortOnezero(arr,8);
	printArray(arr,8);
	
	return 0;
}




