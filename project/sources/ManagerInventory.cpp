#include "ManagerInventory.h"


using namespace std;

ManagerInventory::manager_inventory() {
    setDataForConsistency();
}

ManagerInventory::manager_inventory(const string &name) {
    this->name = name;
    setDataForConsistency();
}

string &ManagerInventory::getName() {
    return name;
}

MechanicsList &ManagerInventory::getMechanicsList() {
    return this->mechanics;
}

SupplierList &ManagerInventory::getSupplierList() {
    return this->suppliers;
}

MaterialList &ManagerInventory::getMaterialList() {
    return this->material;
}

void ManagerInventory::setManager(string pUsername, string pPassword) {
    this->manager.set(pUsername,pPassword);
}

User *ManagerInventory::getManager() {
    User* user = (User*)&this->manager;
    return user;
}
