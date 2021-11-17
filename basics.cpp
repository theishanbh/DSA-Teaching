#include<iostream>
using namespace std;

int main(){
    cout << "hello";
    int i = 0;
    // if
    if (i){
        cout << "ehl" ;
    }
    else{
        // cin >> i;
        cout << "this is i: " <<  i << endl;
    }
    // for loop
    for (int i = 0; i < 10; i++){
        cout << i << " ";
    }
    
    // else
    // switch
    // switch (i){
    //     case 1 :
    //         break;
        
    //     default:
    //         break;
    // }

    // operatars
    /*
    unary -> ++ , -- 
    */
   int a = 6;
   int b = 7;
   cout << ++a << endl;
   cout << a++ << endl;
//    cout << a , b << endl;  this wil throw error
   cout << a << b << endl;
   cout << a + b << endl;

//    relational ---->  !=, > , 
// logical operators ---- > && (and) , || (or)

//  bitwise operator ----> & ( and ), | (or), << , >> , ~ (ones complement), ^(xor)
    cout << (6 & 8) << endl;
    cout << (6 | 8) << endl;
    // shift operations
    cout << (1 << 2) << endl;
    cout << (8 >> 2) << endl;

    a += b;
    cout << a << endl;
    
    // misc operators
    // if(//) ... else...

    // ternary operators
    cout << ( (a > b)? "a" : "b"  )<< endl;


    // * , & (lets talk abt this later)

    // int *x = &a;
    // cout << x << endl;
    return 0;
}


