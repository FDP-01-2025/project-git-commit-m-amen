#include <iostream>
#include <string>
using namespace std;

// Definimos el struct Jugador
struct Jugador {
    string nombreJugador;
};

int main() {
    Jugador jugador; // Creamos una variable de tipo Jugador

    cout << "Por favor, ingresa tu nombre: ";
    getline(cin, jugador.nombreJugador); // Leemos el nombre completo (puede tener espacios)

    cout << "El nombre guardado es: " << jugador.nombreJugador << endl;

return 0;
}