void welcome(void){
    puts("+---------------------------------------------------+");
    puts("+                       WELCOME                     +");
    puts("+---------------------------------------------------+");
}

void endl(void){
    puts("+---------------------------------------------------+");
}

int power(int base, int exponent){
    if (exponent != 0){
        return base * power(base, exponent - 1); 
    }
    else {
        return 1;
    }
}