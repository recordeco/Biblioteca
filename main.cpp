#include <iostream>
using namespace std;
#include <set>
#include "controladores/ICtrlSesion.h"
#include "controladores/ICtrlUsuario.h"
#include "controladores/CtrlSesion.h"
#include "controladores/CtrlUsuario.h"
#include "manejadores/ManejadorUsuario.h"
#include "dt/DtFuncionario.h"
#include "Fabrica.h"

int main() {
    Fabrica* f = Fabrica::getInstancia();
    ICtrlUsuario* icUsuario = f->getICtrlUsuario();
    ICtrlSesion* icSesion = f->getICtrlSesion();
    
    DtFuncionario* DtRoot = icUsuario->registrarFuncionarioNuevo("root","root","root",0);
    icUsuario->confirmarRegistro();
    
    cout << "1 - Iniciar Sesion\n" ;
    cout << "2 - Salir\n" ;
    cout << "Opcion: " ;
    int num = 0;
    cin >> num;
    cout << "\n \n" ;
    
    switch (num) {
        case 1:{
            string id;
            string pass;
            cout << "ID: " ;
            cin >> id;
            
            cout << "PASSWORD: " ;
            cin >> pass;
            cout << "\n" ;
            
            bool ingresarDatos = icSesion->ingresarDatos(id,pass);
            bool cancela = false;
            
            if (ingresarDatos == true) {
                icSesion->iniciarSesion();
            } else { 
                while (!ingresarDatos && !cancela) {
                    int opcion;
                    cout << "Las credenciales no son correctas.\n\n" ;
                    cout << "1 - Intentar nuevamente\n" ;
                    cout << "2 - Salir\n" ;
                    cout << "Opcion: " ;
                    cin >> opcion;
                    cout << "\n" ;
                    if (opcion == 1) {
                        cout << "ID: " ;
                        cin >> id;
                        cout << "PASSWORD: " ;
                        cin >> pass;
                        cout << "\n" ;
                        
                        ingresarDatos = icSesion->ingresarDatos(id,pass);
                        if (ingresarDatos == true) {
                            icSesion->iniciarSesion();
                        }
                    } else {
                        cancela = true;
                    }
                }
            }
            break;
        }
        case 2:{
            break;
         }
}    
    
    
    
    
    
    
    
    
}

