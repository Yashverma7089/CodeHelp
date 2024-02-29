#include<iostream>
using namespace std;

int main()
{
    int arr[] = {0,0,1,1,0,1,0,1,0};
    int size = 9;

    int numZero = 0, numOne = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i] == 0)
            numZero++;

        if(arr[i] == 1)
            numOne++;
    }

    cout << "Total number of 0s : " << numZero << endl;
    cout << "Total number of 1s : " << numOne << endl;
    return 0;
}