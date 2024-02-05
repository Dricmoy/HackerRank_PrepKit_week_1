void plusMinus(int arr_count, int* arr) {
    double plus = 0, neg = 0;
    for (int i =0; i < arr_count; i++){
        if (*(arr + i) > 0) {
            plus+=1;
        }else if (*(arr + i) < 0) {
            neg+=1;
        }
    }
    double zero = arr_count -(plus + neg);
    
    printf("%lf\n%lf\n%lf", (plus/arr_count), (neg/arr_count), (zero/arr_count));
}
