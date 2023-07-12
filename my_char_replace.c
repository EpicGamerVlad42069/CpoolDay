void print_char();

char my_replace_char(char *origin, char toFind, char toReplace){
    int x=0;
    for (x; origin[x] != '\0'; x++){
        if (origin[x] == toFind){
            print_char(toReplace);
        }
        else{
            print_char(origin[x]);
        }
    // int y;
    // for (int y = 0; y < x; y++){
    //     }
    }
}