// Find the number of rotations in a circularly sorted array

#include<bits/stdc++.h>
using namespace std;


int findRotationSortedArray(int a[],int n){
   int low=0,heigh=n-1;
   while(low<=heigh){
    if(a[low]<=a[heigh]){
        return low;
    }
    int mid=(low+heigh)/2;
    if(a[mid]<=a[mid+1] && a[mid]<=a[mid-1]){
        return mid;
    }
    else if(a[mid]<=a[heigh]){
        heigh=mid-1;
    }else if(a[mid]>=a[low]){
        low=mid+1;
    }
   }
   return -1;
}

int main(){
     int nums[] = { 8, 9, 10, 2, 5, 6 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int count=findRotationSortedArray(nums,n);
    cout<<"Rotated time : "<<count<<endl;
    return 0;
}