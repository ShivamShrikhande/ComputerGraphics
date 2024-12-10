Lab Assignment 5
Write a function template selection sort. Write a program that inputs, sorts and outputs an integer array and a float array.


#include<iostream>
using namespace std;

int n;
template<class f>
void sel(f A[10])
{
    int i,j,min;
    f temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            min=j;
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<"\nSorted array:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
}
int main()
{
    int A[10];
    float B[10];
    int i;
   
    cout<<"\nEnter total no of int elements:";
    cin>>n;
    cout<<"\nEnter int elements:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sel<int>(A);
   
    cout<<"\nEnter total no of float elements:";
    cin>>n;
    cout<<"\nEnter float elements:";
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    sel<float>(B);
}

































