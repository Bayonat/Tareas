// David Alonso Bayona Timana
//8968801

#include <stdio.h>
#include <stdlib.h>
#define MAX 3001

int compare_list(int absolutesDifference[], int differenceCheck[], int n) {
    int j=0;
    for (int i = 0; i < n-1; i++) {
        if (absolutesDifference[i] != differenceCheck[i]) {
            j++;
        }
    }
    if ( j!=0){
        printf("Not Jolly");
    }
    if ( j==0){
        printf("Jolly");
    }

    return 0;

}

int main() {
    int numbers[MAX];
    int n, i;

    // n of elements
    scanf("%d", &n);

    int differenceCheck[n];
    int absolutesDifference[n];
    
    // Elements
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n;  i++){
        differenceCheck[i] = n-i-1;
    }
    
    for (i = 0; i < n-1; i++) {
        absolutesDifference[i] = abs(numbers[i+1] - numbers[i]);
    }
    
    compare_list(absolutesDifference,differenceCheck,n);

    return 0;
}

