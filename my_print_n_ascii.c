void print_char();
void my_print_n_ascii(int howMany){
    howMany = howMany + 33;
    int ind;
    for (ind = 33; ind < howMany; ++ind){
        print_char(ind);
    }
}