#include <cs50.h>
#include <stdio.h>

int main(void)
    
{
     int Height=get_int("Height:");
    while(Height<1||Height>8){
        Height=get_int("Height: ");
    }
    for(int i=1;i<=Height;i++){
        for(int j=1;j<=Height-i;j++){
            printf(" ");
        }
        for(int k=Height-i;k<Height;k++){
            printf("#");
        }printf("\n");
    }
}
   
