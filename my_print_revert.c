void print_char();

void my_print_revert(char *toRevert){

    int x=0;
    for (x; toRevert[x] != '\0'; x++);

    for (x; x != -1; x--){
        int a= toRevert[x];
        print_char(a);
    }
}


int main(void){
    my_print_revert("codingclub");
    return 0;
}