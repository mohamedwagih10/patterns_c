#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(){
     for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++){
                printf("%i\t",j);
            }
            printf("\n");
        }
        printf("========================================\n");
        for(int i=1; i<=5; i++){
            for(int j=5; j>=i; j--){
                printf("%i\t",j);
            }
            printf("\n");
        }
        printf("========================================\n");
        for(int i=1; i<=5; i++){
            for(int k=1; k<=(5-i); k++){
                // spaces
                printf(" ");
            }
            for(int j=i; j>=1; j--){
                printf("%i",j);
            }
            printf("\n");
        } 
        printf("========================================\n");
        for(int i=0; i<5; i++){
            for(int k=5; k>(5-i); k--){
                // spaces
                printf(" ");
            }
            for(int j=1; j<=(5-i); j++){
                 printf("%i",j);
            }
            printf("\n");
        }
        printf("========================================\n");
     
     int size = 4;

for(int i=1; i<=2*size-1; i++){

for (int j=1;j<=2*size-1; j++){
    abs(i-size)+abs(j-size)<=size-1?printf("%i",size-(abs(i-size)+abs(j-size))):printf(" ");
}
printf("\n");
}
       }