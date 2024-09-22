/* 
 704. Binary Search
Solved
Easy
Topics
Companies
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4
Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1



class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(nums[m]==target){
                return m;
            }

            if(nums[m]>target){
                e=m-1;
            }
            else{
                s=m+1;
            }

            m=s+(e-s)/2;

        }

        return -1;
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
Floor in a Sorted Array
Difficulty: EasyAccuracy: 33.75%Submissions: 308K+Points: 2
Given a sorted array arr[] of size n without duplicates, and given a value x. Floor of x is defined as the largest element k in arr[] such that k is smaller than or equal to x. Find the index of k(0-based indexing).

Examples

Input: n = 7, x = 0 arr[] = {1,2,8,10,11,12,19}
Output: -1
Explanation: No element less than 0 is found. So output is "-1".
Input: n = 7, x = 5 arr[] = {1,2,8,10,11,12,19}
Output: 1
Explanation: Largest Number less than 5 is 2 (i.e k = 2), whose index is 1(0-based indexing).
Your Task:
The task is to complete the function findFloor() which returns an integer denoting the index value of K or return -1 if there isn't any such number.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

static int findFloor(long arr[], int n, long x){
        int s=0;
        int e=n-1;
        int ans=-1;
        int m=s+(e-s)/2;
        while(s<=e){
            if(arr[m]<=x){
                ans= m;
                s=m+1;
            }

            else{
                e=m-1;
            }

            m=s+(e-s)/2;

        }

        return ans;
    }
-----------------------------------------------------------------------------------------------------------------------------------------
Ceil The Floor
Difficulty: EasyAccuracy: 43.76%Submissions: 87K+Points: 2
Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].

Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].

Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.

Examples:

Input: x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
Output: 6, 8
Explanation: Floor of 7 is 6 and ceil of 7 is 8.
Input: x = 10 , arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
Output: 8, -1
Explanation: Floor of 10 is 8 but ceil of 10 is not possible.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)


class Solution {
    public int[] getFloorAndCeil(int x, int[] arr) {
        int ans[]={-1,-1};
        ans[0]=flor(arr,x,ans);
        ans[1]=ceil(arr,x,ans);
        return ans;
    }
    
    public static int flor(int arr[],int x,int ans[]){
        int ma=-1;
        for(int i=0;i<arr.length;i++){
            if (arr[i] <= x && arr[i] > ma) {
                ma = arr[i];
            }
        }
        return ans[0]=ma;
    }
    
    public static int ceil(int arr[],int x,int ans[]){
        int ma=Integer.MAX_VALUE;
        for(int i=0;i<arr.length;i++){
            if (arr[i] >= x && arr[i] < ma) {
                ma = arr[i];
            }
        }
        if(ma==Integer.MAX_VALUE){
            ma=-1;
        }
        return ans[1]=ma;
    }
}

-----------------------------------------------------------------------------------------------------------------------------------------
35. Search Insert Position
Solved
Easy
Topics
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

class Solution {
    public int searchInsert(int[] nums, int target) {

        int s=0;
        int e=nums.length-1;
        int m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(nums[m]==target){
                return m;
            }
            if(nums[m]<target){
               s=m+1;   
            }
            else{
                e=m-1;  
            }
            m=s+(e-s)/2;
        }
        return s;
        
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
34. Find First and Last Position of Element in Sorted Array
Solved
Medium
Topics
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 


class Solution {
    public int[] searchRange(int[] nums, int target) {
        int n=nums.length;
        int f=firstOcc(nums,n,target);
        int l=lastOcc(nums,n,target);
        int ans[]=new int[2];
        if(f==-1 || l==-1){
            ans[0]=-1;
            ans[1]=-1;
        }
        else{
            ans[0]=f;
            ans[1]=l;
        }
        return ans;
    }

    public static int firstOcc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[m]==x){
                ans=m;
                e=m-1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        
        return ans;
    }

    public static int lastOcc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[m]==x){
                ans=m;
                s=m+1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        
        return ans;
    }

}
-----------------------------------------------------------------------------------------------------------------------------------------
33. Search in Rotated Sorted Array
Solved
Medium
Topics
Companies
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 


// class Solution {

//     public int pivot(int[] nums){
//         int s=0;
//         int e=nums.length-1;
//         int m=s+(e-s)/2;
//         while(s<e){
//             if(nums[m]>=nums[0]){
//                 s=m+1;
//             }
//             else{
//                 e=m;
//             }
//             m=s+(e-s)/2;
//         }

//         return s;
        
//     }

//     public int binary(int[] nums,int s,int e,int target) {
        
//         int m=s+(e-s)/2;
//         while(s<=e){
//             if(nums[m]==target){
//                 return m;
//             }
//             if(nums[m]<target){
//                 s=m+1;
//             }
//             else{
//                 e=m-1;
//             }
//             m=s+(e-s)/2;
//         }

//         return -1;
        
//     }

//     public int search(int[] nums, int target) {
//         int n=nums.length;
//         int p=pivot(nums);
//         if(target >= nums[p] && target<=nums[n-1]){
//             return binary(nums,p,n-1,target);
//         }
//         else{
//             return  binary(nums,0,p-1,target);
//         }
//     }
// }












class Solution {
    public int search(int[] nums, int k) {
        
        int low =0; int high = nums.length-1;

        while (low<=high){

            int mid = low+ (high-low)/2;

            if(nums[mid]==k) return mid;
            else if(nums[low]<=nums[mid]){
                
                if(k>=nums[low]&&k<=nums[mid]){

                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{

                if(k>=nums[mid] && k<=nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }

        }
        return -1;
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
Number of occurrence
Difficulty: MediumAccuracy: 59.34%Submissions: 222K+Points: 4
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example 1:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: x = 2 occurs 4 times in the given array so the output is 4.
Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: X = 4 is not present in the given array so the output is 0.
Your Task:
You don't need to read input or print anything.
Your task is to complete the function count() which takes the array of integers arr, n, and x as parameters and returns an integer denoting the answer.
If x is not present in the array (arr) then return 0.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

class Solution {
    int count(int[] arr, int n, int x) {
        int f=firstOcc(arr,n,x);
        int l=lastOcc(arr,n,x);
        
        if(f==-1 || l==-1){
            return 0;
        }
        
        return (l-f)+1;
    }
    
    public static int firstOcc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[m]==x){
                ans=m;
                e=m-1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        
        return ans;
    }
    
    public static int lastOcc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int m=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(arr[m]==x){
                ans=m;
                s=m+1;
            }
            else if(arr[m]<x){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        
        return ans;
    }

-----------------------------------------------------------------------------------------------------------------------------------------
81. Search in Rotated Sorted Array II
Solved
Medium
Topics
Companies
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

class Solution {
    public boolean search(int[] nums, int target) {
        int low = 0, high = nums.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // When duplicates are present, we can skip the duplicates
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
            } else if (nums[low] <= nums[mid]) {
                // Left part is sorted
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                // Right part is sorted
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
153. Find Minimum in Rotated Sorted Array
Solved
Medium
Topics
Companies
Hint
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
Example 3:

Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 


class Solution {
    public int findMin(int[] nums) {
        int s=0;
        int e=nums.length-1;
        int m=s+(e-s)/2;
        while(s<e){
            if(nums[m] > nums[e]){
                s=m+1;
            }
            else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return nums[s];
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
154. Find Minimum in Rotated Sorted Array II
Solved
Hard
Topics
Companies
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,4,4,5,6,7] might become:

[4,5,6,7,0,1,4] if it was rotated 4 times.
[0,1,4,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums that may contain duplicates, return the minimum element of this array.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0



class Solution {
    public int findMin(int[] nums) {
        int s=0;
        int e=nums.length-1;
        int m=s+(e-s)/2;
        while(s<e){
            if(nums[m] > nums[e]){
                s=m+1;
            }
            else if(nums[m] < nums[e]){
                e=m;
            }
            else{
                e--;
            }
            m=s+(e-s)/2;
        }
        return nums[s];
    }
}

-----------------------------------------------------------------------------------------------------------------------------------------
Find Kth Rotation
Difficulty: EasyAccuracy: 23.16%Submissions: 207K+Points: 2
Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
After 1st Rotation : [9, 2, 4, 6]
After 2nd Rotation : [6, 9, 2, 4]

Examples:

Input: arr = [5, 1, 2, 3, 4]
Output: 1
Explanation: The given array is 5 1 2 3 4. The original sorted array is 1 2 3 4 5. We can see that the array was rotated 1 times to the right.
Input: arr = [1, 2, 3, 4, 5]
Output: 0
Explanation: The given array is not rotated.
Expected Time Complexity: O(log(n))
Expected Auxiliary Space: O(1)

Constraints:

class Solution {
    public int findKRotation(List<Integer> arr) {
       int s = 0;
        int e = arr.size() - 1;

        while (s < e) {
            int m = s + (e - s) / 2;

            if (arr.get(m) > arr.get(e)) {
                s = m + 1;
            } else {
                e = m;
            }
        }
        
        return s;
    }
-----------------------------------------------------------------------------------------------------------------------------------------
162. Find Peak Element
Solved
Medium
Topics
Companies
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

class Solution {
    public int findPeakElement(int[] nums) {

        int s=0;
        int e=nums.length-1;
        while(s<e){
            int m=s+(e-s)/2;
            if(nums[m]<nums[m+1]){
                s=m+1;
            }
            else{
                e=m;
            }
        }
        return s;
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
Square root of a number
Difficulty: EasyAccuracy: 54.03%Submissions: 251K+Points: 2
Given an integer n, find the square root of n. If n is not a perfect square, then return the floor value.

Floor value of any number is the greatest Integer which is less than or equal to that number

Examples:

Input: n = 5
Output: 2
Explanation: Since, 5 is not a perfect square, floor of square_root of 5 is 2.
Input: n = 4
Output: 2
Explanation: Since, 4 is a perfect square, so its square root is 2.
Expected Time Complexity: O(logn)
Expected Auxiliary Space: O(1)

class Solution {
    long floorSqrt(long n) {
       long s=0;
       long e=n;
       long ans=-1;
       while(s<=e){
           long m=s+(e-s)/2;
           long sq=m*m;
           if(n==sq){
               return m;
           }
           
           if(sq<n){
               ans=m;
               s=m+1;
           }
           else{
               e=m-1;
           }
       }
       return ans;
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
Find Nth root of M
Difficulty: EasyAccuracy: 25.06%Submissions: 139K+Points: 2
You are given 2 numbers (n , m); the task is to find n√m (nth root of m).
 

Example 1:

Input: n = 2, m = 9
Output: 3
Explanation: 32 = 9
Example 2:

Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not
integer.
 

Your Task:
You don't need to read or print anyhting. Your task is to complete the function NthRoot() which takes n and m as input parameter and returns the nth root of m. If the root is not integer then returns -1.
 

Expected Time Complexity: O(n* log(m))
Expected Space Complexity: O(1)

class Solution
{
    public int NthRoot(int n, int m)
    {
        int s=0;
        int e=m;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            long k = 1; 

            for (int i = 0; i < n; i++) {
                k *= mid;
                if (k > m) break; 
            }
            
            if(k==m){
                return mid;
            }
            if(k<m){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        
        return -1;
    }
}

-----------------------------------------------------------------------------------------------------------------------------------------
Allocate Books
Moderate
80/80
Average time to solve is 10m
897 upvotes
Asked in companies
Problem statement
Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.



There are ‘m’ number of students, and the task is to allocate all the books to the students.



Allocate books in such a way that:

1. Each student gets at least one book.
2. Each book should be allocated to only one student.
3. Book allocation should be in a contiguous manner.


You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.



If the allocation of books is not possible, return -1.



Example:
Input: ‘n’ = 4 ‘m’ = 2 
‘arr’ = [12, 34, 67, 90]

Output: 113


import java.util.ArrayList;

public class Solution {

    private static int countStudent(ArrayList<Integer> arr, int pages) {

        int student = 1;

        int pageCount = 0;

        for (int i = 0; i < arr.size(); i++) {

            if (pageCount + arr.get(i) <= pages) {

                pageCount += arr.get(i);

            } else {

                student++;

                pageCount = arr.get(i);

            }

        }

        return student;

    }

    public static int findPages(ArrayList<Integer> arr, int n, int m) {

        if (arr.size() < m) {

            return -1; // More students than books

        }

        int sum = 0, max = Integer.MIN_VALUE;

        for (int num : arr) {

            sum += num;

            max = Math.max(max, num);

        }

        int low = max;

        int high = sum;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int countStd = countStudent(arr, mid);

            if (countStd > m) {

                low = mid + 1;

            } else {

                high = mid - 1;

            }

        }

        return low;

    }

}
-----------------------------------------------------------------------------------------------------------------------------------------
74. Search a 2D Matrix
Solved
Medium
Topics
Companies
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        //method 01
        int r=matrix.length;
        int c=matrix[0].length;
        int ri=0;
        int ci=c-1;
        while(ri<r && ci>=0){
            int ele=matrix[ri][ci];
            if(ele==target){
                return true;
            }
            else if(ele < target){
                ri++;
            }
            else{
                ci--;
            }
        }

        return false;
        
    }
}



//METHOD  02
        
//         int n=matrix.size();
//         int m=matrix[0].size();
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==target){
//                     return true;
//                 }
//             }
//         }
//         return false; 
-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


-----------------------------------------------------------------------------------------------------------------------------------------


*/