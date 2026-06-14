#include "DtPrestamo.h"
DtPrestamo::DtPrestamo(DtFecha* fechaPrestamo, int cantDiasPrestamo, DtLector* lector, DtMaterial* material) {
    this->fechaPrestamo = fechaPrestamo;
    this->cantDiasPrestamo = cantDiasPrestamo;
    this->lector = lector;
    this->material = material;
}

DtFecha* DtPrestamo::getFechaPrestamo() {
    return this->fechaPrestamo;
}
int DtPrestamo::getCantDiasPrestamo() {
    return this->cantDiasPrestamo;
}
DtLector* DtPrestamo::getLector() {
    return this->lector;
}
DtMaterial* DtPrestamo::getMaterial() {
    return this->material;
}