/*Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/

#include <stdio.h>

int main(){
    int arr[]={2,10,10,100,2,10,11,2,11,2};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
            
        }
        
        
    }
    
    return 0;
}