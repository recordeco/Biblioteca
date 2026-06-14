#include "Libro.h"
#include "../dt/DtLibro.h"
Libro::Libro(string codigo, string titulo, int anioPublicacion, string autor, int cantPaginas) : Material(codigo, titulo, anioPublicacion) {
    this->autor = autor;
    this->cantPaginas = cantPaginas;
}

Libro::~Libro() {}
string Libro::getAutor() {
    return this->autor;
}
int Libro::getCantPaginas() {
    return this->cantPaginas;
}
void Libro::setAutor(string autor) {
    this->autor = autor;
}
void Libro::setCantPaginas(int cantPaginas) {   
    this->cantPaginas = cantPaginas;
}
bool Libro::esLibro() {
    return true;
}
DtLibro Libro::getDatosLibro() {
    return DtLibro(this->getCodigo(), this->getTitulo(), this->getAnioPublicacion(), this->autor, this->cantPaginas);
}