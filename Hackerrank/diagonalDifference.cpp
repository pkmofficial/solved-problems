int diagonalDifference(vector<vector<int>> arr) {
    int sumLeftDg = 0;
    int sumRightDg = 0;
    // int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++){
            if(i==j){
                sumLeftDg += arr[i][j] ;
            }
            if( (i+j)==(arr[i].size()-1) ){
                sumRightDg += arr[i][j] ;
            }
        }
    }
    int diff = abs(sumLeftDg - sumRightDg) ;
    return diff;
}