#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseArray(int n, int *array, int *reverse){
    int i, j;
    i = 0;
    j = (n - 1);
    for ( i ; i < n; i ++){
        reverse[i] = array[j];
        j--;
    }
}
int * reverseAnother( int num, int *array){
    int i, j;
    int *reverse = (int*) malloc(sizeof(int)*num);
    j = (num -1);
    for ( i = 0; i < num; i ++){
        reverse[i] = array[j];
        j--;
    }
    return reverse; 
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
    int *array, *reverse;
    int n;
    scanf("%d%*c", &n);
    array = (int*) malloc(sizeof(int)*n);
    //reverse = (int*) malloc(sizeof(int)*n);
    readArray(n, array);
    //reverseArray(n, array, reverse);
    showArray(n,reverseAnother(n, array));
}