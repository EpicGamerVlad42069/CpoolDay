#include <stdio.h>

int my_get_char_repeat(char to_find, const char *to_search){
    if (to_search == NULL){
        return 0;
    }
    int num = 0;
    int x = 0;
    for (x; to_search[x] != '\0'; x++){
        if (to_search[x] == to_find){
            num = num + 1;
            }
        }
    return num;
}