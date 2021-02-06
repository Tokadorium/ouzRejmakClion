#include <stdio.h>

int main() {

    char a[1000]={0};
    int i=0, counter=0;

    printf("Podaj tekst...\n");

    while (1){
        scanf("%c", &a[i]);
        if ((a[i]=='\n')||i>1000){
            break;
        }
        i++;
    }

    for (int j = 0; j <= i; ++j) {
        if ((a[j]>=65 && a[j]<=90) || (a[j]>=97 && a[j]<=122)){
            if (!((a[j+1]>=65 && a[j+1]<=90) || (a[j+1]>=97 && a[j+1]<=122))){
                counter++;
            }
        }
    }

    printf("%d", counter);

    return 0;
}