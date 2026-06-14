#include "DtLibro.h"
DtLibro::DtLibro(string codigo, string titulo, int anioPublicacion, 
                 string autor, int cantPaginas) : DtMaterial(codigo, titulo, anioPublicacion) {
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}
string DtLibro::getCodigo() {
    return DtMaterial::getCodigo();
}
string DtLibro::getTitulo() {
    return DtMaterial::getTitulo();
}
int DtLibro::getAnioPublicacion() {
    return DtMaterial::getAnioPublicacion();
}
string DtLibro::getAutor() {    
    return this->autor;
}
int DtLibro::getCantPaginas() {
    return this->cantPaginas;
} 