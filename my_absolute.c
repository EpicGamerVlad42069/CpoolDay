int my_absolute(int number){
    if (number < 0){
        number = number * -1;
    }
    return number;
}




#include <stdio.h>
int main(void){
    printf("%d\n", my_absolute(5));
    return 0;
}