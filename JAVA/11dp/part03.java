/*
 * Some basic things about recursion
 * case01.min,max,largest smallest(comperision)
 * 
 * case02.count,sum ways,total ways,all ways(Addition)
*/



/*
  * Coin Change (Variation of Unbounded Knapsack)
  coins[]={1,2,3}
  sum=4
  find total no's of ways or count of ways or all ways
  {1,1,1,1},{1,1,2},{2,2},{1,3} this total ways

  coins[]={2,5,3,6}
  {2,2,2,2,2},{2,2,3,3},{2,2,6},{2,3,5} and {5,5}
  sum=10





public class part03 {
    public static int coinsChange(int coins[],int sum){
        int n=coins.length;
        int dp[][]=new int[n+1][sum+1];
        //initialize - sum is 0
        //i -> coins; j-> sum/change
        for(int i=0;i<n+1;i++){
            dp[i][0]=1;
        }

        for(int j=0;j<sum+1;j++){
            dp[0][j]=0;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(coins[i-1] <= j){
                    dp[i][j]=dp[i][j-coins[i-1]] +dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    public static void main(String[] args) {
    int coins[]={1,2,3};
    int sum=4;  //ans=4
    System.out.println("total no's of ways"+coinsChange(coins, sum));
    }
    
}
*/















/* 
 ->Rod cutting:-Given a rod of length n inches and an array of prices that includes prices of all pieces of size
 smaller than n.Determine the maximum value obtainable by cutting up the rod and selling the pieces 
 length=1,2,3,4,5,6,,7,8
 price=1,5,8,9,10,17,17,20
 rodLength=8




public class part03 {
    //weight => lenght;  val=>price; w=>totRod
    public static int rodCutting(int len[],int price[],int totRod){
        int n=price.length;
        int dp[][]=new int[n+1][totRod+1];

        for(int i=0;i<n+1;i++){
            for(int j=0;j<totRod+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<totRod+1;j++){
                if(len[i-1] <= j){
                    dp[i][j]=Math.max(price[i-1] +dp[i][j-len[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][totRod];
        
    }
    public static void main(String[] args) {

    int len[]={1,2,3,4,5,6,7,8}; //pieces length
    int price[]={1,5,8,9,10,17,17,20};
    int totRod=8;
    System.out.println(rodCutting(len, price, totRod));


    }
}


*/























/* 
//Longest Common Subsequence(LCS):-
A subsequence of string is a new string generated from the original string with some charecters (can be none)
deleted without changing the relative order of the remaining charecters.

str1="abcde" str2"ace"
ans=3 //"ace"



str1="abcdge" str2"abedg"
ans=4 //"abdg"





//01.Recursion method
public class part03 {
    public static int lcs(String str1,String str2,int n,int m){
        if(n==0 || m==0){
            return 0;
        }

        if(str1.charAt(n-1)==str2.charAt(m-1)){
            return lcs(str1, str2, n-1, m-1)+1;
        }
        else{
            int ans1=lcs(str1, str2, n-1, m);
            int ans2=lcs(str1, str2, n, m-1);
            return Math.max(ans1,ans2);
        }
       
        
    }

    //memoization code 
    public static int lcsWithMemo(String str1,String str2,int n,int m,int dp[][]){
        if(n==0 || m==0){
            return 0;
        }

        if(dp[n][m]!=-1){
            return dp[n][m];
        }


        if(str1.charAt(n-1)==str2.charAt(m-1)){
            return dp[n][m]=lcsWithMemo(str1, str2, n-1, m-1,dp)+1;
        }
        else{
            int ans1=lcsWithMemo(str1, str2, n-1, m,dp);
            int ans2=lcsWithMemo(str1, str2, n, m-1,dp);
            return Math.max(ans1,ans2);
        }
    }




    //03.tabulation method 
   public static int lcsTabu(String str1,String str2){
        int n=str1.length();
        int m=str2.length();
        int dp[][]=new int[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }


        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(str1.charAt(i-1)==str2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    int ans1=dp[i-1][j];
                    int ans2=dp[i][j-1];
                    dp[i][j]=Math.max(ans1,ans2);
                }
            }
        }
        return dp[n][m];

    }



    public static void main(String[] args) {
        String str1="abcdge";
        String str2="abedg";
        //lcs="abdg"; lenght=4

        //recursion method
        //System.out.println(lcs(str1, str2, str1.length(),str2.length()));


        //02.mehtod memoization method
        // int n=str1.length();
        // int m=str2.length();
        // int dp[][]=new int[n+1][m+1];
        // for(int i=0;i<n+1;i++){
        //     for(int j=0;j<m+1;j++){
        //         dp[i][j]=-1;
        //     }
        // }
        // System.out.println(lcsWithMemo(str1,str2,n,m,dp));


        //03.Tabulation method
        System.out.println(lcsTabu(str1,str2));

    }
}

*/




























//dp part-04

/* 
 *Longest Common Substring:-
 a substring is contiguous sequence of characters within a string.
 S1="ABCDE" ,S2="ABGCE"
 ans=2 //"AB"

 S1="ABCDGH" ,S2="ACDGHR"
 ans=4 //"CDGH"




public class part03 {
    //tc=O(n*m)
    public static int LongestCommonSubstring(String str1,String str2){
       
        int n=str1.length();
        int m=str2.length();
        int dp[][]=new int[n+1][m+1];
        int ans=0;
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }

        for(int j=0;j<m+1;j++){
            dp[0][j]=0;
        }


        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(str1.charAt(i-1)==str2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1]+1;
                    ans=Math.max(ans,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return ans;
        
    }
    public static void main(String[] args) {

        String S1="ABCDE",S2="ABGCE";

    
        System.out.println(LongestCommonSubstring(S1,S2));

    }
}

*/


















/* 
 Longest Increasing Subswquence
 arr[]={50,3,10,7,40,80};
 length of LIS=4;

import java.util.*;
public class part03 {

    public static int lcs(int arr1[],int arr2[]){
        int n=arr1.length;
        int m=arr2.length;
        int dp[][]=new int[n+1][m+1];
        
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
        }

        for(int j=0;j<m+1;j++){
            dp[0][j]=0;
        }


        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(arr1[i-1]==arr2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    int ans1=dp[i-1][j];
                    int ans2=dp[i][j-1];
                    dp[i][j]=Math.max(ans1,ans2);
                }
            }
        }
        return dp[n][m];

    }
    //tc=O(n*m)
    public static int lis(int arr1[]){
      HashSet<Integer> set=new HashSet<>();
      for(int i=0;i<arr1.length;i++){
        set.add(arr1[i]);
      }

       int arr2[]=new int[set.size()];  //sorted unique els
       int i=0;
       for(int num:set){
        arr2[i]=num;
        i++;
       }

       Arrays.sort(arr2);
       
       return lcs(arr1,arr2);
        
    }
    public static void main(String[] args) {
        int arr[]={50,3,10,7,40,80};
        System.out.println(lis(arr));
    }
}



*/
//not working above questions
























//Edit Distance problem
import java.util.*;
public class part03 {
    //o(n*m)
    public static int editDistance(String str1,String str2){

        int n=str1.length();
        int m=str2.length();
        int dp[][]=new int[n+1][m+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0){
                    dp[i][j]=j;
                }
                if(j==0){
                    dp[i][j]=i;
                }
            }

        }

        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(str1.charAt(i-1)==str2.charAt(j-1)){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    int add=dp[i][j-1]+1;
                    int del=dp[i-1][j]+1;
                    int rep=dp[i-1][j-1]+1;
                    dp[i][j]=Math.min(add,Math.min(del,rep));
                }
            }
        }
        return dp[n][m];
    }
    public static void main(String[] args) {
        String str1="intention";
        String str2="execution";
        System.out.println(editDistance(str1, str2));
    }
}
