//mergeSort
/*
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

*/











/*




//inversion count
class InversionCount
{
    // arr[]: Input Array
    // N : Size of the Array arr[]
    //Function to count inversions in the array.
    static long inversionCount(long[] arr, long N)
    {
        return count(arr , 0 , N - 1);
    }

    public static long count(long[] arr , long s , long e){
        //base case
        if(s >= e)
            return 0;

        long mid = (s + e) / 2;

        //left Part inversion
        long inv = count(arr , s , mid);
        inv += count(arr , mid + 1 , e);
        inv += merge(arr , s , e);
        return inv;
    }

    public static long merge(long[] arr , long s , long e){
        long ans = 0;

        int mid = (int)(s + e)/2;

        int l1 = mid - (int)s + 1;
        int l2 = (int)e - mid;

        long[] a1 = new long[l1];
        long[] a2 = new long[l2];

        int idx = (int)s;

        //copy elements
        for(int i = 0; i < l1; i++){
            a1[i] = arr[idx++];
        }

        for(int i = 0; i < l2; i++){
            a2[i] = arr[idx++];
        }

        int idx1 = 0;
        int idx2 = 0;
        idx = (int) s;
        while(idx1 < l1 && idx2 < l2){
            //check for inversions

            if(a1[idx1] > a2[idx2]){
                ans += (l1 - idx1);

                arr[idx++] = a2[idx2++];
            }
            else {
                arr[idx++] = a1[idx1++];
            }
        }

        while(idx1 < l1){
            arr[idx++] = a1[idx1++];
        }
        while(idx2 < l2){
            arr[idx++] = a2[idx2++];
        }

        return ans;
    }
}
*/