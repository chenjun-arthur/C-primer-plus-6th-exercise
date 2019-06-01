// compile with dmaabc.cpp
#include <iostream>
#include <string>
#include "dmaabc.h"

const int CLIENTS = 3;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    
    std::string temp;
    int tempNum;

    abcDMA *p_Clients[CLIENTS];
    for (int i = 0; i < CLIENTS; i++) {
        cout << "Enter Client's name: ";
        getline(cin, temp);
        cout << "Enter client's account number: ";
        cin >> tempNum;
        cout << "Enter 1 for baseDMA or "
             << "2 for lacksDMA or "
             << "3 for hasDMA: ";
        char kind;
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3')) {
            cout << "Ente either 1 or 2 or 3";
        }
        if (kind == '1') {
            p_Clients[i] = new baseDMA(temp.c_str(), tempNum);
        } else {
            std::string tempName;
            cout << "Enter client's second name: ";
            getline(cin, tempName);
            if (kind == '2') {
                p_Clients[i] = new lacksDMA(temp.c_str(), tempName.c_str(),
                  tempNum);
            }
            if (kind == '3') {
                p_Clients[i] = new hasDMA(temp.c_str(), tempName.c_str(),
                  tempNum);
            }
        }
        while (cin.get() != '\n') {
            continue;
        }
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++) {
        p_Clients[i] -> View();
        cout << endl;
    }
    for (int i = 0; i < CLIENTS; i++) {
        delete p_Clients[i];
    }
    cout << "Done" << endl;
    return 0;
}