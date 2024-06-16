#include "Material.h"

Material::Material(
                 const string &name,
                 const string &category,
                 const string &brand,
                 const string &id,
                 int stock,
                 bool isAvailable)
{
    setProductName(name);
    setCategory(category);
    setBrand(brand);
    setId(id);
    setStock(stock);
    if(isAvailable) {
        setAvailable();
    }else{
        setUnavailable();
    }
}

bool Material::operator==(string& number) const {
    if(this->number == numer){
        return true;
    }return false;
}

void Material::setMaterialName(const string &name)
{
    this->name = name;
}

void Material::setCategory(const string &category)
{
    this->category = category;
}

void Material::setBrand(const string &brand)
{
    this->brand = brand;
}

void Material::setId(const string &id)
{
    this->id = id;
}

void Material::setStock(int stock)
{
    this->stock = stock;
}

void Material::setAvailable()
{
    this->isAvailable = true;
}

void Material::setUnavailable()
{
    this->isAvailable = false;
}

bool Material::operator==(const Material &obj) const
{
    if (this->getId() == obj.getId())
        return true;
    return false;
}

const string& Material::getId() const {
    return this->id;
}

const string &Material::getName() const {
    return this->name;
}


const string &Material::getCategory() const {
    return this->category;
}

const string &Material::getBrand() const {
    return this->brand;
}

int Material::getStock() const {
    return this->stock;
}

bool Material::getIsAvailable() const {
    return this->isAvailable;
}

Material &Material::get() {
    return *this;
}

void Material::toggleAvailability() {
    if(this->getIsAvailable()){
        this->setUnavailable();
        return;
    }
    this->setAvailable();
}

