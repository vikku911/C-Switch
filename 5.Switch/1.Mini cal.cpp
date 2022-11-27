#include <iostream>
using namespace std;

int main() {
    int a , b;
    cout <<"Enter the two number "<<endl;
    cin>>a>>b;
    
    char op;
    cout <<"Enter the opertation you wana perform "<<endl;
    cin>>op;
    
    switch(op){
    case '+' : cout <<a +b <<endl;
        break;
    case '-' : cout<< a-b <<endl;
        break;
    case '*' : cout <<a *b <<endl;
        break;
    case '/' : cout<< a/b <<endl;
        break;
    case '%' : cout <<a %b <<endl;
        break;
    default : cout <<"Enter valid operation "<<endl;
    }
    return 0;
}
/*

Enter the two number 
5 
4
Enter the opertation you wana perform 
+
9

........

Enter the two number 
14
9
Enter the opertation you wana perform 
%
5

*/