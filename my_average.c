float my_average(int *grades, int count){
    float total = 0;
    int i;
    for (i = 0; i < count; i++){
        total = total + grades[i];
    }
    total = total / count;
    return total;

}