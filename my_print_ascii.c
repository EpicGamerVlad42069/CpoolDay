//0-127
void print_char();

void my_print_ascii(void){
    int ind;
    for (ind = 33; ind < 127; ++ind){
        print_char(ind);
    }
}