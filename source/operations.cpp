#include "../header/account_item.h"
#include "../header/common.h"




void loadDataFromFile(vector<AccountItem>& items) {
    ifstream input(FILENAME);
    AccountItem item;

    while (input >> item.itemType >>item.amount >> item.detail) {

          items.push_back(item);
    
    }

    input.close();
}

void accounting(vector<AccountItem>& items){

     char key = readMenuSelection(3);

        switch(key){

            case '1':  //income
                income(items);
                break;

            case '2':  //expand
                expand(items);
                break;

            default: //Back to Main Menu
                break;
        }

}

void income(vector<AccountItem>& items){
    AccountItem item;

    item.itemType = INCOME;
    cout <<"\nInput your income: ";
    item.amount = readAmount();

    cout<<"\nNote: ";
    getline(cin, item.detail);

    items.push_back(item);

    insertIntoFile(item);

    cout<<"\n------------Accounting Successfully---------------\n"<< endl;
    cout<<"Please press return button to main menu"<< endl;

    string line;
    getline(cin, line);

}

void expand(vector<AccountItem>& items){
    AccountItem item;

    item.itemType = EXPAND;
    cout <<"\nInput your expand: ";
    item.amount = "-"+readAmount();

    cout<<"\nNote: ";
    getline(cin, item.detail);

    items.push_back(item);

    insertIntoFile(item);

    cout<<"\n------------Accounting Successfully---------------\n"<< endl;
    cout<<"Please press return button to main menu"<< endl;

    string line;
    getline(cin, line);

}

void insertIntoFile(const AccountItem& item){

    ofstream output(FILENAME, ios::out | ios::app);

    output<<item.itemType << "\t" << item.amount << "\t" << item.detail << endl;

    output.close();

}



void query(vector<AccountItem>& items){

     char key = readMenuSelection(4);

        switch(key){

            case '1':  //calculate all 
                queryItems(items);
                break;

            case '2':  //calculate all income
                queryItems(items, INCOME);
                break;
            
            case '3':  //calculate all expand
                queryItems(items, EXPAND);
                break;

            default: //Back to Main Menu
                break;
        }
}

void queryItems(vector<AccountItem>& items){

    cout<<"--------------Search Result---------------"<< endl;
    cout<<"\nType\t\tAmount\t\tNote\n"<< endl;

    int total = 0;
    for (auto item: items){
        printItem(item);

        total += stoi(item.amount);
    }

    cout << "==========================================\n"<< endl;
    cout << "Total Balance: "<< total << endl;
    cout<<"\n------------Accounting Successfully---------------\n"<< endl;
    cout<<"Please press return button to main menu"<< endl;

    string line;
    getline(cin, line);



}

void printItem(const AccountItem& item){

    cout<<item.itemType << "\t" << item.amount << "\t" << item.detail << endl;

}



//overloading
void queryItems(vector<AccountItem>& items, const string itemType){

    cout<<"--------------Search Result---------------"<< endl;
    cout<<"\nType\t\tAmount\t\tNote\n"<< endl;

    int total = 0;
    for (auto item: items){

        if (item.itemType == itemType){
            
            printItem(item);

            total += stoi(item.amount);
            
        }
       
    }

    cout << "==========================================\n"<< endl;
    cout << ((itemType == INCOME)? "Total Income: ":"Total Expand: ")<< total << endl;
    cout<<"\n------------Accounting Successfully---------------\n"<< endl;
    cout<<"Please press return button to main menu"<< endl;

    string line;
    getline(cin, line);


}