
//decimal to binary repsention using bitwise oprator
/*
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
	while(n!=0){
		int bit=n & 1;
		ans=(bit * pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	cout<<"Anser is "<<ans<<endl;
	return 0;
}
*/

//if u entered number is negetive;

/*
#include<iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    if(n<0){
        // if number is negative
        n = n*(-1);
        int ans = decimalToBinary(n);
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    } else {
        // if number is positive 
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }
}

*/

//binary to decimal conversion

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
while(n!=0){
	int digit=n%10;
	if(digit==1){
		ans=ans+pow(2,i);
	}
	n=n/10;
	i++;
}
	cout<<"Anser is "<<ans<<endl;
	return 0;
}
