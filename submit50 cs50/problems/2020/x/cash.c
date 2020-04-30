#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void){
    float a;
    int flag=0;
    do{if(flag==1){
    printf("foo\n");
    }
     a=get_float("Change owed: ");
     
     flag=1;
    }while(a<=0);
    int cents=round(a*100);
    int cnt=0;
    while(cents/25>=1){
       cnt++;
       cents-=25;
    }
    while(cents/10>=1){
        cnt++;
        cents-=10;
    }
    while(cents/5>=1){
        cnt++;
        cents-=5;
    }
    if(cents<5){
        cnt=cnt+cents;
    }
    printf("%d\n",cnt);
 
    
}
