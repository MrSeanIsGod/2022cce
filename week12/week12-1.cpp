int addDigits(int num){
    int ans=0;
    while(num>0){
        ans+=num%10;
        num=num/10;
    }
    num=ans;
    ans=0;
    while(num>0){
        ans+=num%10;
        num=num/10;
    }
    num=ans;
    ans=0;
    while(num>0){
        ans+=num%10;
        num=num/10;
    }
    return ans;
}
