vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int scoreA=0 , scoreB=0 ;
    
    for( int i = 0 ; i < 3 ; i++){
        if( a[i] == b[i] ){
            continue;
        }
        else if (a[i] > b[i]) {
            scoreA++;
        }
        else if (a[i] < b[i]) {
            scoreB++;
        }
    }
    vector<int> score ;
    score.push_back(scoreA);
    score.push_back(scoreB);
    return score;
}