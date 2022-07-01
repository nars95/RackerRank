#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */
int sumDiagonals( int dimension, int matriz[dimension][dimension]){
    int i, j, primary, secondary, result;
    j = dimension - 1;
    primary = secondary = 0;
    for ( i = 0; i < dimension; i++){
        primary += matriz[i][i];
    }
    for ( i = 0; i < dimension; i++){
        secondary += matriz[i][j];
        j--;
    }
    result = primary - secondary;
    return abs(result);
}
void readMatriz( int dimension, int mat[dimension][dimension]){
    int i,j;
    for ( i = 0; i < dimension; i++){
        for ( j = 0; j < dimension; j++){
             scanf("%d%*c", &mat[i][j]);
        }
    }
}
int main(){
    int dimension;
    scanf("%d%*c", &dimension);
    int mat[dimension][dimension];
    readMatriz(dimension, mat);
    printf("%d\n",  sumDiagonals(dimension, mat));


}