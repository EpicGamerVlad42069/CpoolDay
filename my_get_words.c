void print_char();

void my_get_words(char *sentance){
    int x;
    int entr = 1;
    for (x; sentance[x] != '\0'; x++){
        if (sentance[x] == ' '){
            if (entr == 1){
                print_char('\n');
                entr = 0;
            }
        }
        else{
            print_char(sentance[x]);
            entr = 1;
        }
    }
}





#include <string.h>
int main(void)
{
char str[] = "bienvenue à epite ch";
my_get_words(str);
return 0;
}