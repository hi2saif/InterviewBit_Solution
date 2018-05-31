int Solution::trailingZeroes(int A) {

int answer=0;
int i=1;
int num=0;
int result=A;
    while(result!=0){
        num = pow(5,i);
        //cout<<num<<"asdsa";
        answer = answer + A/num;
        result = A/num;
        i++;
    }
    return answer;
}

