pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi= INT_MIN ; 
    long long mini= INT_MAX ; 
    
    for ( int i = 0 ; i < n ; i++ ){
        maxi = max ( a[i] , maxi ) ;
        mini = min ( a[i] , mini ) ;
        // if( a[i] > maxi ) {
        //     maxi = a[i] ;
        // }
        // if( a[i] < mini ) {
        //     mini = a[i] ;
        // }
    }

    pair<long long, long long> minmax ;
    minmax.first = mini ;
    minmax.second = maxi ;
    
    return minmax ;
}