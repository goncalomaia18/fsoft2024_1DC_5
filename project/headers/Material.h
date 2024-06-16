//
// Created by gonca on 05/06/2024.
//

#ifndef FSOFT2024_1DC_5_MATERIAL_H
#define FSOFT2024_1DC_5_MATERIAL_H

#include <string>

using namespace std;

class Material{
private:
    string name;
    string category;
    string brand;
    string id;
    int stock;
    bool isAvailable;
public:
    Material(const string& name,
            const string& category,
            const string& brand,
            const string& id,
            int stock,
            bool isAvailable);

    void setMaterialName(const string& name);
    void setCategory(const string& category);
    void setBrand(const string& brand);
    void setId(const string& id);
    void setStock(int stock);
    void setAvailable();
    void setUnavailable();
    void toggleAvailability();

    Material& get();
    const string& getName() const;
    const string& getCategory() const;
    const string& getBrand() const;
    const string& getId() const;
    int getStock() const;
    bool getIsAvailable() const;

    bool operator == (string& id) const;
    bool operator == (const Material &obj) const;

};


#endif //FSOFT2024_1DC_5_MATERIAL_H
