#ifndef AUTOSERVICIO

#define AUTOSERVICIO

#include "./Carro.h"

class AutoServicio{
    
    public:
        //AutoServicio();
        void ListarPrecios();
        void Recargar(float dinero);
        void Tanquear(Carro* coche, int tipo);
        float saldo = 0;
        
    private:
        float precios[3] = {15000, 11800, 19700};
    
};

//AutoServicio::AutoServicio(){
   
//}


#endif 
