bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}




vector<int> Solution::primesum(int A) {


    vector<int>a;
    if(isPrime(2) && isPrime(A-2)){
        a.push_back(2);
        a.push_back(A-2);
        return a;
    }
    for(int i=3;i<=A;i=i+2){
        int sum = A-i;
        if(isPrime(i) && isPrime(sum)){
            a.push_back(i);
            a.push_back(sum);
        }
    }
    return a;
}
