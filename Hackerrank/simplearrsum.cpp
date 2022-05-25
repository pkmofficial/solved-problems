long aVeryBigSum(vector<long> ar) {
    long sum=0;
    for(long i=0 ; i < ar.size() ; i++){
        sum += ar[i];
    }
    return sum;
}