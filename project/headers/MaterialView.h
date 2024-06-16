//
// Created by gonca on 16/06/2024.
//

#ifndef FSOFT2024_1DC_5_MATERIALVIEW_H
#define FSOFT2024_1DC_5_MATERIALVIEW_H

#include "Material.h"
#include "View.h"

class MaterialView {
public:
    Material getMaterial(const string& id);
    void printMaterialListManager(list<Product>& products, const string& listTitle);
    string getid();
    void invalidid();
    void MaterialUnavailable();

};

#endif //FSOFT2024_1DC_5_MATERIALVIEW_H
