#ifndef REVISTA_H
#define REVISTA_H
#include "Material.h"
#include "../dt/DtRevista.h"
class Revista : public Material {
private:
    int nroEdicion;
    bool esMensual;
public:
    Revista(string codigo, string titulo, int anioPublicacion, int nroEdicion, bool esMensual);
    int getNroEdicion();
    bool getEsMensual();
    void setNroEdicion(int nroEdicion);
    void setEsMensual(bool esMensual);
    bool esLibro();
    DtRevista getDatosRevista();
};
#endif /* REVISTA_H */