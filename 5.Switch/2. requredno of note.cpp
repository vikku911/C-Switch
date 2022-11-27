#include <iostream>
using namespace std;

int main() {
    int n ;
    cout <<"Ente the amount "<<endl;
    cin>>n;
    int ans = 0;
    int rs =0 ;
   
    
    switch(rs){
        case '100': ans= n%100;
                    cout <<"No of 100 rs note is "<<ans<<endl;
                    n= n- ans*100;
        case '20': ans= n%20;
                    cout<<"No of 20 rs note is "<<ans<<endl;
                    n= n- ans *20;
        case '10': ans= n%10;
                    cout <<"No of 10 rs note is "<<ans<<endl;
                    n= n- ans *10;
        case '1':  ans = n%1;
                    cout <<"No of 100 rs note is "<<ans<<endl;
                    break;
        default : cout<<"error";
    }
   
    return 0;
}                                                              // Error in code logic may be right .