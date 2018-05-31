int Solution::isPalindrome(int A) {

    int reverse=0;
    int original=A;
    if(A<0){
        return 0;
    }
    int len=0;
    while(A>0){
        int rem = A%10;
        reverse = reverse*10 + rem;
        A = A/10;
        len++;
    }

    int num1 = original;
    int num2 = reverse;

    while(len>0){
        int num12 = num1%10;
        int num21 = num2%10;
       // cout<<num1<<" "<<num2<<" ";
        if(num12!=num21){
            return 0;
        }
        num1 = num1/10;
        num2 = num2/10;
        len--;
    }

    return 1;
}
