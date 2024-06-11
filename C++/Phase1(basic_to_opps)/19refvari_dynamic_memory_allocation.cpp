//dynamic memory part 

//refrence variable->one person but name is diffrene is called refrence variable-

/*

#include <iostream>

using namespace std;

int main()
{
    int i=5;
    
   //create a ref variable 
   int &j=i;
   
   cout<<i<<" "<<j<<endl;
   
   i++;
   cout<<i<<" "<<j<<endl;
   
   j++;
   
   cout<<i<<" "<<j<<endl;
   
   
    

    return 0;
}


*/




/*
#include <iostream>
using namespace std;

void update(int n){
    n++;
}

//pass by refrence
void update1(int &n){
    n++;
}

int main()
{
    int n=5;
    cout<<"Before"<<n<<endl;
    //update(n);
    
    //pass by refrence
    update1(n);
    cout<<"After"<<n<<endl;
    return 0;
}

*/











/*

#include <iostream>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}

int* fun(int n){
    int* ptr=&n;
    return ptr;
}

int main()
{
    int n=5;
    func(n);
    fun(n);
    
    return 0;
}


*/



/*

//dynamic memory Allocation(dma)
//in dma not use name

#include <iostream>
using namespace std;

int main()
{
    
    char ch='a';
    cout<<sizeof(ch)<<endl;
    
    char *c=&ch;
    cout<<sizeof(c)<<endl;
    
    //dma take 9 byte memory in char  
    
   //char *ch=new char;
   
   //dma take 12 byte memory in int 
   //int *i=new int;
   

    
    return 0;
}



*/







/*

#include <iostream>
using namespace std;

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    
    //variable size array using dma 
    int *arr=new int[n];
    
    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"anser is:"<<getsum(arr,n);
    
    return 0;
}


*/



/*

#include <iostream>
using namespace std;

int main()
{
    
    
    
    //diffrene bet sma and dma 
    
    //01
    //static memory Allocation
    int arr[50];//total 200byte
    
    //dma
    int *a=new int[50]; //total 200+8pointer=208byte
    
    
    //02 
    //sma
    while(true){
        int i=5;
         // memory is clear 
    }

    //dma 
    while(true){
        int *i=new int;
        //    memory is cresh not crear
        
        //for delete
        //delete i;
        //delete []arr;

    }

    return 0;
}

*/
















//DMA part 2 

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    //same row and col
     //creation 2d array 
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    
    //creation done 
    
    
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    
    //printting output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}

*/







/*


#include <iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    
    int col;
    cin>>col;
    
    
    //diffrent row and col
     //creation 2d array 
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    
    //creation done 
    
    
    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    
    //printting output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    
    return 0;
}

*/









//relasing memoty
#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}












