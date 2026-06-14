#include "DtRevista.h"

DtRevista::DtRevista(string codigo, string titulo, int anioPublicacion, int nroEdicion, bool esMensual)
    : DtMaterial(codigo, titulo, anioPublicacion) {
    this->nroEdicion = nroEdicion;
    this->esMensual = esMensual;
}
int DtRevista::getNroEdicion() {
    return this->nroEdicion;
}
bool DtRevista::getEsMensual() {
    return this->esMensual;
}
string DtRevista::getCodigo() {
    return DtMaterial::getCodigo();
}
string DtRevista::getTitulo() {
    return DtMaterial::getTitulo();
}
int DtRevista::getAnioPublicacion() {
    return DtMaterial::getAnioPublicacion();
}