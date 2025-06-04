
#include <iostream>
using namespace std;
//esta clase se utiliza para declara cada una de las 6 evidencias por caso (18 en total)
class Evidencia {
    public: 
    string nombre;
    string contenidoEvidencia; //tratar de buscar algo mejor donde se pueda guardar todo lo de la evidencia 
    int puntosMorales; 
    int puntosPosiblesCaso; 
    string pregunta1 ;
    string pregunta2; 
    string pregunta3; 
    string pregunta4; 
    string pregunta5;  
public: 
    Evidencia(string nombre, string contenidoEvidencia, int puntosMorales, int puntosPosiblesCaso, string pregunta1, string pregunta2, string pregunta3, string pregunta4, string pregunta5){
       this -> nombre = nombre;
       this -> contenidoEvidencia = contenidoEvidencia;
        puntosMorales = puntosMorales;
        puntosPosiblesCaso = puntosPosiblesCaso;
        pregunta1 = pregunta1; 
        pregunta2 = pregunta2;
        pregunta3 = pregunta3;
        pregunta4 = pregunta4;
        pregunta5 = pregunta5;

    }

};

int main()
{
    Evidencia C1E1 ("Testimoino de la creatura", "esta evidenia es en la que hablamos con la creatura", 1, 4, "Porque crees que los humanos podriamos hacer esto?", "Es que alcazo tenemos que jugar a ser Dios ", "porque entonces se volvio violenta? ", "Porque no deberiamos meterlo a la carcel? ", "Pregunta5" );
    cout <<  C1E1.nombre<< endl; 
    cout <<  C1E1.contenidoEvidencia <<endl; 

    Evidencia C1E2 ( "Testimonio de Victor", "Apelaria al pueblo, pero que tanta credibilida tiene su palabra? ", 1, 2, "Pregunta 1 ", "Pregunta 2","Pregunta 3", "Pregunta 4", "Pregunta 5"  );
    cout << "prueba " << C1E2.nombre <<endl;
    cout << C1E2.contenidoEvidencia <<endl;



   
    return 0;
}
