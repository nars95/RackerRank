#include<stdio.h>
#include<stdlib.h>
#include<string.h>




void showArray(int n, char *array){
    int i = 0;
    for ( i ; i < n ; i++){
        printf("%c",array[i]);
    }
    printf("\n");
}
/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    int i, j;
    char array[n];
    // creating an array with n spaces;
    for ( i = 0; i < n; i ++){
        array[i] = ' ';
    }
    j = n - 1;
    for ( i = 0; i < n; i++){
        array[j] = '#';
        showArray(n,array);
        j--;
    }
}
int main(){
    int n;
    scanf("%d%*c",&n);
    staircase(n);
}
