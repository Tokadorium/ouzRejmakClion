#include <stdio.h>

int read_vector(int vec[], int size, int stop_value){
    if(scanf("%d", vec)!=1){
        return 1;
    }
    if(*vec==stop_value){
        return 150-size;
    }
    return read_vector(vec+1, size-1, stop_value);
}

int binary_search(const int arr[], int l, int r, int x){
    int c=(l+r)/2;
    if(l==r){
        if(*(arr+l)==x){
            return l;
        }
        else{
            return -1;
        }
    }
    else {
        if (x <= *(arr + c)) {
            return binary_search(arr, l, c, x);
        } else {
            return binary_search(arr, c + 1, r, x);
        }
    }
}

int checkData(const int arr[], int size){
    if(size<=1){
        return 0;
    }
    if(*arr<*(arr+1)){
        return checkData(arr+1, size-1);
    }
    else{
        return 1;
    }
}

int main(){
    int arr[150];
    int x;
    printf("Input array: ");
    int counter=read_vector(arr, 150, 0);
    if(counter==1){
        printf("Not enough data available");
        return 3;
    }
    if(counter==149){
        printf("Incorrect input");
        return 1;
    }
//    for (int i = 0; i < counter; ++i) {
//        printf("%d ", arr[i]);
//    }
    printf("\n%d", counter);
    fseek(stdin,0,SEEK_END);
    printf("Input value to search: ");
    if(scanf("%d", &x)!=1){
        printf("Incorrect input");
        return 1;
    }
    if(checkData(arr, counter)==1){
        printf("Incorrect input data");
        return 2;
    }
    printf("%d", binary_search(arr, 0, counter-1, x));
    return 0;
}