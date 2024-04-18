#include "../header/common.h"

char readMenuSelection(int options){
    string str;

    while (true){

        getline(cin, str);

        if (str.size() != 1 || str[0] - '0' <= 0 || str[0] - '0' > options ){
            cout << "Invalid Input, Please Try again: ";
        } else{
            break;
        }

    }

    return str[0];   
    
}

char readQuitConfirm(){

    string str;

    while (true){

        getline(cin, str);

        if (str.size() != 1 || toupper(str[0]) != 'Y' && toupper(str[0]) != 'N' ){
            cout << "Invalid Input, Please Try again (Y/N): ";
        } else{
            break;
        }

    }

    return toupper(str[0]);



}


string readAmount(){

    int amount;

    string str;

    while (true){

        getline(cin, str);

        try{

            amount = stoi(str);
            break;

        }catch (invalid_argument e){

            cout << "Invalid Input, Please Try again: ";

        }

    }

    return str;
}