#include "MaterialView.h"
#include "Utils.h"
#include <iostream>


using namespace std;

Material MaterialView::getMaterial(const string& id) {
    string name;
    string category;
    string brand;
    int stock;
    bool isAvailable;

    name = Utils::getString("Nome");
    category = Utils::getString("Categoria");
    brand = Utils::getString("Marca");
    stock = Utils::getNumber("Stock");
    isAvailable = Utils::getBool("O material está disponível? (1 - sim, 0 - não)? ");

    Material material(name, category, brand, id, stock, isAvailable);
    return material;
}


void MaterialView::printMaterialListManager(list<Material> &material, const string &listTitle) {
    cout << listTitle << endl;
    cout << setw(IDSPACING)<<"ID";
    cout << setw(IDSPACING)<< "Disponível";
    cout << setw(QUANTITYSPACING) << "Quantidade";
    cout << "Nome";

    cout << endl;
    for (auto it=material.begin(); it != material.end(); ++it){
        cout << setw(IDSPACING) << it->getId();
        cout << setw(IDSPACING) << ((it->getIsAvailable()) ? "Disponível" : "Indisponível");
        cout << setw(QUANTITYSPACING) << (it->getStock());
        cout << " " << it->getName() << endl;
    }
}

string MaterialView::getId() {
    string id;
    bool flag;
    do{
        id = Utils::getString("Insere o ID do material");
        flag = false;
        if(!Utils::stringIsNumber(id)){
            flag = true;
            invalidID();
        }
    }while(flag);
    return id;
}

void MaterialView::invalidID() {
    cout << "ID inválido";
}

void MaterialView::materialUnavailable() {
    cout << "Material indisponivel" << endl;
}
