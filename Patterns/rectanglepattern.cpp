#include<iostream>
using namespace std;

int main(){
    
    // full rectangle
    int length = 5 , width = 5;
    // cin >> length >> width;
    for(int i = 0;i < length; i++){
        for (int j = 0; j < width; j++){
            cout << "*" ;
        }cout << endl;
    }
    cout << endl;
    // hollow rectangle
    for(int i = 0;i < length; i++){
        if(i==0 || i==length-1){
            for(int m = 0; m<width; m++) cout << "*";
        }
        else{
            for(int j = 0; j<width; j++){
                if(j==0 || j ==width-1) cout << "*";
                else cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
*****
*   *
*   *
*   *
*****
*/