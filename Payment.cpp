#include "Payment.h"

Payment::Payment(string pid, int pref, float pamount, Client *cli) {
	paymentID = pid;
	referenceNo = pref;
	amount = pamount;
	client = cli;
	client->addPayment(this);
}

void Payment::displayPayment() {
	cout << "Payment ID : " << paymentID << endl
		 << "Reference Number : " << referenceNo << endl
		 << "Amount : " << setiosflags(ios::fixed) << setprecision(2) << amount << "\n\n";
}