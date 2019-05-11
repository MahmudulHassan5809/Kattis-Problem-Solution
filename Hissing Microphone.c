#include <stdio.h>
#include <string.h>

int main(){

    char str[31];
    char c1,c2;
    int i,flag=0;
    scanf("%s",str);

    for (i = 0; i < strlen(str); i++){
        c1 = str[i];
        c2 = str[i+1];
        if(c1 == 's' && c2 == 's'){
            printf("hiss\n");
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("no hiss\n");
    }

    return  0;

}
