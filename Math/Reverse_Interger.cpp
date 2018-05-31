int Solution::reverse(int A) {


    long long int reverse=0;
    long long int original=A;
    long long int len=0;
    long long int prev_num=0;
    if(A<0){
        A=(-1)*A;
        while(A!=0){
        int rem = A%10;
        reverse = reverse*10 + rem;
        A = A/10;

    }
    if(reverse<INT_MIN || reverse>INT_MAX){
        return 0;
    }else
        return -1*(reverse);
    }else{
    while(A!=0){
        int rem = A%10;
        reverse = reverse*10 + rem;
        A = A/10;
    }
    if(reverse<INT_MIN || reverse>INT_MAX){
        return 0;
    }else
        return reverse;

    }
}
