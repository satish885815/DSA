#include <iostream>
using namespace std;
/**
 * Question:- We have given sorted roated array and element we have find this element
 * is persent in the array return the index or if it is not present return -1;
 */
int searchElement(int arr[], int x, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[s] < arr[mid])
        {
            if (x >= arr[s] && x < arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (x > arr[mid] && x <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 40, 60, 5, 8};
    cout << searchElement(arr, 8, 6) << endl;
}