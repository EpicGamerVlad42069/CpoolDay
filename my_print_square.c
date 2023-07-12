void print_char();

void my_print_square(int size, char c){
    int i;
    int j;
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            print_char(c);
        }
        print_char('\n');
    }
}