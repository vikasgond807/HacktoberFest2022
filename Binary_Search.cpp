#include<iostream>
#include<stdlib.h>
using namespace std;

int binarysearch(int arr[] , int n , int k){
    int start = 0;
    int end = n-1;
    int mid = start+end-start/2;

    while(start<end){

    
        if(arr[mid]==k){
            return mid ;
        }
        else if(k<arr[mid]){
            end = mid-1;
        }

        else{
            start = mid+1;
        }
        

        

        mid = start + (end-start)/2;
    }
    return -1;

}


int main()
{
    int array[10] = { 1 ,2 , 3, 4, 5 , 6, 7, 8,9,10};
    int evenIndex = binarysearch(array, 10, 6);

    cout << " Index of 6 is " << evenIndex << endl;
    return 0;

}
