#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// function that sum an array of inters;
int sumArray( int *array, int length){
    int i, sum;
    i = 0;
    sum = 0;
    for ( i; i < length; i++){
       sum += array[i];
    }
    return sum;
}
// function that read an array of inters;
void readArray( int *array, unsigned length ){
    int i;
    for ( i = 0; i < length; i++){
        scanf("%d%*c", &array[i]);
    }
}
// function that show elements of array
void showArray(int *array, int length){
    int i = 0;
    for ( i; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main(){
    int *array;
    int num;
    scanf("%d%*c", &num);
    array =  (int*)  malloc(sizeof(int)*num);
    readArray(array,num);
    showArray(array, num);
    printf("%d\n", sumArray(array, num));
}