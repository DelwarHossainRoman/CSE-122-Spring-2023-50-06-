#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter how many numbers ";
    cin>>number;
    int arr[number];
    for (int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for (int i=3;i<number;i++)
        {
        arr[i]= arr[i-3];
        }
        for (int i =0;i<number;i++)
        {
            cout<<arr[i];

        }

    }



