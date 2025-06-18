// mover todos los structs a sus propios documentos .h
#include <iostream>
#include <fstream> //esta libreria es para agregar archivos .txt
#include <cctype> // to lowercase some input from the user to minimize erros
#include "Evidencia.h" // usa libreria archivo evidencia
using namespace std;

struct Jugador { //este struct sirve para ir guardando las estadisticas del usuario
    string nombreJugador;
    int puntosMoraliadaTotales;
    int puntosJuicioTotales;
};

struct cargo{ //este struct sirve para ir guardando los cargos 
    string nombreCargo; 
    int puntosJuicioParaGanar; 
    int puntosMoraliadBien;
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
char llegarTarde; 
char pickUpEvidence; 
char victorPresentation;
char victorOption, confirm;
int optionEvidencia;



//Nombre de las Evidencias del Caso 1 con sus respectivos Puntajes 
Evidencia e1, e2, e3, e4, e5, e6;

e1.nombreEvidencia = "No Status de la creatura";
e1.tiempo = 3;
e1.puntosMoralidad = 2;
e1.puntosPosibles = 6;

e2.nombreEvidencia = "Testimonio de la creatura";
e2.tiempo = 4;
e2.puntosMoralidad = 1;
e2.puntosPosibles = 8;

e3.nombreEvidencia = "Propio Testimoio de Victima";
e3.tiempo = 1;
e3.puntosMoralidad = 4;
e3.puntosPosibles = 2;

e4.nombreEvidencia = "Diario de Victor";
e4.tiempo = 3;
e4.puntosMoralidad = 2;
e4.puntosPosibles = 6;

e5.nombreEvidencia = "Testimonio de Padre Vander";
e5.tiempo = 1;
e5.puntosMoralidad = 4;
e5.puntosPosibles = 2;

e6.nombreEvidencia = "Argumento Bien Comun";
e6.tiempo = 2;
e6.puntosMoralidad = 3;
e6.puntosPosibles = 4;


//Aqui hacer un un Array donde se guarde la Evidencia que se vaya recogiendo
//Aqui se aplicaria un metodo de para guardar el nombre del usuario en la clase Judador 




//llama a los archivos en carpeta textFiles para ser leeidos
string linea; 
string victorExpediente;
ifstream archivo ("textFiles/n1.txt");
ifstream victorFile ("textFiles/victorCharacteristics.txt"); //vincula el expediente de victor 
ifstream afterVictorFile("textFiles/refleccionDespuesDeLeerCaso.txt"); //vincula pesamientos despues de leer expediente
ifstream buscandoVictor("textFiles/buscandoVictor.txt");
ifstream victorArrepentido("textFiles/VictorArrepentido.txt");
ifstream case1Evidence1txt("textFiles/case1Evidence1.txt");
ifstream victorInfancia ("textFiles/victorInfancia.txt");
ifstream victorCreacionCreatura ("textFiles/victorCreacionCreatura.txt");
ifstream victorHowCarcel ("textFiles/victorHowCarcel.txt");
ifstream HistoriaCase1 ("textFiles/HistoriaCase1.txt");




cout << "Ingresa tu nombre";
//hacer un cin en donde se guarde el nombre del usuario en la variable nombreJugador del Struct: Jugador

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
            //make something to store Victor files into "maletin"

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
        cout << "Usuario: "<< endl;
        cout << "   Soy tu abogado, no quiero rodeos, dime porque estas aca;"<< endl;
        cout << "Victor: "<< endl;
        cout << "   Si... soy yo. Dime, que tienes en mente? "<< endl;
    }else if (victorPresentation == 'b')
    {
       cout << "Usuario: "<< endl;
        cout << "   Eres Victor no, yo soy" << /*nombre del jugador*/ "y sere tu abogado en este caso. Resperira profundo y cuentame. Como acabaste aqui?  "<< endl;
        cout << "*Victor solo se queda viendo a la nada sin decir nada, solo ves que mil y un pensamientos pasan por su mente * "<< endl;
        cout << "   Victor, se que puede ser dificil pero, por que no me explicas como fue que paso todo?\n Tienes a medio pueblo que te quiere ver colgado, si quieres salir de aqui...\n Necesitare que me cuentes como es que has terminado en esta situacion" << endl;
        cout << "Victor: "<< endl;
        cout << "   Perdon... mucho pensar en lo que me aguarda el futuro esta haciendo que pierda la cordura.\n";
    
    } else{
        cout << "Por favor, escoge la una de las respuestas proporcionadas";

      }
    
    while (getline(victorArrepentido, linea)){ 
        cout << linea << endl;
    }


cout << "Que te gustaria preguntarle a Victor Primero?\n";
cout << " a). ¿Como fue tu infancia?\n b). ¿Como hiciste a la craitura?\n c). ¿Como terminaste en la carcel en si?"<< endl;
cin >> victorOption;
victorOption = tolower(victorOption);

if (victorOption == 'a'){
    while (getline(victorInfancia, linea)){
        cout << linea << endl;
    }
victorInfancia.close();
} else if (victorOption == 'b'){
    while (getline(victorCreacionCreatura, linea)){
        cout << linea << endl;
    }
victorCreacionCreatura.close();
} else if (victorOption == 'c'){
    while (getline(victorHowCarcel, linea)){
    cout << linea << endl;
}
victorHowCarcel.close();

}else{
    cout << "Por favor, escoge la una de las respuestas proporcionadas";
}

 cout << "Usuario: "<< endl;
 cout << "  Ya que tocamos el tema de los cargos... Creo que es hora que hablemos de ellos"<<endl;

 cout << "Victor: "<< endl;
 cout << "  Si... creo que tienes razon " /*nombre del usuario*/ << ". \n   Dime, de que cargos estoy siento inputado."<< endl;
 
while (getline(HistoriaCase1, linea)){
    cout << linea << endl;
}

HistoriaCase1.close();

cout << "\nVictor: ";
do{
cout << "Cual Evidencia quieres escuchar?  \n";
cin >> optionEvidencia;

switch (optionEvidencia){
case 1:
    cout << "Nombre de Evidencia: " << e1.nombreEvidencia << endl;
     while (getline(case1Evidence1txt, linea)){ 
        cout << linea << endl;
    }
    case1Evidence1txt.close();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 2:
    cout << "Nombre de Evidencia: " << e2.nombreEvidencia << endl;
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;
}
}
    while (confirm != 's' && confirm != 'S');

    return 0;


}

 //Aqui hacer un loop de evidencia que se pueden crear en un vector y que
 //a medida el juagador vaya seleccionando las evidencia del caso1 estas 
 //vayan desaparaciendo del menu.
 //guardar la seleccion de evidencia tal vez en otro vector, en el que se pueda acceder a cualquier rato 

 //hacer cada uno de estos para cada caso. Los casos estan en Notion

    




    





/*
 while (getline(case1Evidence1txt, linea)){ 
        cout << linea << endl;
*/