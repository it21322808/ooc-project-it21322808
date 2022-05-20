#include "Client.h"

Client::Client(string uname, string cid, string uadd, string unum, string umail, Account *a, Project *p) : User(uname, uadd, unum, umail) {
    clientID = cid;
    feedback = "";
    inquiry = "";
    Acc = a; //an object of Account as attribute
    noOfPayments = 0;
    pro = p;
}

void Client::reportInquiry(Inquiry* i) {
    inquiry = i->addInquiry();
}

void Client::giveFeedbacks(Feedback* f) {
    feedback = f->getFeedback();
}

void Client::addPayment(Payment *p){
	if (noOfPayments < SIZE)
        payment[noOfPayments] = p;
        noOfPayments++;
}
   	
void Client::displayDetails() {
	cout << "Client ID : " << clientID << endl
	   	 << "Client Name : " << name << "\n\n";
	Acc->displayAccount();
	cout <<"\n*******************************\n";
	     << "\nPayments :- \n" << endl;
	for( int i = 0; i < noOfPayments; i++)
        payment[i]-> displayPayment();
        cout<<"*******************************\n\n";
        pro->displayProject();
		cout<<"\n*******************************\n";
}   