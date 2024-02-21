/*Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1). */
#include <stdio.h>

int main(){
    int arr[] = {12, 13, 1, 10, 34, 1},i;
    int first,second,third=arr[0];

    for(i=0;i<sizeof(arr)/sizeof(arr[0]) ;i++){  //sizeof(arr) returns size of entire array in bytes.
        if( arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if( arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third){
            third = arr[i];
        }
    }
    printf("Three largest elements are: %d %d %d",first,second,third);

    return 0;
}