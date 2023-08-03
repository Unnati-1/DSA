#include<iostream>
using namespace std;
int main()
{
    int n,j=0;
    cout<<"Enter the value:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int ex=0;
        for( j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                ex++;
            }
        }

        if(ex==0)
            break;
    }
     for(j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<"This program is made by 22CE082_unnati";
        return 0;

}
