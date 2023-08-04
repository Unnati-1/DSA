#include<iostream>
using namespace std;
void insertionsort(int a[], int n)
{
    int key;
    for(int i=2;i<=n;i++)
    {
   key=a[i];
   int j=(i-1);
   while(j>0 && a[j]>key)
   {
    a[j+1]=a[j];
    j=j-1;
   }
   a[j+1]=key;
    }
}
int main()
{
     int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int a[n];
    cout << "enter element of array" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << "enter element " << i << endl;
        cin >> a[i];
    }
    insertionsort(a,n);
    cout<<"sorting element are"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"This program is made by 22CE082_unnati";
    return 0;
}
