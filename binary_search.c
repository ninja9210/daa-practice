
#include <stdio.h>
int main(void)
{
    int low=0, high=9, found=-1;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x = 30;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x){
            found=i;
            break;
        }

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    if(found!=-1){
      printf("Element found at index : %d",found);
    }else{
      printf("Element not found");
    }

}
