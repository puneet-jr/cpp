#include <stdio.h>
#include <stdlib.h>

void removeDuplicates(int arr[], int len) {
    for (int i=0; i<len; i++) {
        for (int j=i+1; j<len; j++) {
            if (arr[i]==arr[j]) {
                for (int k=j; k<len; k++) {
                    arr[k]=arr[k+1];
                }
                j--;
                len--;
            }
        }
    }

    for (int i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int len=9;
    int arr[] = {0,3,1,2,3,3,5,17,7};
    removeDuplicates(arr, len);
    return 0;
}