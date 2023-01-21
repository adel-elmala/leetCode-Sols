//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int n1 = m-l+1;
         int n2 = r-m;
         int l_arr[n1];
         int r_arr[n2];
         for(int i=0; i<n1;i++)
         {
             l_arr[i]=arr[l+i];
         }
         for(int i=0; i<n2;i++)
         {
             r_arr[i]=arr[m+1+i];
         }
         
         int k = l;
         int i=0;
         int j=0;
         while(i<n1&&j<n2)
         {
             if(l_arr[i]<=r_arr[j])
             {
                arr[k]=l_arr[i];
                i++;
                 
             }
            else
            {
                arr[k]=r_arr[j];
                j++;
                 
             }
             k++;
         }
         while(i<n1)
         {
             arr[k] = l_arr[i];
             i++;k++;
         }
        while(j<n2)
         {
             arr[k] = r_arr[j];
             j++;k++;
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r)
        {
            int m = (l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
            
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends