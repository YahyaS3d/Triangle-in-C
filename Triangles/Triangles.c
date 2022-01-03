#include <stdio.h>
//Q1
int main()
{
   char first;
   char second;
   int num;
   printf("please enter the first character:");
   scanf("%c",&first);

   printf("Please enter the second character:");
   scanf(" %c", &second);

   printf("Please enter the edge size:");
   scanf("%d",&num);
   int col=num-1;
   int i,j,l;
   for(i=1;i<=num;i++){
    for(j=1;j<=col+1;j++){
        printf("%c", first);
    }
    col--;
    for(l=1;l<=i;l++){
        printf("%c",second);
    }
    printf("\n");

   }



}
