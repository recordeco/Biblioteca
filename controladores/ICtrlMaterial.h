#ifndef ICTRLMATERIAL_H
#define ICTRLMATERIAL_H
#include <string>
#include <vector>
#include "../dominio/Material.h"
#include "../dt/DtMaterial.h"
#include "../dt/DtRevista.h"
#include "../dt/DtLibro.h"
class ICtrlMaterial {
public:
    virtual DtMaterial* recordarDatosMaterial(string codigo, string titulo, int anioPublicacion) = 0;
    virtual DtLibro* recordarDatosLibro(DtMaterial* datosLibro, string autor, int cantPaginas) = 0;
    virtual DtRevista* recordarDatosRevista(DtMaterial* datosRevista, int nroEdicion, bool esMensual) = 0;
    virtual void confirmarAgregarMaterial() = 0;
    virtual void cancelarAgregar() = 0;
};
#endif /* ICTRLMATERIAL_H */
