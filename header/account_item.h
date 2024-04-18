#include "common.h"
struct AccountItem{
    string itemType;
    string amount;
    string detail;

};

void accounting(vector<AccountItem>& items);
void query(const vector<AccountItem>& items);

void loadDataFromFile(vector<AccountItem>& items);  


void insertIntoFile(const AccountItem& item);

void income(vector<AccountItem>& items);
void expand(vector<AccountItem>& items);

void query(vector<AccountItem>& items);

void queryItems(vector<AccountItem>& items);
void queryItems(vector<AccountItem>& items, const string itemType);
void printItem(const AccountItem& item);


