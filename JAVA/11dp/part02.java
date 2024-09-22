/* 
 //0-1 Knapsack problems
 ->types of Knapsack problems
 01.fractional knapsack(greedy)->divide the goods(take a portion)
 02.0-1 knapsack ->don't divide the goods (take full)
 03.Unbounded knapsack ->add multiple item(take full portion)
*/



/*
 val[]={15,14,10,45,30}
 wt[]={2,5,1,3,4}
 W(total allowed weight)=7

 ans=Max profit
 */


/* 
//01.Recursion knapsack problem. 
public class part02 {
    public static int knapsack(int val[],int wt[],int W,int n){  //Tc=O(2^n*w)
        if(W==0 || n==0){
            return 0;
        }

        if(wt[n-1] <= W){ //valid
            //include
            int ans1=val[n-1]+knapsack(val, wt, W-wt[n-1],n-1);

            //exclude
            int ans2=knapsack(val, wt, W, n-1);
            return Math.max(ans1,ans2);
        }
        else{//not valid
            return knapsack(val, wt, W, n-1);
        }

    }
    public static void main(String[] args) {

    int val[]={15,14,10,45,30};
    int wt[]={2,5,1,3,4};
    int W=7;

    System.out.println(knapsack(val, wt, W,val.length));
        
    }
    
}
*/





/* 

//01.knapsack problem Using memoization. TC=O(n*W)
public class part02 {
    public static int knapsack(int val[],int wt[],int W,int n,int dp[][]){
        if(W==0 || n==0){
            return 0;
        }

        if(dp[n][W]!=-1){
            return dp[n][W];
        }

        if(wt[n-1] <= W){ //valid
            //include
            int ans1=val[n-1]+knapsack(val, wt, W-wt[n-1],n-1,dp);

            //exclude
            int ans2=knapsack(val, wt, W, n-1,dp);
            dp[n][W]=Math.max(ans1,ans2);
            return dp[n][W];
        }
        else{
            dp[n][W]=knapsack(val, wt, W, n-1,dp);
            return dp[n][W];
        }

    }
    public static void main(String[] args) {

    int val[]={15,14,10,45,30};
    int wt[]={2,5,1,3,4};
    int W=7;

    int dp[][]=new int[val.length+1][W+1];
    for(int i=0;i<dp.length;i++){
        for(int j=0;j<dp[0].length;j++){
            dp[i][j]=-1;
        }
    }

    System.out.println(knapsack(val, wt, W,val.length,dp));
        
    }
    
}

*/






/* 

//01.knapsack problem Using Tabulation method. TC=O(n*W)
public class part02 {

    public static void print(int dp[][]){
        for(int i=0;i<dp.length;i++){
            for(int j=0;j<dp[0].length;j++){
                System.out.print(dp[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static int knapsackTab(int val[],int wt[],int W){
        int n=val.length;
        int dp[][]=new int[n+1][W+1];
        for(int i=0;i<dp.length;i++){ //0th col
            dp[i][0]=0;
        }
        for(int j=0;j<dp[0].length;j++){  //0th row
            dp[0][j]=0;
        } 

        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){
                int v=val[i-1];  //ith item val
                int w=wt[i-1];   //ith item wt
                if(w<=j){  //valid
                    int incProfit=v+dp[i-1][j-w];
                    int excProfit=dp[i-1][j];
                    dp[i][j]=Math.max(incProfit,excProfit);
                }
                else{
                int excProfit=dp[i-1][j];
                dp[i][j]=excProfit;
                }
            }
        }
        print(dp);
        return dp[n][W];

    }
    public static void main(String[] args) {

    int val[]={15,14,10,45,30};
    int wt[]={2,5,1,3,4};
    int W=7;


    System.out.println(knapsackTab(val, wt, W));
        
    }
    
}

*/



















/* 
 * Target Sum Subset:-
 * variation of 0-1 knapsack problem
 * number[]={4,2,7,1,3}
 * Target sum=10;

//Tc=(N*w)
public class part02 {
    public static boolean targetSum(int arr[],int sum){
        int n=arr.length;
        boolean dp[][]=new boolean[n+1][sum+1];
        //i=item && j=target sum
        for(int i=0;i<n+1;i++){ //0th col
            dp[i][0]=true;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                int v=arr[i-1];  
                if(v<=j && dp[i-1][j-v]==true){  
                    
                    dp[i][j]=true;
                }
                else if(dp[i-1][j]==true){
                dp[i][j]=true;
                }
            }
        }
       
        return dp[n][sum];
    }

    public static void main(String[] args) {
    int number[]={4,2,7,1,3};
    int Target=10;
    System.out.println(targetSum(number,Target));
        
    }
    
}

*/



  















//03.Unbounded knapsack

/*
 val[]={15,14,10,45,30}
 wt[]={2,5,1,3,4}
 W(total allowed weight)=7

 ans=Max profit
 */


public class part02 {

    public static void print(int dp[][]){
        for(int i=0;i<dp.length;i++){
            for(int j=0;j<dp[0].length;j++){
                 System.out.print(dp[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println();
    }
    public static int knapsackTab(int val[],int wt[],int W){
        int n=val.length;
        int dp[][]=new int[n+1][W+1];
        for(int i=0;i<dp.length;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<dp[0].length;j++){  
            dp[0][j]=0;
        }

        for(int i=1;i<n+1;i++){
            for(int j=1;j<W+1;j++){  
                if(wt[i-1] <= j){  
                    dp[i][j]=Math.max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                dp[i][j]=dp[i-1][j];
                
                }
            }
        }
        print(dp);
        return dp[n][W];

    }
    public static void main(String[] args) {

    int val[]={15,14,10,45,30};
    int wt[]={2,5,1,3,4};
    int W=7;


    System.out.println(knapsackTab(val, wt, W));
        
    }
    
}