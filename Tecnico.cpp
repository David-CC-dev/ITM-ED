#include "./Tecnico.h"

void Tecnico::Tanquear(Carro* automovil, float gasolina){
    
    automovil->Tanquear(gasolina);
    
}

void Tecnico::Recargar(AutoServicio* maquina, float dinero){
    
    maquina->Recargar(dinero); 
    
}