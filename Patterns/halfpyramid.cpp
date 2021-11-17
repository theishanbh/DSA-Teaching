#include<iostream>
using namespace std;
int main(){
    int length = 5, width = 5;
    // half pyramid
    // for(int i = 0; i<length;i++){
    //     for(int j = 0 ; j<=i; j++){
    //         cout << "*";
    //     }cout << endl;
    // }

    // rotated half pyramid
    for(int i = 0; i<length;i++){
        // spaces
        for(int j = 0 ; j<width-i - 1; j++){
            cout << " ";
        }
        // star
        for(int j = 0 ; j<=i; j++){
            cout << "*";
        }cout << endl;
    }
    // inverted half pyramid
    for(int i = 0; i<length;i++){
        // spaces
        for(int j = 0 ; j<=width-i - 1; j++){
            cout << "*";
        }
        // star
        for(int j = 0 ; j<=i; j++){
            cout << " ";
        }cout << endl;
    }
    // half pyramid using numbers
    // 1
    // 22
    // 333
    // 4444
    for(int i = 0; i<length;i++){
        for(int j = 0 ; j<=i; j++){
            cout << i+1;
        }cout << endl;
    }
    // half pyramid using numbers
    // 1
    // 12
    // 123
    // 1234
    for(int i = 0; i<length;i++){
        for(int j = 0 ; j<=i; j++){
            cout << j+1;
        }cout << endl;
    }
    // floyds triangle
    int k = 1;
    for(int i = 0; i<length;i++){
        for(int j = 0 ; j<=i; j++){
            cout << k << " ";
            k += 1;
        }cout << endl;
    }
    return 0;
}

