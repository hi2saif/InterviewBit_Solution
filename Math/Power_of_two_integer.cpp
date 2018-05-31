int Solution::isPower(int A) {

    if(A<INT_MIN || A>INT_MAX)
        return false;
    int num=0;
    if(A==1 || A==0){
        return false;
    }
    for(int i=2;i<=sqrt(A);i++){
        num=A;
        while(1){
            if(num==1){
                return true;
            }
            if(num%i==0)
                num=num/i;
            else
                break;
        }

    }
    return false;
}
