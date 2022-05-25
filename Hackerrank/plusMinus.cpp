void plusMinus(vector<int> arr) {
    double p=0;
    double n=0;
    double z=0;
    double l=arr.size();
    for(int i=0 ; i<l ; i++){
        if(arr[i]>0){
            p++;
        }
        if(arr[i]<0){
            n++;
        }
        if(arr[i]==0){
            z++;
        }
    }
    // double pr = p/l;
    // double nr = n/l;
    // double zr = z/l;
    cout << fixed ;
    cout<<setprecision(7);
    cout<<p/l<<endl;
    cout<<n/l<<endl;
    cout<<z/l<<endl;
}