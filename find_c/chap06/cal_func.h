//왼쪽: 받는값 오른쪽: 리턴

int f_plus(int a, int b);
int f_minus(int a, int b);
int f_multiply(int a, int b);
float f_divide(int a, int b);

int f_plus(int a, int b){
    int result;
    result=a+b;
    return result;
}

int f_minus(int a, int b){
    int result;
    result=a-b;
    return result;
}

int f_multiply(int a, int b){
    int result;
    result=a*b;
    return result;
}

float f_divide(int a, int b){
    float result;
    result=(float)a/(float)b;
    return result;
}
