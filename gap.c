#include<stdio.h>
#include<cs50.h>
int x;
int main(void)
{
    do
    {
         x = get_int("Height: ");

    }
    while(x<1 || x>8);



    for(int i=0; i<=x; i++){
         for (int s = 0; s < x - i; s++)
         {
            printf(" ");
         }
        for(int j=0; j<i; j++){

            printf("#");

        }

        printf("  ");

        for(int k=0; k<i; k++){

            printf("#");

        }
        printf("  ");
        printf("\n");
    }
}