
string Solution::convertToTitle(int A) {

    int result=0;
    string number="";
    int flag=0;
    if(A<26){
        int result=A%26;
        if (result==0)
            result=25;
        else
            result--;
        number = number + (char)(('A'+result));
    }else{
    while(A>0){
        int result=A%26;
        if (result==0){
            result=25;
            flag=1;
        }
        else{
            result--;
            flag=0;

        }
        number = number + (char)(('A'+result));
        A=A/26;
        if(flag==1)
            A--;

    }
    }
    reverse(number.begin(),number.end());
    return number;
}
