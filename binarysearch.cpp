#include<iostream>
using namespace std;
int binary(int a[],int l,int h,int key)
{
   while(l<=h)
   {
       int mid=(l+h)/2;
       if(a[mid]==key)
        return mid;
       else if(a[mid]<key)
        l=mid+1;
       else
        h=mid-1;


   }


}
int main()
{
    int l=0,h,n,mid,ans,key;

    cout<<"enter the value of n";
    cin>>n;
     h=n-1;
    mid=(l+h)/2;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of key";
    cin>>key;
    ans = binary(a,l,h,key);
    cout<<"Index of key element :"<< ans<<endl;
    cout<<"This program is made by 22CE082_unnati";
    return 0;
}
