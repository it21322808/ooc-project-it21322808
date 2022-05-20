#include "Admin.h"

Admin::Admin(string uname, string aid, string a_pos, string uadd, string unum, string umail, Account *a) : User(uname, uadd, unum, umail) {
    adminID = aid;
    position = a_pos;
    Acc = a; //an object of Account as attribute
    noOfProjects = 0;
    noOfMaterials = 0;
}
   	
void Admin::displayDetails() {
	cout << "Admin ID : " << adminID << endl
	   	 << "Admin Name : " << name << endl
	   	 << "Position : " << position << "\n\n";
	Acc->displayAccount();
	cout <<"\n*******************************\n";
		 << "\nManaging Projects :- \n" << endl;
			for (int i=0; i<noOfProjects; i++){
			project[i]->displayProject();
		 } 
		 << "\nOrdered Materials :- \n" << endl;
		 	for (int i=0; i<noOfMaterials; i++){
		 	material[i]->displayMaterial();
		 }
}

void Admin::manageProject(Project *pro){
	if(noOfProjects < SIZE)
	project[noOfProjects] = pro;
	noOfProjects++;
}

void Admin::addMaterial(Material *mat){
	if(noOfMaterials < SIZE)
	material[noOfMaterials] = mat;
	noOfMaterials++;
}
