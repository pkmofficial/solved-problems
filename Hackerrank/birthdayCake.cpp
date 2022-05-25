int birthdayCakeCandles(vector<int> candles) {
    int temp= INT_MIN;
    int count = 0;
    for( int i = 0 ; i<candles.size(); i++){
        if(candles[i]>temp){
            temp = candles[i] ;
        }
    }
    for( int i = 0 ; i<candles.size(); i++){
        if(candles[i]==temp){
            count++;
        }
    }
    return count;   
}