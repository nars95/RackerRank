#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    *result_count = 2;
    int *array = (int*) malloc(sizeof(int)*2);
    int scorea, scoreb, i;
    scorea = 0;
    scoreb = 0;
    for ( i = 0 ;  i < a_count; i++){
        if ( a [i] > b[i] ){
            scorea++;
        }
        else if ( a[i] < b[i] ){
            scoreb++;
        }
    }
    array[0] = scorea;
    array[1] = scoreb;
    return array;
}
void readArray(int n, int *array){
    int i = 0;
    for (i; i < n; i++){
        scanf("%d", &array[i]);
    }
}
void showArray(int n, int *array){
    int i = 0;
    for ( i ; i < n ; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main(){
    int *a, *b;
    int num, result;
    scanf("%d%*c",&num);
    a = (int*) malloc(sizeof(int)*num);
    b = (int*) malloc(sizeof(int)*num);
    readArray(num,a);
    readArray(num,b);
    showArray(result, compareTriplets(num, a, num, b, &result));
}