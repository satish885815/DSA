/**
 * Question:- we have given a array we have to find the peak element means if the element greater then it's neighbours
 */
#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            return arr[i];
        }
    }
    throw;
}

int main()
{
    int arr[] = {10, 11, 8, 20, 10};
    cout << findPeak(arr, 5) << endl;
    return 0;
}