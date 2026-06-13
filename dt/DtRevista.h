#ifndef DTREVISTA_H
#define DTREVISTA_H
#include <string>
using namespace std;
#include "DtMaterial.h"
class DtRevista : public DtMaterial {
private:
    string codigo;
    string titulo;
    int anioPublicacion;
    int nroEdicion;
    bool esMensual;
public:
    DtRevista(string codigo, string titulo, int anioPublicacion, int nroEdicion, bool esMensual);
    string getCodigo();
    string getTitulo();
    int getAnioPublicacion();
    int getNroEdicion();
    bool getEsMensual();
}; 
#endif /* DTREVISTA_H */