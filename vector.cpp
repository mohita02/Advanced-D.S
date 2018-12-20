#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int> v;

    //inserting the values in vector
    for(int i=0;i<=5;i++)
    {
        v.push_back(i*i);
    }
    //printing through for loop
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    //printing through for each loop
    for(int x:v)
    {
        cout<<x<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
}