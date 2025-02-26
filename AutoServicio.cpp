#include <iostream>
#include "./AutoServicio.h"

using namespace std;

void AutoServicio::ListarPrecios(){
    
    cout << "------ Precio por Galon ------" << endl;
    cout << "Corriente: " << precios[0] << endl;
    cout << "Diesel: " << precios[1] << endl;
    cout << "Extra: " << precios[2] << endl;
    cout << "------------------------------" << endl;
}


void AutoServicio::Recargar(float dinero){
    
    saldo = dinero + saldo;
    
}


void AutoServicio::Tanquear(Carro* coche, int tipo){
    
    float gasolina = saldo/precios[tipo];
    float sobrante = coche->Tanquear(gasolina);
    saldo = precios[tipo]*sobrante;
    
}