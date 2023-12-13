#include <iostream>
using namespace std;

int findPeak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        /* code */
        int mid = (s + e) / 2;
        cout << "mid :" << mid << endl;
        if ((mid == 0 || (arr[mid] >= arr[mid - 1])) && (mid == n - 1 || (arr[mid + 1] <= arr[mid])))
        {
            return mid;
        }
        if (mid > 0 && (arr[mid - 1] >= arr[mid]))
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 20, 25, 30, 35, 50, 60};
    cout << findPeak(arr, 7) << endl;
}