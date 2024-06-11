
/*

//2-d array
//Q01.print 2-d array
//Q2.linearSearch in 2-array


#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int col){

for(int row=0;row<3;row++){
	for(int col=0;col<4;col++){
		if(arr[row][col]==target){
			return 1;
		}
	}
}
return 0;

}

int main(){
	
	//creating 2-d array
	/*
	int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	*/
	
	//creating 2-d array
	
/*	
	int arr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Enter the element to search"<<endl;
	int target;
	cin>>target;
	
	if(isPresent(arr,target,3,4)){
		cout<<"Element found"<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}
	
	
	
	return 0;
}




*/










/*


//Q3-row-wise sum
#include <iostream>
using namespace std;

void Sumofrow(int arr[][3],int row,int col){
    
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
          sum+=arr[i][j];  
            
        }
        
            cout<<"="<<sum;
        cout<<endl;
    }
    
}

void Sumofcol(int arr[][3],int row,int col){
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
          sum+=arr[j][i];  
            
        }
        
            cout<<"="<<sum;
        cout<<endl;
    }
    
}

int main()
{
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"row wise sum"<<endl;
    Sumofrow(arr,3,3);
    cout<<"col wise sum"<<endl;
    Sumofcol(arr,3,3);
    
   
    return 0;
}


*/




/*


//Q4-Largest Row sum and index;
#include <iostream>
using namespace std;

int largestRouSum(int arr[][3],int row,int col){
    
    int maxi=0;
    int rowIndex=-1;
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
          sum+=arr[i][j];  
            
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    
    }
    cout<<"the maximum sum is="<<maxi<<endl;
    return rowIndex;
    
}



int main()
{
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    int index=largestRouSum(arr,3,3);
    
    cout<<"index of max sum row="<<index<<endl;
    
   
    return 0;
}

*/













//Q4-wave print ;
#include <iostream>
using namespace std;

void waveprint(int arr[][3],int row,int col){
    
    for(int i=0;i<col;i++){
        
        if(i%2==0){
            for(int j=0;j<row;j++){
                
            cout<<arr[j][i]<<" ";
                
            }
            
            
        }
        
        
        else{
            
            for(int j=row-1;j>=0;j--){
                
              cout<<arr[j][i]<<" ";

            }
        }
       
        
        
    }
   
       
        }
    
    

int main()
{
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    waveprint(arr,3,3);
    
   
    return 0;
}



