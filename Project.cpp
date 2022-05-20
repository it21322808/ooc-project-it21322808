#include "Project.h"

Project::Project(string projID, string pType, Admin *a) {
	projectID = projID;
	projectType = pType;
	noOfEmployees = 0;
	Adm = a;
    Adm->manageProject(this);
}

void Project::addMaterial(Material *mat1, Material *mat2) {
    mat[0] = mat1;
    mat[1] = mat2;
}

void Project::addEmployees(Employee *emp) {
    if (noOfEmployees < SIZE)
    employee[noOfEmployees] = emp;
    noOfEmployees++;
}

void Project::displayProject() {
	cout << "Project ID : " << projectID << endl
		 << "Project Type : " << projectType << "\n\n";
    for (int r=0; r < SIZE; r++) 
    mat[r]->displayMaterial(); 
    cout <<"*******************************\n\n";
    << "\nWorking Employees :- \n" << endl;
	for (int i=0; i<noOfEmployees; i++){
		employee[i]->displayDetails();
	}
	cout<<"*******************************\n\n";   
}

Project::~Project() {
    cout << "Project Deleted " << projectID << "\n\n";
}
