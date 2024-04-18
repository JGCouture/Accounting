#include<iostream>
#include<fstream>
#include<string>
#include<vector> 
using namespace std;

#define INCOME "income"
#define EXPAND "expand"

#define FILENAME "AccountBook.txt"

void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

char readMenuSelection(int options);

char readQuitConfirm();

string readAmount();

