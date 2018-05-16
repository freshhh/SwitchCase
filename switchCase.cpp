//switch cases
#include<iostream>
using namespace std;
//#define NULL 0


int main(int argc, char * args[]){

    /*
    cout << "Number of args = " << argc << endl;
    cout << "Sizeof() => " << sizeof(args[1][0]) << endl;
    cout << "Args[1][0] => " << args[1][0] << endl;
    */

    char * newStr;
    char * givenStr = args[1];
    int counter = 0;
    cout << givenStr << endl;
    while(true){
        cout << counter<<endl;
        if(givenStr[counter] == 0){
            return 0;
        }
        if((givenStr[counter] >= 97) && (givenStr[counter] <= 122))
            cout << (char) (givenStr[counter] - 32);
        else if((givenStr[counter] >= 65) && (givenStr[counter] <= 90))
            cout << (char) (givenStr[counter] + 32);
        counter++;
    }
      //cout << "NewString: " << newStr << endl;
     return 0;
}
