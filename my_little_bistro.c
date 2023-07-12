int my_little_bistro(int value1, char op, int value2){
    int result = 0;
    if (op = '+'){
        result = value1 + value2;
    }
    else if (op = '-'){
        result = value1 - value2;
    }
    else if (op = '*'){
        result = value1 * value2;
    }
    else if (op = '/'){
        result = value1 / value2;
    }
    else if (op = '%'){
        result = value1 % value2;
    }
    return result;
}