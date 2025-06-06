
#include <iostream>
#include <fstream> //esta libreria es para agregar archivos .txt
#include <cctype> // to lowercase some input from the user to minimize erros
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

class Jugador {
};

class Humanos {

};

class Personajes {
public: 
    string nombre; 
    string ocupacion; 
    string relacionConVictor; 
    int edad; 
    string testimonio; 

};

class Menu{
    void mostarMenuPrincipal();
    void seleccionarCargo();
};

//para esta clase, apreder el manejo de archivos .txt para poder cargar la evidencia desde afuera
class archivoManager{
    /*vector<Evidencia> cargarEvidencias (string ruta)
    vector<Personaje> cargarTestimonios (string ruta)
    void mostrarArchivo (string Ruta) // para mostrar una carta o ecena */
};


int main()
{
//variables usadas
char llegarTarde; //pregunta evelyn pq llegaste tarde
char pickUpEvidence; 
char victorPresentation; //eliges como presentarte a victor por primera vez

//Aqui hacer un un Array donde se guarde la Evidencia que se vaya recogiendo
//Aqui se aplicaria un metodo de para guardar el nombre del usuario en la clase Judador 

  
string linea; 
string victorExpediente;
ifstream archivo ("n1.txt");
ifstream victorFile ("victorCharacteristics.txt"); //vincula el expediente de victor 
ifstream afterVictorFile("refleccionDespuesDeLeerCaso.txt"); //vincula pesamientos despues de leer expediente
ifstream buscandoVictor("buscandoVictor.txt");


while (getline(archivo, linea)){    //esto ayuda a que se lea todo el texto del codigo
cout << linea << endl;

}

    cout << "Has llegado tarde " /*Insertar nombre de usuario de la clase jugador*/ << "que te ha pasado? \n" << endl;
    cout << "\nResponde la pregunta usado los literales proporcionados" << endl;

    while (true){
    cout << " a.)  Mi alarma no sono \n b.) Dile la verdad \n c.) Mi perro se murio \n ";
    cin >> llegarTarde;
    llegarTarde = tolower(llegarTarde); //hace que cualquier input sea minuscula

    if (llegarTarde =='a' || llegarTarde == 'c'){
        cout << "\nDeja de ser mentiroso " /*nombre de usuario*/<< ". \nTe vi en la cafeteria tomandote un espresso en mi camino al trabajo.\nSi vas a mentir al menos hazlo bien \n"; 
        break; 

    } else if (llegarTarde == 'b'){
        cout << "Tipico de ti! Debes de ser mas responsable con tu trabajo, de lo contrario tendre que reportarte con mi supervisor. \n";
        break;}
         
        else{cout << "Por favor, escoje una de las opcciones previamente mencionadas\n\n"; } }
    
    cout <<"Evelyn: \n";
    cout << " Mejor toma este archivo, este sera tu siguiente caso asignado\n";
    cout << " Es un cientifico loco que lo acusar de jugar a Dios y otras cosas\n\n";
    cout << "Presiona ''x'' para abrir este archivo\n\n";

    while (true){
         cin >> pickUpEvidence;
        if (pickUpEvidence == 'x'){
            //stores Victor files into "maletin"

            while(getline(victorFile,linea )){
                victorExpediente = victorExpediente+linea + "\n";
            } 
            victorFile.close(); // esto cierra la variable y ayuda a liberar memoria
            cout << victorExpediente<< endl;
            break; 
        }
        else{
            cout << "Por favor, presione ''x'' para seguir ";
        }
    }

    while (getline(afterVictorFile, linea)){ 
        cout << linea << endl;
    }

    cout << "Evelyn:";
    cout << "   Tienes dos horas para regresar con tu cliete antes de la audiencia inicial.";
    cout << "   De lo contrario no soy responsable de lo que te haga mi supervisor";


    while (getline(buscandoVictor, linea)){ 
        cout << linea << endl;
    }

    cout << "Como decides presentarte a Victor?";
    cout << "a.) De una manera fria"<< endl;
    cout << "b.) De una manera Empatica" << endl;

    cin >> victorPresentation; 
    victorPresentation = tolower(victorPresentation);

    if (victorPresentation == 'a'){
        cout << "Soy tu abogado, no quiero rodeos, dime porque estas aca;";
        break;
    }else if (victorPresentation == 'b')
    {
        cout << "Eres Victor no, yo soy" << /*nombre del jugador*/ "y sere tu abogado en este caso. Resperira profundo y cuentame. Como acabaste aqui?  ";
        break; 
    } else{
        cout << "Por favor, escoge la una de las respuestas proporcionadas";

      }
    

    









/*
    cout <<"-------------------------------------------------\n";
    Evidencia C1E1 ("\nTestimoino de la creatura", "esta evidenia es en la que hablamos con la creatura", 1, 4, "Porque crees que los humanos podriamos hacer esto?", "Es que alcazo tenemos que jugar a ser Dios ", "porque entonces se volvio violenta? ", "Porque no deberiamos meterlo a la carcel? ", "Pregunta5" );
    cout <<  C1E1.nombre<< endl; 
    cout <<  C1E1.contenidoEvidencia <<endl; 
    cout << "-------------------------------------------\n";
    Evidencia C1E2 ( "Testimonio de Victor", "Apelaria al pueblo, pero que tanta credibilida tiene su palabra? ", 1, 2, "Pregunta 1 ", "Pregunta 2","Pregunta 3", "Pregunta 4", "Pregunta 5"  );
    cout << "prueba " << C1E2.nombre <<endl;
    cout << C1E2.contenidoEvidencia <<endl;

*/

   
    return 0;

}