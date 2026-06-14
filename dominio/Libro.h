#ifndef LIBRO_H
#define LIBRO_H
#include "Material.h"
#include "../dt/DtLibro.h"
class Libro : public Material {
private:
    string autor;
    int cantPaginas;
public:
    Libro(string codigo, string titulo, int anioPublicacion, string autor, int cantPaginas);
    ~Libro();
    string getAutor();
    int getCantPaginas();
    void setAutor(string autor);
    void setCantPaginas(int cantPaginas);
    bool esLibro();
    DtLibro getDatosLibro();
};
#endif /* LIBRO_H */