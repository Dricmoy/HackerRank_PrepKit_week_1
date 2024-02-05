void miniMaxSum(int arr_count, int* arr) {
    long int sum =0, min, max;
    
    for (int i =0; i < arr_count; i++){
        for (int j = 0; j < arr_count; j++){
            if (j != i){
                sum += *(arr + j);
            }
            if (i == 0){
                min = sum;
                max = sum;
            }
        }
    
        if (max < sum){
            max = sum;
        }else if (min > sum){
            min = sum;
        }
        sum = 0;
    }
    printf("%ld %ld", min, max);
}
