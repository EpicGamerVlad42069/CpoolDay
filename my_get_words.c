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