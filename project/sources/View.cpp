#include <iostream>
#include "View.h"
#include "Utils.h"

using namespace std;

View::View(){

}

int View::menuManager_Inventory(){
    int op = -1;
    do{
        cout<<"\n\n********** Menu Principal **********\n";
        cout << "1 - Iniciar Sessão\n";
        cout << "0 - Sair\n";
        op = Utils::getNumber("Opção");
    }while(op < 0 || op > 1);
    return op;
}

int View::menuManager(){
    int op = -1;
    do{
        cout<<"\n\n********** Menu Gerente **********\n";
        cout<<"1 - Adicionar material \n";
        cout<<"2 - Remover material\n";
        cout<<"3 - Ver Inventário\n";
        cout<<"4 - Realizar uma encomenda ao fornecedor\n";
        cout<<"5 - Ver Encomendas ao Fornecedor\n";
        cout<<"6 - Adicionar Mecânico \n";
        cout<<"7 - Remover Mecânico\n";
        cout<<"8 - Adicionar Fornecedor\n";
        cout<<"9 - Remover Fornecedor\n";
        cout<<"10 - Ver Mecânicos\n";
        cout<<"11 - Ver Fornecedores\n";
        cout<<"\n0 - Sair\n";
        op = Utils::getNumber("Opção");
    }while(op < 0 || op > 11);
    return op;
}

int View::menuMechanics(){
    int op = -1;
    do{
        cout<<"\n\n********** Menu Mecânico **********\n";
        cout<<"1 - Adicionar material \n";
        cout<<"2 - Remover material\n";
        cout<<"3 - Ver Inventário\n";
        cout<<"\n0 - Sair\n";
        op = Utils::getNumber("Opção");
    }while(op < 0 || op > 3);
    return op;
}

int View::menuSuppliers() {
    int op = -1;
    do{
        cout<<"\n\n********** Menu Fornecedores **********\n";
        cout<<"1 - Adicionar material \n";
        cout<<"2 - Remover material\n";
        cout<<"3 - Ver Inventário\n";
        cout<<"4 - Ver Encomendas do Gerente\n";
        cout<<"\n0 - Sair\n";
        op = Utils::getNumber("Opção");
    }while(op < 0 || op > 4);
    return op;
}






