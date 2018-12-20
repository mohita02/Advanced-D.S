#include<iostream>
using namespace std;
int maxEvenSubAarray(int arr[],int n)
{
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            ans=max(ans,count);
            count=0;
        }
    }
    ans=max(ans,count);
    return ans;
}
int main()
{
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    for(int j=0;j<size;j++)
    {
        cin>>a[j];
    }
    cout<<maxEvenSubAarray(a,size)<<endl;
}