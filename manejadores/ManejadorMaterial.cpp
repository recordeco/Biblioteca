#include "ManejadorMaterial.h"
#include <set>
ManejadorMaterial* ManejadorMaterial::instancia = nullptr;

ManejadorMaterial* ManejadorMaterial::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ManejadorMaterial();
    }
    return instancia;
}
ManejadorMaterial::ManejadorMaterial() {}

set<Material*> ManejadorMaterial::getMateriales() {
    return this->materiales;
}

Material* ManejadorMaterial::getMaterial(string codigo) {
    set<Material*>::iterator it;
    it = this->materiales.begin();
    
    while(it != this->materiales.end()) {
        Material* itM = *it;
        if(itM->getCodigo() == codigo){
            return itM;
        } else {
            ++it;
        }
    }
    return nullptr;
}
void ManejadorMaterial::agregarMaterial(Material* m) {
    this->materiales.insert(m);
}