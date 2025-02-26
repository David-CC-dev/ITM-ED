#ifndef TECNICO

#define TECNICO

#include "./Carro.h"
#include "./AutoServicio.h"

class Tecnico{
    
    public:
        void Recargar(AutoServicio* maquina, float dinero);
        void Tanquear(Carro* automovil, float gasolina);    
    
};


#endif 