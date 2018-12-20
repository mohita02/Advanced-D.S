#include<iostream>
using namespace std;
void duplicates(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {

        }
        else
        {
            cout<<a[i]<<"\t";
        }
    }
}
int main()
{
    int size;
    cout<<"eneter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    duplicates(arr,size);
    display(arr,size);
}