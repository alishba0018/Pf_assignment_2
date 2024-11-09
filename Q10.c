#include <stdio.h>
void pattern(int n)
{
 int j,i,space;
 //printf("enter n(an odd number): ");
 //scanf("%d",&n);
 for(i=0;i<n;i++){
     if(i < n-1){
            
            for (j = 0; j < 2 * (n-1) - i; j++) {
                printf(" ");
            }
            printf("*");
            if (i != 0) {
                space =( 2 * i )- 1;
                for (j = 0; j < space; j++) {
                    printf(" ");
                }
                printf("*");
            }
        }
        //printf("\n");
        else {
         for (int k = 0; k < n; k++) {
                printf("*");
            }
            space = (2 * i) - 1;
            for (int j = 0; j < space; j++) {
                printf(" ");
            }

            for (int k = 0; k < n; k++) {
                printf("*");
            }
  }
  printf("\n");
 }
}

void Upper(int n) {
    int mid = 4 * n - 7;//space in between
    int i, j, k;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < i + 1; j++) {
            printf(" ");
        }
        printf("*");

        for (k = 0; k < mid; k++) {
            printf(" ");
        }
        mid -= 2;

        printf("*\n");
    }
}

void Lower(int n) {
    int rows = 2 * n - 2;
    int temp= 1;
    int i, j, k;
    int spaces;//initial

    for (i = n - 1; i < rows; i++) {
        spaces = 2 * n - 3 - i;

        for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        printf("*");

        for (k = 0; k < spaces; k++) {
            printf(" ");
        }
        if (i == rows - 1) {
            printf(" ");
        } else {
            printf("*");
        }
        for (k = 0; k < temp; k++) {
            printf(" ");
        }
        temp += 4;
        if (i == rows - 1) {
            printf(" ");
        } else {
            printf("*");
        }
        for (int k = 0; k < spaces; k++) {
            printf(" ");
        }

        printf("*\n");
    }
}


int main(){
 int n;
 printf("enter n(an odd number): ");
 scanf("%d",&n);
 pattern(n);
 Upper(n);
 Lower(n);
 return 0;
}
