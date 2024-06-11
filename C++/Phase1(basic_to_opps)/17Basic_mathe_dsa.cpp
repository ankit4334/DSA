//Basic mathes for dsa

/*

#include<iostream>
using namespace std;

bool isprime(int n){
    
    if(n<=1){
        return false;
    }
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int countprime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(isprime(i));
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    
  if(isprime(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    
    cout<<"number of prime->"<<countprime(n);
    return 0;
}

*/


/*

//Sieve of Eratosthenes


#include<iostream>
#include<vector>
using namespace std;

//using Sieve
void sieve(bool prime[]) {

    //setting TRUE for every number
    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000000; i++) {

        if(prime[i]){
            //iske saare multiple mark krde - non prime
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = 0;   
            }
        }
    }
    prime[0] = prime[1] = 0;
}

int main() {

    bool prime[1000001];
    sieve(prime);

    int n;
    cin >> n;
    while(n!=-1) {
        if(prime[n]) {
            cout << "It is a Prime Number" << endl;
        }
        else{
            cout << " It is not a Prime Number" << endl;
        }
        cin >> n;
    }

    return 0;
}

*/





/*
//GCD
#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}


*/




/*
//FAST EXPONENTIAL

#include<iostream>
using namespace std;

int fastExpo(int a, int b ) {

    int res = 1;

    while(b > 0) {

        if(b&1) {
            //odd
            res = res*a;
        }
        b = b >> 1;
        a = a * a; 
    }
    return res;
}

int main() {

    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    cout << "Answer is: " << fastExpo(a,b) << endl;

    return 0;
}

*/
