#include "ManejadorPrestamo.h"
ManejadorPrestamo* ManejadorPrestamo::instancia = nullptr;
ManejadorPrestamo::ManejadorPrestamo() {}
ManejadorPrestamo::~ManejadorPrestamo() {
    for (Prestamo* p : prestamos) {
        delete p;
    }
    prestamos.clear();
}
ManejadorPrestamo* ManejadorPrestamo::getInstancia() {
    if (instancia == nullptr) {
        instancia = new ManejadorPrestamo();
    }
    return instancia;
}
set<Prestamo*> ManejadorPrestamo::getPrestamos() {
    return this->prestamos;
}
Prestamo* ManejadorPrestamo::getPrestamo(DtFecha* fechaPrestamo, int cantDiasPrestamo) {
    for (Prestamo* p : prestamos) {
        if (p->getFechaPrestamo()->getDia() == fechaPrestamo->getDia() &&
            p->getFechaPrestamo()->getMes() == fechaPrestamo->getMes() &&
            p->getFechaPrestamo()->getAnio() == fechaPrestamo->getAnio() &&
            p->getCantDiasPrestamo() == cantDiasPrestamo) {
            return p;
        }
    }
    return nullptr;
}  
void ManejadorPrestamo::agregarPrestamo(Prestamo* p) {
    this->prestamos.insert(p);
}