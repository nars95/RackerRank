
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(int arr_count, int* arr) {
    int i, j;
    long sum, min, max;
    sum = 0;
    long array[arr_count];
    // one of way to solve this problem
    for ( i = 0; i < arr_count; i++){
        for ( j = 0; j < arr_count; j++){
            if ( j != i){
                sum += arr[j];
            }
        }
        array[i] = sum;
        sum = 0;
    }
    // find out min and max of some in array
    for ( i = 0; i < arr_count; i++){
        if ( i ){
            if ( array[i] < min ){
                min = array[i];
            }
            if ( array[i] > max ){
                max = array[i];
            }
        }
        else{
            min = max = array[i];
        }
    }
    printf("%lu %lu\n", min, max);
}
void readArray(int n, int *array){
    int i = 0;
    for (i; i < n; i++){
        scanf("%d", &array[i]);
    }
}

int main(){
    int *array = (int*) malloc(sizeof(int)*5);
    readArray(5, array);
    miniMaxSum(5, array);
}