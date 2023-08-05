#include <iostream>
using namespace std;
int main()
{
    int i, j, n, minIndex,temp,pass;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (pass= 0; pass < n - 1; pass++)
    {
        minIndex = pass;
        for (j = pass+ 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != pass)
        {
            temp=arr[pass];
            arr[pass]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
    cout<<endl;

    for (i= 0; i < n; i++)
    {
        cout << arr[i]<<" "<<endl;
    }
    cout<<"this program is made by 22CE082_unnati";
}
