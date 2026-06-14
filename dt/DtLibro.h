#ifndef DTLIBRO_H
#define DTLIBRO_H
#include <string>
using namespace std;
#include "DtMaterial.h"
class DtLibro : public DtMaterial{
private:
    string codigo;
    string titulo;
    int anioPublicacion;
    string autor;
    int cantPaginas;
public:
    DtLibro(string codigo, string titulo, int anioPublicacion, 
            string autor, int cantPaginas);
    string getCodigo();
    string getTitulo();
    int getAnioPublicacion();
    string getAutor();
    int getCantPaginas();
};

#endif /* DTLIBRO_H */