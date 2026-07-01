#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {\
    int count =0;
    float a[100];
    int i, n;
    printf("Enter Number of Elements: "); 
    scanf("%d", &n);
    srand(time(NULL));
    for(i=0; i<n; i++) {
        a[i]= (float)rand()/10000;
        printf("a[%d] : %.2f\n", i, a[i]);
        if(a[i] > 1.5) {
            count++;
        }
    }
    printf("Count of numbers greater than 1.5: %d\n", count);
    
    return 0;
}