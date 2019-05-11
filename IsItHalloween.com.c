#include <stdio.h>

int main() {
    char str[3];
    char x, y, z;

    int d;

    scanf("%s %d",str,&d);

    x = str[0];
    y = str[1];
    z = str[2];

    if ((x == 'D' && y == 'E' && z == 'C' && d == 25) ||
        (x == 'O' && y == 'C' && z == 'T' && d == 31)) {
        printf("yup\n");
        return 0;
    }

    printf("nope\n");

    return 0;

}
