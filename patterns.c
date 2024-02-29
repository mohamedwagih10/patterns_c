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
    printf("========================================\n");
    ////// pyramid
    int line , spaces,star,SIZE=5;
    for ( line = 0; line <= SIZE; line++)
    {
        for ( spaces = 1; spaces <=SIZE-line; spaces++)
        {
            printf(" ");
        }
        for ( star = 1; star <= line*2-1; star++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    printf("========================================\n");
    // inverse pyramid
    int LINE,SPACE,STAR,SIZE2=5;
    for ( LINE = SIZE2; LINE >=1 ; LINE--)
    {
        for ( SPACE = 1; SPACE <=SIZE2-LINE; SPACE++)
        {
            printf(" ");
        }
        for ( STAR = 1; STAR <= LINE*2-1; STAR++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    printf("========================================\n");
      /// the letter N
      size=6;
      int col;
      for ( line = 1; line <=size; line++)
      {
        for ( col = 1; col <= size; col++)
        {
            if (col==1||col==size||line==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
      }
      printf("========================================\n");
      // letter X
      size=8;
      for ( line = 1; line <=size; line++)
      {
        for ( col = 1; col <= size; col++)
        {
            if (line+col-1==size||line==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
      }
      
       }