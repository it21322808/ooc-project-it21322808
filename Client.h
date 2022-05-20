#include <iostream>
#include <cstring>
#include "User.h"
#include "Account.h"
#include "Payment.h"
#include "Project.h"
#include "Inquiry.h"
#include "Feedback.h"
#define SIZE 2
using namespace std;

class Client : public User {
    private:
        string clientID;
        string feedback;
        string inquiry;
        Account *Acc;   
        Payment *payment[SIZE]; 
		int noOfPayments;  
		Project *pro; //an object of Project as attribute
    public:
        Client(string uname, string cid, string uadd, string unum, string umail, Account *a, Project *p);
        void giveFeedbacks(Feedback *f);
        void reportInquiry(Inquiry *i);
        void addPayment(Payment *p);
        void displayDetails();
};