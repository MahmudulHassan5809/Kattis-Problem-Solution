#include <stdio.h>


int main() {

    int g,s,c,v;

    scanf("%d %d %d",&g,&s,&c);


    v = 3*g + 2*s + c;

    if(v >= 8){
        printf("Province or ");
    }else if(v >= 5){
        printf("Duchy  or ");
    }else if(v >= 2){
        printf("Estate or ");
    }if(v >= 6){
        printf("Gold");
    }else if(v >= 3){
        printf("Silver");
    }else{
        printf("Copper");
    }



    return  0;
}
