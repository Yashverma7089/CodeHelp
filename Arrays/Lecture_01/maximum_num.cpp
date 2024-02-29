#include<iostream>
#include<limits.h>
using namespace std;

int main()
{   
    int arr[] = {6,4,0,9,12};
    int size = 5;

    int maxNum = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    cout << "Maximum number is : " << maxNum << endl;
    return 0;
} 