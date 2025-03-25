#include <iostream>
using namespace std;

class Coche{
    public:
    Coche(){
        this->precio = 150000;
        this->color = "gris";
        this->marca = "Toyota";
    }
    
    void manejar(){
        cout << "El auto está conduciendo en este momento" << endl;
    }
    void detener(){
        cout << "El auto se ha detenido" << endl;
    }

    void setColor(string color){
        this->color = color;
    }
    private:
    int precio;
    string color;
    string marca;
};


int main(){


    return 0;
}