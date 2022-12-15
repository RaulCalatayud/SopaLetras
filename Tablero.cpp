// Tablero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Tablero {
private:
    int size;
    char tablero[9][9];
public:
    char letras[25] = { 'A','B','C','D','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    Tablero(int t) {
        this->size = t;
    }
    int getSize() {
        return size;
    }
    void crearTablero();
    void imprimirTablero();
    int posicionIntroducción(int tamaño);
    void introducirPalabra(std::string& s);

};

void Tablero::crearTablero() {
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            int pos1 = ((rand() % 24) + 1);
            tablero[i][j] = letras[pos1];
        }
   }
}

void Tablero::imprimirTablero() {
    for (int i = 0; i < this->size; i++) {
        for (int j = 0; j < this->size; j++) {
            
            std::cout << tablero[i][j] << " , ";
        }
        std::cout << std::endl;
    }
}



void Tablero::introducirPalabra(std::string& s) {
    int size = s.length();
    int sizeTablero = this->getSize();
    switch (sizeTablero)
    {
    case 5:
        if (size > 5) std::cout << "No se puede introducir la palabra";
        else {
            int pos1 = ((rand() % 5) + 1);
            int pos2 = ((rand() % 5) + 1);
            for (int i = 0; i < size; i++) {
                //tablero[pos1][pos2] = s.charAt(i);
            }
        }
    default:
        break;
    }
    
}

int main()
{
    Tablero t1(5);
    t1.crearTablero();
    t1.imprimirTablero();

    std::string palabras[5] = { "Hola", "Luna" };

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
