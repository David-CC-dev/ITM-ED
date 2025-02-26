#include "./Tecnico.h"

int main(){
    
    Carro goku;
    Tecnico vegeta;
    
    Carro* ptr = &goku;
    
    vegeta.Tanquear(ptr,20);
    
    goku.Informacion();
    
    //cout << "sobrante: " << sobrante << endl;
    
    AutoServicio maquina;
    
    maquina.ListarPrecios();
    //maquina.Recargar(1000);
    vegeta.Recargar(&maquina, 300000);
    vegeta.Recargar(&maquina, 200000);
    vegeta.Recargar(&maquina, 200000);
    
    goku.Informacion();
    maquina.Tanquear(&goku,0);
    goku.Recorrer(100);
    goku.Informacion();
    cout << maquina.saldo;
    
    return 0;
}