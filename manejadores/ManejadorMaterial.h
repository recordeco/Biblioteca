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
    void eliminarMaterial(string codigo);
    void modificarMaterial(string codigo, string titulo, string autor, string editorial, string anio, string tipo);
};

#endif /* MANEJADORMATERIAL_H */