#include<iostream>
using namespace std;

/*  Maximum sum of sub_array by brute force algorithm
    Taking O(n^2) time complexity   */

int fun(int a[],int n)
{
    int sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        {
            s+=a[j];
            if(s>sum)
                sum=s;
        }
    }
    return sum;
}

/*  Maximum sum of sub_array by Dynamic programming
    Taking O(n) time complexity   */

int fun1(int a[],int n)
{
    if(n==1)
        return a[0];
    int b[n];
    int sum=INT_MIN;
    b[0]=a[0];
    if(sum<b[0])
        sum=b[0];
    for(int i=1;i<n;i++)
    {
        b[i]=max(a[i],b[i-1]+a[i]);
        if(sum<b[i])
            sum=b[i];
    }
    return sum;
}



int main()
{
    int a[]={-1,-4,2,-1,4,-2,5,-1,-3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Maximum subarray sum by brute force: "<<fun(a,n)<<endl;
    cout<<"Maximum subarray sum by dynamic approach: "<<fun1(a,n);
    return 0;
}
