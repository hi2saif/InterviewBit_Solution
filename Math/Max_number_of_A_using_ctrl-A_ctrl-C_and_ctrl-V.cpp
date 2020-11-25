code for printing maximum number of A's using ctrl-A , ctrl-C , ctrl-V


int keys(int n)
{
    vector<int>vt(20,0);
    vt.clear();
     for(int i=1;i<7;i++)
        vt[i-1]=i;
    if(n<7)
        return vt[n-1];
    for(int j=7;j<=n;j++)
    {
            int max1=INT_MIN;
            int temp = max(2*vt[j-4],max(3*vt[j-5],4*vt[j-6]));
            if(temp>max1){
                max1=temp;
                vt[j-1]=max1;
            
        }
    }
    return vt[n-1];
}

int main() {
     for(int i=1;i<=20;i++)
        cout<<keys(i)<<"\n";
}
