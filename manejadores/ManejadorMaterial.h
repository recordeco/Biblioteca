#ifndef MANEJADORMATERIAL_H
#define MANEJADORMATERIAL_H
#include <set>
#include <string>
using namespace std;
#include "../dominio/Material.h"
class ManejadorMaterial {
private:
    static ManejadorMaterial* instancia;
    set<Material*> materiales;
    ManejadorMaterial();
    ~ManejadorMaterial();
public:
    static ManejadorMaterial* getInstancia();
    set<Material*> getMateriales();
    Material* getMaterial(string codigo);
    void agregarMaterial(Material* m);
};

#endif /* MANEJADORMATERIAL_H */