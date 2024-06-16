//
// Created by ricardo.franca on 24/05/2023.
//
#include <iostream>
#include "Controller.h"
#include "Utils.h"

Controller::Controller(ManagerInventory& manager_inventory) {
    this->model = manager_inventory;
}

void Controller::run() {
    int op = -1;
    if(this->loggedUser == nullptr){
        do{
            op = this->view.menuManager_Inventory();
            switch(op){
                case 1:runLogin();
                default:
                    break;
            }
        }while(op != 0);
    }

}

void Controller::runLogin(){

    string username = this->managerView.getUsername();

    if(username == this->model.getManager()->getUsername()){
        string password = this->managerView.getPassword();
        if(this->model.getManager()->getPassword() == password){
            loggedUser = this->model.getManager();
            cout << "Bem-Vindo Chefe!";
            runManager();
            return;
        }else{
            this->managerView.incorrectPassword();
        }
    }



void Controller::runManager() {
    int op = -1;
    do{
        op = this->view.menuManager();
        switch(op){
            case 1:runAddMaterial();
                break;
            case 2:runRemoveMaterial();
                break;
            case 3:runMaterial();
                break;
            case 4:runAddOrderSuppliers();
                break;
            case 5:runSuppliersOrder();
                break;
            case 6:runAddMechanics();
                break;
            case 7:runRemoveMechanics();
                break;
            case 8:runAddSuppliers();
                break;
            case 9:runRemoveSuppliers();
                break;
            case 10:runMechanics();
                break;
            case 11:runSuppliers();
                break;
            case 0:logout();
            default:
                break;
        }
    }while(op != 0);
}

