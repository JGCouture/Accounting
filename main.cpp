#include <iostream>
#include "header/common.h"
#include "header/account_item.h"

int main(int, char**){
  
    vector<AccountItem> items;
    loadDataFromFile(items);

    bool quit = false;

    while(!quit){

        showMainMenu();

        char key = readMenuSelection(3);

        switch(key){ 

            case '1':
                showAccountingMenu();
                accounting(items);
                break;

            case '2':
                showQueryMenu();
                query(items);
                break;

            case '3':
                cout << "\nquit or not? (Y/N): ";
                if (readQuitConfirm() == 'Y'){
                    quit = true;
                }
            
                break;

            default:
                break;
        }

        cout << endl;

    }
    return 0;

}
