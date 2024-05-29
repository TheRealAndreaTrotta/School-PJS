void zero_matrix(int SZ, int matrix[][SZ]){
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            matrix[i][j] = 0;
        }
    }
}

void print_matrix(int SZ, int matrix[][SZ]){
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            if (matrix[i][j] == 1) {
                printf("\033[1;31m%d \033[0m", matrix[i][j]);
            }
            else {
                printf("%d ", matrix[i][j]);
            }
        }
        puts("");
    }
}

void oned_matrix(int SZ, int matrix[][SZ]){
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            if(i == j){
                matrix[i][j] = 1;
            }
        }
    }
}

void onedd_matrix(int SZ, int matrix[][SZ]){
    for (int i = 0; i < SZ; i++){
        for (int j = 0; j < SZ; j++) {
            if(i == j || j == SZ - i - 1){
                matrix[i][j] = 1;
            }
        }
    }
}