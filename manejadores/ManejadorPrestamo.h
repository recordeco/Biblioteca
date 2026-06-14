#ifndef MANEJADORPRESTAMO_H
#define MANEJADORPRESTAMO_H
#include <set>
#include <string>
using namespace std;
#include "../dominio/Prestamo.h"
class ManejadorPrestamo {
private:
    static ManejadorPrestamo* instancia;
    set<Prestamo*> prestamos;
    ManejadorPrestamo();
    ~ManejadorPrestamo();
public:
    static ManejadorPrestamo* getInstancia();
    set<Prestamo*> getPrestamos();
    Prestamo* getPrestamo(DtFecha* fechaPrestamo, int cantDiasPrestamo);
    void agregarPrestamo(Prestamo* p);
};
#endif /* MANEJADORPRESTAMO_H */