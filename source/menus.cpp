#include "../header/common.h"


void showMainMenu(){

    
    //clear the screen
    system("clear");

    cout << "----------------------------------------------------------" << endl;
    cout << "|================= Welcome Accounting Note ==============|" << endl;
    cout << "|                                                        |" << endl;
    cout << "|******************      1 Accounting      **************|" << endl;
    cout << "|******************      2 Checking        **************|" << endl;
    cout << "|******************      3 Quit            **************|" << endl;
    cout << "|                                                        |" << endl;

    cout << "\nPlease choose (1 to 3): ";

}

void showAccountingMenu(){

    cout << "----------------------------------------------------------" << endl;
    cout << "|================= choose Accounting Type ===============|" << endl;
    cout << "|                                                        |" << endl;
    cout << "|******************   1 Income             **************|" << endl;
    cout << "|******************   2 Expand             **************|" << endl;
    cout << "|******************   3 Back to main menu  **************|" << endl;
    cout << "|                                                        |" << endl;

    cout << "\nPlease choose (1 to 3): ";

}

void showQueryMenu(){


    cout << "----------------------------------------------------------" << endl;
    cout << "|================= choose checking type   ===============|" << endl;
    cout << "|                                                        |" << endl;
    cout << "|******************   1 Calculate All      **************|" << endl;
    cout << "|******************   2 Calculate Income   **************|" << endl;
    cout << "|******************   3 Calculate Expend   **************|" << endl;
    cout << "|******************   4 Back to main menu  **************|" << endl;
    cout << "|                                                        |" << endl;

    cout << "\nPlease choose (1 to 4): ";


}