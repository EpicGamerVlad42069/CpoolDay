void print_char();

char *my_replace_char(char *origin, char toFind, char toReplace){
    int x=0;
    for (x; origin[x] != '\0'; x++);
    int y;
    for (y = 0; y < x; y++){
        if (origin[y] == toFind){
            print_char(toReplace);
        }
        else{
            print_char(origin[y]);
        }
    }
}




#include <stdio.h>
int main(int ac, char **av){
    char str[] = "bienvenue à epitech !";
    printf("%s\n", my_replace_char(str, 'e', 'a'));
    return 0;
}