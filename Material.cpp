#include "Material.h"

Material::Material(string mCode, string mName, Admin *a, Employee *e) {
    materialCode = mCode;
    materialName = mName;
    Adm = a;
    Adm->addMaterial(this);
    Emp = e;
    Emp->requestMaterial(this)
}

void Material::displayMaterial() {
	cout << "Material Code : " << materialCode << endl
		 << "Material Name : " << materialName << "\n\n";
}

Material::~Material(){
	cout << "Deleting Material " << materialCode << "\n\n";
}