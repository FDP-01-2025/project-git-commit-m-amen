
#include <iostream>
#include <fstream> //this library helps import  .txt files
#include <cctype> // to lowercase some input from the user to minimize erros
#include "headerFiles/evidencia.h" // imports the header for evidence
#include "headerFiles/otherTxtFiles.h"
using namespace std;

int main()
{
//variables usadas
char llegarTarde; 
char pickUpEvidence; 
char victorPresentation;
char victorOption, confirm;
int optionEvidencia;


cout << "Ingresa tu nombre"; //hacer un cin en donde se guarde el nombre del usuario en la variable nombreJugador del Struct: Jugador
txtDialogFall.showLongDialog(); /*Insertar nombre de usuario de la clase jugador*/ 
cout << whyArriveLate.character << whyArriveLate.characterDialog;

while (true){ //esto necesitamos hacerlo en un nuevo archivo, para solo llamarlo que corra en el main. 
    cout << "\n\n a.)  Mi alarma no sono \n b.) Dile la verdad \n c.) Mi perro se murio \n ";
    cin >> llegarTarde;
    llegarTarde = tolower(llegarTarde); //hace que cualquier input sea minuscula

        if (llegarTarde =='a' || llegarTarde == 'c'){
            cout << llegarTardeA.character << llegarTardeA.characterDialog;
            break; 
        } 
        else if (llegarTarde == 'b'){
            cout << llegarTardeB.character << llegarTardeB.characterDialog;
            break;
        }
        else{
            cout << "Por favor, escoje una de las opcciones previamente mencionadas\n\n"; 
        }
}
evelynTakeArchive.showLongDialog(); //keeps the diaglog ongoign
    while (true){
    cin >> pickUpEvidence;
        if (pickUpEvidence == 'x'){
            //make something to store Victor files into "maletin"
            victorInformation.showLongDialog();// shows Victor Charges file 
            break;
        }
        else{
            cout << "Por favor, presione ''x'' para seguir ";
        }
    }

refleccionAfterReadingFile.showLongDialog();
youHave2hrs.showShortDialog(); //more dialog of Evelyn
looking4Victor.showLongDialog();

cout << "Como te le presentarias a Victor? \n a). Buena Manera \n b). Ir al grano ";
cin >> victorPresentation; 
victorPresentation = tolower(victorPresentation);

    if (victorPresentation == 'a'){
       victorPresentationA.showLongDialog();
    }else if (victorPresentation == 'b'){
     victorPresentationB.showLongDialog();
    } else{
        cout << "Por favor, escoge la una de las respuestas proporcionadas";
      }

victorRegretful.showLongDialog();


cout << "Que te gustaria preguntarle a Victor Primero?\n";
cout << " a). ¿Como fue tu infancia?\n b). ¿Como hiciste a la craitura?\n c). ¿Como terminaste en la carcel en si?"<< endl;
cin >> victorOption;
victorOption = tolower(victorOption);

if (victorOption == 'a'){
    victorChildhodd.showLongDialog();
} else if (victorOption == 'b'){
    victorMakingofCreature.showLongDialog();
} else if (victorOption == 'c'){
    victorHowCarcel.showLongDialog();
}else{
    cout << "Por favor, escoge la una de las respuestas proporcionadas";
}

 cout << "Usuario: "<< endl;
 cout << "  Ya que tocamos el tema de los cargos... Creo que es hora que hablemos de ellos"<<endl;

 cout << "Victor: "<< endl;
 cout << "  Si... creo que tienes razon " /*nombre del usuario*/ << ". \n   Dime, de que cargos estoy siento inputado."<< endl;
 
HistoriaCase1.showLongDialog(); 
cout << "\nVictor: ";
do{ // me agrada mucho la idea, pero me gustaria que en vez de preguntarle de un solo si quiere usar la evidencia, que le deje revisar toda la evidencia y despues que escoga volverla a ver o escogerla
cout << "Cual Evidencia quieres escuchar?  \n";
cin >> optionEvidencia;

switch (optionEvidencia){
case 1:
    cout << C1E1.nombreEvidencia << endl;
    C1E1.imprimir();
    
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 2:
    cout << C1E2.nombreEvidencia << endl;
    C1E2.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 3: 
    cout << C1E3.nombreEvidencia << endl; 
     C1E3.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;     
    break;

case 4: 
     C1E4.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;     
    break;

case 5:
     C1E5.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

case 6:
     C1E6.imprimir();
    cout << "Estas seguro de utilizar esta evidencia s/n \n";
    cin >> confirm;
    break;

    
}



}
    while (confirm != 's' && confirm != 'S'); // Para reemplazar el &&, se puede usar el 'to.LowerCase' method para que lo haga minuscula sin
                                              // importar el output

    return 0;


}

 //Aqui hacer un loop de evidencia que se pueden crear en un vector y que
 //a medida el juagador vaya seleccionando las evidencia del caso1 estas 
 //vayan desaparaciendo del menu.
 //guardar la seleccion de evidencia tal vez en otro vector, en el que se pueda acceder a cualquier rato 

 //hacer cada uno de estos para cada caso. Los casos estan en Notion

    


