#include<iostream>
#include<limits.h>
using namespace std;

int main()
{   
    int arr[] = {6,4,-1,9,12};
    int size = 5;

    int minNum = INT_MAX;

    for(int i=0; i<size; i++)
    {
        if(arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }

    cout << "Maximum number is : " << minNum << endl;
    return 0;
} 