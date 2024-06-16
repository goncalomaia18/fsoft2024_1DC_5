
#ifndef FSOFT2024_1DC_5_MANAGERINVENTORY_H
#define FSOFT2024_1DC_5_MANAGERINVENTORY_H

using namespace std;

class ManagerInventory{
private:
    string name;
    Manager manager;
    MechanicsList mechanics;
    SupplierList suppliers;
    MaterialList material;
public:
    ManagerInventory();
    ManagerInventory(const string& name);
    string& getName();
    void setManager(string pUsername, string pPassword);


    MechanicsList& getMechanicsList();
    SupplierList& getSupplierList();
    MaterialList& getMaterialList();
    void setDataForConsistency();
    User* getManager();
};


#endif //FSOFT2024_1DC_5_MANAGERINVENTORY_H
