#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class Vector{
    int *arr; //pointer
    int cs; //current size
    //int ds; default size
    int capacity;

    public:
    Vector(int ds=4)        //constructor passing a value so that the size of vector initially can contain 4 elements
    {
        capacity=4;
        arr=new int[capacity];          //dynamic allocation-->heap allocation through->new destroyed through->>delete
        cs=0;
    }
    void push_back(int data)
    {
        if(cs==capacity)
        {
            //expand current array by creating new array
            int *oldarr= arr;
            arr=new int[capacity<<1];

            for(int i=0;i<capacity;i++)
            {
                arr[i]=oldarr[i];
            }
            delete[] oldarr;
            capacity=capacity<<1;
        }
        arr[cs]=data;
        cs++;
    }
    void pop_back()
    {
        if(cs>0)
        {
            pop_back();
        }
    }
    void set_capacity(int c)  //setter
    {
        if(c>0)
        {   //resize to capacity
            capacity=c;
        }
    }
    int get_capacity()  //getter
    {
        return capacity;
    }
    int at(int i)
    {
        return arr[i];
    }

int size()
{
    return cs;
}
void operator!()
{
    for(int i=0;i<cs;i++)
    {
        arr[i] *=-1;
    }
}
void operator+(int no)
{
    for(int i=0;i<cs;i++)
    {
        arr[i]+=no;
    }
}
void operator()(string name)
{
    cout<<"having fun!!"<<name<<endl;
}
int& operator[](int i)      //return by reference
{
    return arr[i];
}
};


ostream& operator<<(ostream &a,Vector &v)       //so that we can print the vector for more than 1 time
{
    for(int i=0;i<v.size();i++)
    {
        a<<v[i]<<" ";        //overloading cout ka operator in this cout=a; are same and is done class k baar
    }
    return a;
}

istream& operator>>(istream &is, Vector &v)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    return is;
}
int main()
{
    Vector v,v1,v3;
    // for(int i=0;i<=5;i++)
    // {
    //     v.push_back(i*i);
    // }
    // !v;
    // v+3;
    
    cin>>v>>v1;
    v3=v+v1;
    cout<<v3;                 //cascading
    v("mohita");            //overloading brackets functional object functor
    // for(int i=0;i<v.size();i++)
    // {
    //     v[i]=7;
    //     cout<<v[i]<<",";
        //cout<<v.at(i)<<endl;

    
    
}