#ifndef CTRLMATERIAL_H
#define CTRLMATERIAL_H
#include <string>
using namespace std;
#include "ICtrlMaterial.h"
#include "../dominio/Material.h"
#include "../manejadores/ManejadorMaterial.h"
#include "../dt/DtMaterial.h"
#include "../dt/DtLibro.h"
#include "../dt/DtRevista.h"

class CtrlMaterial : public ICtrlMaterial {
private:
    static CtrlMaterial* instancia;
    CtrlMaterial();
    ~CtrlMaterial();
    ManejadorMaterial* manejador;
    DtMaterial* dtMaterialRecordado;
    DtLibro* dtLibroRecordado;
    DtRevista* dtRevistaRecordado;
public:
    static CtrlMaterial* getInstancia();
    DtMaterial* recordarDatosMaterial(string codigo, string titulo, int anioPublicacion);
    DtLibro* recordarDatosLibro(DtMaterial* datosMaterial, string autor, int cantPaginas);
    DtRevista* recordarDatosRevista(DtMaterial* datosRevista, int nroEdicion, bool esMensual);
    void confirmarAgregarMaterial();
    void cancelarAgregar();
    Material* buscarMaterial(string codigo);
    set<Material*> listarMateriales();
};

#endif/* CTRLMATERIAL_H */