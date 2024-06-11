
/*

//Q->rotate 90degree

#include <iostream>
using namespace std;

void rotate90(int arr[][3],int row,int col){
    
    for(int i=0;i<col;i++){
        for(int j=row-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
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
   rotate90(arr,3,3);
    return 0;
}


*/


//Q->spiral printing solve in codequeitent



/*

#include <iostream>
using namespace std;

int BinarySearch(int arr[][3],int row,int col,int target){
    
    int s=0;
    int e=(row*col)-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        int element=arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
            int mid=s+(e-s)/2;

    }
     return 0;
}

int main()
{
   int arr[3][3];
   
   
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           cin>>arr[i][j];
       }
   }
   cout<<"enter the target"<<endl;
   int target;
   cin>>target;
   int inded=BinarySearch(arr,3,3,target);
   cout<<inded<<endl;
    return 0;
}
 
 
 */
 



/*
//search2DMatrix2.cpp

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
};

*/

