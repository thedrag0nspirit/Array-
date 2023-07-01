    #include<iostream>
    using namespace std;
    int main(){
    //  now the input from the user

    int n ;
    cin>>n;

    int age [n];
    for (int i=0 ;i<n; i++){
    cin>> age [i];
    }
    for (int i=0; i<n; i++){
    cout<<age[i]<<" ";
    }
    // done with user input!!
    
    return 0;
    }