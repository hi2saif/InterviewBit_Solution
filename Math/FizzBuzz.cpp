int check(int n){

    if(n%3==0 && n%5==0){
        return 0;
    }else if(n%5 ==0){
        return 1;
    }else if(n%3==0){
        return 2;
    }else{
        return 3;
    }


}

vector<string> Solution::fizzBuzz(int A) {

    vector<string>a;
    int i;
    for(i=1;i<=A;i++){
        if(check(i)==0){
        a.push_back("FizzBuzz");
    }else if(check(i)==1){
        a.push_back("Buzz");
    }else if(check(i)==2){
        a.push_back("Fizz");
    }else{
        a.push_back(to_string(i));
    }
    }
    return a;
}
