#include <iostream>
#include <cstring>
#include <iomanip>
#include "Client.h"
#define SIZE 2
using namespace std;

class Payment {
private:
    string paymentID;
    int referenceNo;
    float amount;
    Client *client;
public:
    Payment(string pid, int pref, float pamount, Client *cli);
    void displayPayment();
};