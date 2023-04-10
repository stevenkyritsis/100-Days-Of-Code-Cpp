#include <iostream>
using namespace std;

int main(){

    int userInput;
    int start = 1;

    do{
        cout << "Please enter a positive integer: ";
        cin >> userInput;
    }while(userInput < 0);
    
    for(int i=1; i<userInput;i++){
        start = start + (i+1);    
    }

    cout << start;

    return 0;
}