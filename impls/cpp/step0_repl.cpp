#include <iostream>
#include <string>
using namespace std;

string READ(string input){
    return input;
}

string EVAL (string input){
    return input;
}

string PRINT (string input){
    return input;
}

string REP (string input){
    auto ast = READ(input);
    auto result = EVAL(ast);
    return PRINT(result);
}

int main(){
    string input {};
    while(true){
        cout << "user>";
        if(!getline(cin, input)){
            break;
        }
        cout << REP(input);
        cout << endl;
    }

    return 0;
}