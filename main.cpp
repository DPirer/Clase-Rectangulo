#include <iostream>
#include <stdlib.h>

using namespace std;

// CREAMOS LAS CLASES
class Rectangulo{
    private:
        float largo;
        float ancho;

    public:
        // Constructor
        Rectangulo(float,float);

        // Metodos
        void perimetro();
        void area ();
};


// INICIALIZAMOS LOS ATRIBUTOS
Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
}


// DEFINIMOS LAS FUNCIONES
void Rectangulo::perimetro(){
    float salida = 2*largo + 2*ancho;

    cout<<"El perimetro es: "<<salida<<endl;
}

void Rectangulo::area(){
    float salida = largo * ancho;

    cout<<"El area es: "<<salida<<endl;
}


// MAIN
int main()
{
    // Creamos un objeto y lo inicializamos
    Rectangulo r1(11,7);

    // Y llamamos a las funciones de la case Rectangulo
    r1.perimetro();
    r1.area();

    system("pause");
    return 0;
}
