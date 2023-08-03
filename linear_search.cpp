#include<iostream>
using namespace std;
int linearsearch(int a[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;

    }
   return -1;
}
int main()
{
    int n,key;
    cout<<"Enter the value of n ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    int ans;
    ans=linearsearch(a,n,key);
    cout<<"Index of key element :"<<ans<<endl;
    cout<<"This Program is made by 22CE082_unnati";
    return 0;
}
