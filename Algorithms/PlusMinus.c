#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void plusMinus(int arr_count, int* arr) {
    int i;
    float positive, negative, zero;
    positive = negative = zero = 0.0;
    for ( i = 0; i < arr_count; i++){
        if ( arr[i]  > 0 ){
            positive ++;
        }
        else if ( arr[i] < 0 ){
            negative ++;
        }
        else{
            zero++;
        }
    }
    printf("%.6f\n", positive / arr_count);
    printf("%.6f\n", negative / arr_count);
    printf("%.6f\n", zero / arr_count);
}
void readArray(int n, int *array){
    int i = 0;
    for (i; i < n; i++){
        scanf("%d", &array[i]);
    }
}

int main(){
    int n;
    scanf("%d%*c", &n);
    int array[n];
    readArray(n, array);
    plusMinus(n, array);
}