#include "Prestamo.h"
#include "../dt/DtPrestamo.h"
#include <string>
using namespace std;    

Prestamo::Prestamo(DtFecha* fechaPrestamo, int cantDiasPrestamo) {
    this->fechaPrestamo = fechaPrestamo;
    this->cantDiasPrestamo = cantDiasPrestamo;
}
Prestamo::~Prestamo() {}

DtFecha* Prestamo::getFechaPrestamo() {
    return this->fechaPrestamo;
}
int Prestamo::getCantDiasPrestamo() {
    return this->cantDiasPrestamo;
}
DtPrestamo Prestamo::getDatosPrestamo(DtLector* lector, DtMaterial* material) {
    return DtPrestamo(this->fechaPrestamo, this->cantDiasPrestamo, lector, material);
}
