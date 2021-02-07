#include <stdio.h>
#include <time.h>
#include <stdlib.h>

const int rows=4, cols=4;

int main() {

    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int matrixC[rows][cols];

//    info
//    printf("boze\n");

//    random data
    srand(NULL);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrixA[i][j]=rand()%100;
            matrixB[i][j]=rand()%100;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i==j){
                matrixC[i][j]=1;
            }
            else{
                matrixC[i][j]=0;
            }
        }
    }

//    user input
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if(scanf("%d", &matrix[i][j])!=1){
//                printf("Incorrect input");
//                return 1;
//            }
//        }
//    }

//    swap diagonal numbers
//    int temp;
//    int colIndex=cols-1;
//    for (int i = 0; i < rows; ++i) {
//        temp=matrix[i][i];
//        matrix[i][i]=matrix[i][colIndex];
//        matrix[i][colIndex]=temp;
//        colIndex--;
//    }

//    print matrix
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrixA[i][j]);
            if (j!=0 && j%(rows-1)==0){
                printf("\n");
            }
        }
    }
    printf("\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrixB[i][j]);
            if (j!=0 && j%(rows-1)==0){
                printf("\n");
            }
        }
    }
    printf("\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrixC[i][j]);
            if (j!=0 && j%(rows-1)==0){
                printf("\n");
            }
        }
    }

    return 0;
}