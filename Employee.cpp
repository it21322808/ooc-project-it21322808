#include "Employee.h"

Employee::Employee(string uname, string eid, string erole, string uadd, string unum, string umail, Account *a): User (uname, uadd, unum, umail) {
    employeeID = eid;
    role = erole;
    feedback = "";
    Acc = a; //an object of Account as attribute
    project = pro;
    project->addEmployees(this);
    noOfMaterials = 0;
}

void Employee::giveFeedbacks(Feedback *f) {
    feedback = f->getFeedback();
}

void Employee::requestMaterial(Material *mat){
	if(noOfMaterials < SIZE)
	material[noOfMaterials] = mat;
	noOfMaterials++;
}

void Employee::displayDetails() {
	cout << "Employee ID : " << employeeID << endl
	   	 << "Employee Name : " << name << endl
	   	 << "Designation : " << role << "\n\n";
	Acc->displayAccount();
	cout <<"\n*******************************\n";
	 	 << "\nRequested Materials :- \n" << endl;
			for (int i=0; i<noOfMaterials; i++){
			material[i]->displayMaterial();
		 }
} 
  