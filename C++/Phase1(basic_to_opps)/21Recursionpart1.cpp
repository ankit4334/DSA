
//recursion starting and uderstanding
//---------------------------------------------

//fectorial
/*
#include<iostream> 
using namespace std;

int factorial(int n) {
    
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);   
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main() {

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}
*/

       







//Recursion understanding
/*
//power problem
#include <iostream>
using namespace std;
int power(int n){
    if(n==0)
    return 1;
    
    int small=power(n-1);
    int big=2*small;
    return big;
    
    //or
    //return 2*power(n-1); 
}

int main()
{
    int n;
    cin>>n;
    
    int ans=power(n);
    
    cout<<ans<<endl;
    

    return 0;
}

*/





//print counting
/*
#include <iostream>
using namespace std;
void counting(int n){
    if(n==0)
        return ;
    
    cout<<n<<endl;
    
    counting(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    
    counting(n);
    
     return 0;
}

*/














/*
#include <iostream>
using namespace std;

void reachHome(int src,int dest){
 
 cout<<"source:"<<src<<"destinaiton:"<<dest<<endl;
 
 if(src==dest){
     cout<<"pahuch gya"<<endl;
     return ;
 }
 
 reachHome(src+1,dest);
 
}


int main()
{

int dest=10;
int src=1;
cout<<endl;
reachHome(src,dest);

    return 0;
}

*/



/*

//fibonacci Series
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0)
    return 0;
    
    if(n==1)
    return 1;

    return fibonacci(n - 1) + fibonacci(n - 2); // recurrence relation
}

int main(){
    
    int n;
    cin>>n;
    
    int ans=fibonacci(n);
    cout<<ans<<endl;
    
    
    return 0;
}

*/







/*

//climeb Stairs
#include<iostream>
using namespace std;
int countDisticWayToClimeStair(int n){
    if(n<0)
    return 0;
    
    if(n==0)
    return 1;
    
    return countDisticWayToClimeStair(n-1) + countDisticWayToClimeStair(n-2);
}

int main(){
    
     int n;
     cin>>n;
     
     int ans=countDisticWayToClimeStair(n);
     cout<<ans<<endl;
    
    
    return 0;
}

*/


/*

//say digit
#include<iostream>
using namespace std;
void saydigit(int n,string arr[]){
   
   //base  case
    if(n==0)
    return ;

    //processing
    int digit=n%10;
    n=n/10;
    
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
    
}

int main(){
    
    string arr[10]={"zero","one","two","three","four",
    "five","six","seven","eight","nine"};
    
    int n;
    cin>>n;
    
        
    cout<<endl;
    saydigit(n,arr);

    
    return 0;
}


*/









/*
//cheak array is sorted or not
#include <iostream>
using namespace std;

bool isSorted(int *arr,int size){
    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0]>arr[1])
    return false;
    
    else{
        bool remaininPart=isSorted(arr+1,size-1);
        return remaininPart;
    }
}

int main()
{
   int arr[5]={2,4,6,8,9};
   
   int size=5;
   bool ans=isSorted(arr,size);
   
   if(ans){
       cout<<"Array is sorted"<<endl;
       
   }
   else{
       cout<<"Array is not sorted"<<endl;
   }

    return 0;
}


*/



/*

//sum of array using recursion
#include <iostream>
using namespace std;

int getsum(int *arr,int size){
    
    if(size==0){
        return 0;
    }
    
    if(size==1){
        return arr[0];
    }
    
    int remaininPart=getsum(arr+1,size-1);
    int sum=arr[0]+remaininPart;
    return sum;
}

int main()
{
   int arr[5]={2,8,6,12,10};
   
   int size=5;
   int ans=getsum(arr,size);
   
   cout<<ans<<endl;

    return 0;
}


*/



/*

//linear Search using recursion
#include <iostream>
using namespace std;

bool linearSearch(int *arr,int size,int k){
    if(size==0)
    return false;
    
    if(arr[0]==k){
        return true;
    }
    
    else{
        bool remainingPart=linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}

int main()
{
   int arr[5]={2,4,6,8,9};
   
   int size=5;
   int key=8;
   
   bool ans=linearSearch(arr,size,key);
   
   if(ans){
       cout<<"element is found"<<endl;
   }
   else{
       cout<<"element is not found"<<endl;
   }
   
   

    return 0;
}

*/











/*

//binarySearch using recursion.........

#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}

*/












/*
//reverse string using recursion

#include <iostream>
using namespace std;
void reverse(string &str,int i,int j){
    cout<<"call revieved for"<<str<<endl;
    if(i>j)
    return ;
    
    swap(str[i],str[j]);
    i++;
    j--;
    
    //recursion call
    reverse(str,i,j);
}

int main()
{
    string name="ankit";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    
    

    return 0;
}


*/



/*

//cheak palindrom
#include <iostream>
using namespace std;

bool checkPalindome(string str,int i,int j){
    
    if(i>j)
    return true;
    
    if(str[i]!=str[j])
    return false;
    else{
        return checkPalindome(str,i+1,j-1);
    }
    
}

int main()
{
    
    string name="abcba";
    cout<<endl;
    
    bool isPalindrome=checkPalindome(name,0,name.length()-1);
    
    if(isPalindrome){
        cout<<"It a palindrom"<<endl;
    }
    else{
        cout<<"It is not a palindrom"<<endl;
    }

    return 0;
}

*/











/*

//power using recursion
#include <iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0)
    return 1;
    
    if(b==1)
    return a;
    
    int value=power(a,b/2);
    
    //if b is even
    if(b%2==0)
    return value*value;
    
    else{
        //if b is odd
        return a*value*value;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    int ans=power(a,b);
    
    cout<<"Answer is"<<ans<<endl;

    return 0;
}


*/





/*



//bubble sort using recursion
#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {

    //base case - already sorted
    if(n == 0 || n == 1) {
        return ;
    }

    //1 case sovle karlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive Call
    sortArray(arr, n-1);

}

int main() {

    int arr[5] = {2,5,1,6,9};
    
    sortArray(arr,5);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}
*/