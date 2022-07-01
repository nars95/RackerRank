
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(int candles_count, int* candles) {
    int i, max, repetition;
    max = repetition = 0;
    // find out max element in array
    for ( i = 0; i < candles_count; i++){
        if ( i ){
            if ( candles[i] > max ){
                max = candles[i];
            }
        }
        else{
            max = candles[i];
        }
    }
    // count hom many times this element
    for ( i = 0 ;  i < candles_count; i++){
        if ( max == candles[i] ){
            repetition++;
        }
    }
    return repetition;
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
    int *array = (int*) malloc(sizeof(int)*n);
    readArray(n, array);
    printf("%d\n",birthdayCakeCandles(n, array));
}