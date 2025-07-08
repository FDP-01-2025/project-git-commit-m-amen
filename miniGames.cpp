#include "headerFiles/minigames.h"
#include "headerFiles/otherTxtFiles.h"
#include "headerFiles/Jugador.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // this helps exit the game once executed
#include <algorithm>
using namespace std;

//Long Dialogs  for Case1 Evidence2
gameFilesPrint C1E2IntroThought = {"miniGamesTxtFiles/case1/evidence2/introThought.txt"};
gameFilesPrint fishermannMiniGameDialog = {"miniGamesTxtFiles/case1/evidence2/pescadoresForMinijuego.txt"};
gameFilesPrint pescadorDialog = {"miniGamesTxtFiles/case1/evidence2/pescadorDialog.txt"};
gameFilesPrint eleccionCarruaje = {"miniGamesTxtFiles/case1/evidence2/eleccionCarruaje.txt"};
gameFilesPrint CustomsFrancePreQuestions = {"miniGamesTxtFiles/case1/evidence2/CustomsFrancePreQuestions.txt"};
gameFilesPrint afterClearingCustoms = {"miniGamesTxtFiles/case1/evidence2/afterClearingCustoms.txt"};
gameFilesPrint ifYellAtCreatureFile = {"miniGamesTxtFiles/case1/evidence2/ifYellAtCreature.txt"};
gameFilesPrint silenceAfteraskingCreaturehelp = {"miniGamesTxtFiles/case1/evidence2/silenceAfteraskingCreaturehelp.txt"};
gameFilesPrint creaturesCreation = {"miniGamesTxtFiles/case1/evidence2/creaturesCreation.txt"};
//Short Dialogs for Case1Evidence2
Dialog customsYouAintGoingCuzOfThat = {"Oficial de Anuadas: ", "    Acabamos de hablar con su cochero, el dice otra cosa.   Tiene que acompañarnos"};
Dialog askCreaturaToHelpVictor = {"", " Soy el abogado de Victor, vengo en sol de paz"};
Dialog creatureteTellsYouGoAway = {"Creatura: ", "  \n¡LARGATE DE AQUÍ, ALEMENOS QUE QUIERAS MORIR!"};
Dialog whyYouWentToSeeCreature = {"Le respondes: ", "\nEstoy aquí porque Víctor está en la cárcel. Y necesito tu ayuda"};
Dialog notHereToListenHimBlindly = {"Le respondes: ", "   ¡No estoy aquí para defenderlo a ciegas! ¡Quiero escuchar tu versión!"};
Dialog creatureDidntBelieveYourReason = {"Creatura: ", "    Eres un mentiroso. PORQUE TODOS LOS HUMANOS MIENTEN?"};


//Long Dialogs Case 1 evidence 4

gameFilesPrint firstDialogC1 = {"miniGamesTxtFiles/case1/evidencia4/firstDialog.txt"};
gameFilesPrint dialogHouse234 = {"miniGamesTxtFiles/case1/evidencia4/dialog234.txt"};
gameFilesPrint dialogHouseRed = {"miniGamesTxtFiles/case1/evidencia4/dialogHouse.txt"};
gameFilesPrint endDay = {"miniGamesTxtFiles/case1/evidencia4/EndDay.txt"};

//Long Dialog Case 1 evidence 6

gameFilesPrint firstDialogC1E6 = {"miniGamesTxtFiles/case1/evidence6/dialogoComplete.txt"};
gameFilesPrint endDialog = {"miniGamesTxtFiles/case1/evidence6/dialogAfter.txt"};

//Short Dialog for case2Evidence3

////////////////////////////////////////////////////////////////

//Long Dialogs for Case2Evidence1
gameFilesPrint C2E2IntroThought = {"miniGamesTxtFiles/case2/evidence1/c2e2IntroThought.txt"};
gameFilesPrint ifGoIntoBar = {"miniGamesTxtFiles/case2/evidence1/ifGoIntoBar.txt"};
gameFilesPrint goToMonja = {"miniGamesTxtFiles/case2/evidence1/goToMonja.txt"};
gameFilesPrint begginingDay2 = {"miniGamesTxtFiles/case2/evidence1/begginingDay2.txt"};
gameFilesPrint begginingDay3 = {"miniGamesTxtFiles/case2/evidence1/begginingDay3.txt"};
gameFilesPrint drunkManDialog = {"miniGamesTxtFiles/case2/evidence1/drunkManDialog.txt"};
gameFilesPrint ancianaSellingLettuce ={"miniGamesTxtFiles/case2/evidence1/ancianaSellingLettuce.txt"};
gameFilesPrint begginingDay4 = {"miniGamesTxtFiles/case2/evidence1/begginingDay4.txt"};

//Long Dialogs for Case2Evidence2
gameFilesPrint C2Intro = {"miniGamesTxtFiles/case2/evidence2/c2e2Intro.txt"};
gameFilesPrint biblioConver = {"miniGamesTxtFiles/case2/evidence2/bliblioConver.txt"};
gameFilesPrint ConversationBiblio2 = {"miniGamesTxtFiles/case2/evidence2/biblioConver2.txt"};
gameFilesPrint StartDay6 = {"miniGamesTxtFiles/case2/evidence2/startDay6.txt"};
gameFilesPrint postOption = {"miniGamesTxtFiles/case2/evidence2/postOption.txt"};

//Long Dialogs for Case2Evidence3
gameFilesPrint C2E3intro = {"miniGamesTxtFiles/case2/evidence3/intro.txt"};
gameFilesPrint Newspaper = {"miniGamesTxtFiles/case2/evidence3/newspaper.txt"};
gameFilesPrint historyTravel = {"miniGamesTxtFiles/case2/evidence3/historyTravel.txt"};
gameFilesPrint firstDialog = {"miniGamesTxtFiles/case2/evidence3/dialog.txt"};
gameFilesPrint xDays = {"miniGamesTxtFiles/case2/evidence3/dialog.txt"};
gameFilesPrint dialogDr = {"miniGamesTxtFiles/case2/evidence3/dialog2.txt"};



//They are for passportFunction
int electionPassportToFrance = -1; //-1 means no election yet This funtion will check that the user picked the passport from France
int electionPassportToItaly = -1;

//actions of the game 
string turnOnLintern; 
string test  = "this serves as a test to see if the reuturn false actually works";

//this is the funtion of the game that allows the user to go thorught the different types of options
//until he htis the right one. This is the General Code for all the other ones that follow

void minigameChoice(const string& prompt, const vector<string>& options, int correctIndex) {
    vector<bool> alreadyTried(options.size(), false);
    int choice;

    while (true) {
        cout << "\n" << prompt << "\n";
        for (size_t i = 0; i < options.size(); ++i) { 
            cout << i + 1 << ". " << options[i] << "\n";
        }

        cout << "\nTu elección: ";
        cin >> choice;

        if (choice < 1 || choice > options.size()) {
            cout << "Opción inválida.\n";
            continue;
        }

        int idx = choice - 1;

        if (alreadyTried[idx]) {
            cout << "Ya intentaste con esa opción. Prueba otra.\n";
            continue;
        }

        alreadyTried[idx] = true;

        if (idx == correctIndex) {
            cout << "\n¡Correcto!\n";
            break;
        } else {
            cout << "\nEsa opción no es la correcta.\n";
        }
    }
}

//minigameChoiceWithResults eliminates all but the right answer
//this is the new version of minigameChoice but better lol, it makes user input the answers for different scenarios 
int minigameChoiceWithResult(const string& prompt, const vector<string>& options, vector<bool>& alreadyTried) {
    int choice;

    while (true) {
        cout << "\n" << prompt << "\n";
        for (size_t i = 0; i < options.size(); ++i) {
            if (!alreadyTried[i]) {
                cout << i + 1 << ". " << options[i] << "\n";
            }
        }

        cout << "\nTu elección: ";
        cin >> choice;

        if (choice < 1 || choice > (int)options.size()) {
            cout << "Opción inválida. Intenta de nuevo.\n";
            continue;
        }

        int idx = choice - 1;

        if (alreadyTried[idx]) {
            cout << "Ya intentaste esa opción. Prueba otra.\n";
            continue;
        }

        alreadyTried[idx] = true;  // marcar como ya intentada
        return idx;
    }
}


bool minigameBoolResult(const string& prompt, const vector<string>& options, int correctIndex, int& userChoice){
    vector<bool> alreadyTried(options.size(), false);
    int election;
    

    while (true) {
        cout << "\n" << prompt << "\n";
        for (size_t i = 0; i < options.size(); ++i)
        {
              cout << i + 1 << ". " << options[i] << "\n";
        }
        cout << "\nTu eleccion: ";

        cin >> election; 

        if (election < 1 || election > static_cast<int>(options.size())) //research this troughtly
        {
            cout << "opcion invalida. Selecciona una dentro del rango seleccionado";
            continue;
        }
        int idx = election -1 ; 
        if (alreadyTried[idx])
        {
            cout << "Ya consideraste este objeto, escoge otro. \n";
            continue;
        }
        alreadyTried [idx] = true;
        userChoice = election; 
        return (idx == correctIndex);   
        
    }  

}

//based on minigameChoiceWithResult it ask the user once and ends it 
int promptOnce(const string& question, const vector<string>& options) {
    int choice;
    cout << "\n" << question << "\n";
    for (size_t i = 0; i < options.size(); ++i) {
        cout << i+1 << ". " << options[i] << "\n";
    }
    cout << "\nTu elección: ";
    cin >> choice;
    if (choice < 1 || choice > (int)options.size()) {
        cout << "Opción inválida. Asumiré la primera.\n";
        return 1;  
    }
    return choice;  // 1‑based
}


//C1E2
void playFishermanMiniGrame(){ // this funtion is for the fisherman minigame
    string fishermanText = getDialogAsString(fishermannMiniGameDialog);
    vector<string> opciones = {"Joven de barba larga, sombrero gris, canoa verde y azul. ", 
        "Persona mayor, sombrero gris, canoa verde con azul. ",
        "Persona mayor, sombrero azul con gris, canoa verde",
        "Persona mayor, sombrero gris, canoa azul con verde"
    };
    int correctAnswer  = 3; // forth option is correct
    minigameChoice(fishermanText, opciones, correctAnswer );
}
bool minigamePassportFromGenivaToFrance(){ // this funtion is to pick the passport for France
        string question = "Para este viaje necesitas escoger el objeto que es primordial para tu viaje.Escoge el objecto que quieres llevar a Parc National de Forêts, en Francia: ";
    vector<string> options = {
        "Perfume", 
        "Linterna", 
        "Pasaporte", 
    };
       
    int userChoice =  promptOnce(question, options);
    if (userChoice ==3)
    {
        return true;
    }
    else {return false;}
    
    
}
bool chosingHorseCar(){
    string question = "¿Que coche tomar? ";
    vector<string> options = {
        "Bugnières",
	    "Versalles",
	    "Bulgaria", 
	    "Berlín",
	    "Varsovia"
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=1)
    {
        
        return false; 
    }
    else{return true;}
    
    
}
bool customsWhereYouGoing(){
    string question = "";
    vector<string> options = {
        "Bugnières",
	    "Versalles",
	    "Bulgaria", 
	    "Berlín",
	    "Varsovia"
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=1)
    {
        return false; 
    } else
    {
        return true;
    }
    


}
bool customsWhyAreYouGoing(){
    string question = "¿Porque se dijire a Bugnières? ";
    vector<string> options = {
        "Visitar a un familiar",
	    "Visitar a un amigo",
	    "Recolectar Evidencia de un caso", 
	    "Para organizrme con la comunidad de Bugnières",
    };
    
    int userChoice =  promptOnce(question, options);

    if (userChoice!=3)
    {
        return false; 
    }
    else{return true;}
    
}
void customsCheckYourPassport(){
    cout << "Oficial de Audanas: ";
    cout << "   Me permite ver su pasaporte, porfavor";

    if (electionPassportToFrance == 2 )
    {
        cout << "Oficial de Aduana: ";
        cout << "   Muy bien! puede entrar a Francia";
    }
    else{
        cout << "Oficial de Aduana: ";
        cout <<"    Lo lamento, usted no puede pasar a Francia ";} 

    
}
//fix the bools accorditly like the ones downwards
bool ifYellAtCreature(){ //fixed. Now ends
        string question = "¿Qué decides hacer? ";
    vector<string> options = {
        "Gritarle a la creatura ",
	    "Hablarle suavemente"
    };
    int election = 1; 
    int userChoice = -1; 
    bool result =  minigameBoolResult(question, options, election-1, userChoice);

    if (userChoice == 2)// which means if user choice was number 1 
    {
        cout << "Usuario:   ";
        cout << "   Creatura, vengo en sol de paz";
        return true; 
    }
    else{
        cout << "Usuario: \n";
        cout <<"    CREATURA, VEN HACIA ACA Y HABLA CONMIGO\n\n";
        cout << "Al tu haberle gritado, la creatura se acerca y te elimina. ";
        exit(EXIT_SUCCESS);
    } 
}

bool whyShouldCreatureHelpVictor(){
    string question = "Creatura: \n     ¿POR QUÉ HE YO DE AYUDARLE?! ¡EL SE LO BUSCO!";
    vector<string> options = {
       "¡Porque si no lo haces, tú también pagaras por sus crímenes!",
       "¡Tú eres tan monstro como el si no haces nada!",
       "¡Este es tu momento de vengarte! ¡Testifica contra el! ",
       "¡No estoy aquí para defenderlo a ciegas! ¡Quiero escuchar tu versión!"
    };
    int election = 3; 
    int userChoice = -1; 

    bool result =  minigameBoolResult(question, options, election-1, userChoice);
    if (userChoice == 4)
    {
       notHereToListenHimBlindly.showShortDialog();
       return true; 

    }
    else{
        creatureDidntBelieveYourReason.showShortDialog();
        cout << "La creatura se acerca con su velocidad increible y te mata";
        exit(EXIT_SUCCESS);
    }
    
}
bool whatDidThatCreature(){ //now dies
    string question = "¿Qué deberías preguntarle a la creatura?";
    vector<string> options = {
       "Por qué mataste a William? ¡El solo era un niño! ",
       "¿Hiciste lo que hiciste por venganza?",
       "¿Tu mastate a todos? ¿Seguro que no fue otra persona?  ",
       "Quiero saberlo todo. Desde el inicio"
    };
  
    int userChoice =  promptOnce(question, options);
    if (userChoice == 4)
    {
       return true; 
    }
    else{
        cout << "La Creatura se aleja y ya no hay nada mas que puedas hacer en este caso";
        return false;
      
    }
} 


//In here, all the declared files so the user can just play them on the main.cpp
void playCase1Evidence2(){
    C1E2IntroThought.showLongDialog();
    playFishermanMiniGrame();
    pescadorDialog.showLongDialog();
    bool passportOnYou = minigamePassportFromGenivaToFrance();
    eleccionCarruaje.showLongDialog();

    bool rightHorse = chosingHorseCar();
    if(!rightHorse){ cout << "Viajaste en el carruaje inadecuado, Te das cuenta muy tarde y no puedes hacer nada mas que ";
                                 cout << "por no haber puesto atencion, ahora ya no puedes hacer esta evidencia"; return;}
                                 
    CustomsFrancePreQuestions.showLongDialog();

    bool didntLieToCustoms = customsWhereYouGoing();
    if (!didntLieToCustoms)
    {
    cout << "Oficial de Aduana: \n";
    cout << "   Acabo de hablar con su chofer. EL me dice que van a para un lugar totalmente diferente.\n   Su entrada ha sido negada\n";return;
    }
   
    bool whereYouGoing = customsWhyAreYouGoing();
    if (!whereYouGoing)
    {
        customsYouAintGoingCuzOfThat.showShortDialog();
        return;
    }
    
    if (!passportOnYou)
    {
        cout << "Oficial aduanero: ";
        cout << "   Usted no tiene su pasaporte. Lo lamento pero no puede pasar"; return;
    }
    
    afterClearingCustoms.showLongDialog();
    cin >> turnOnLintern; 
    ifYellAtCreatureFile.showLongDialog();
    ifYellAtCreature(); // if you yell at the creature, you die lol 
    askCreaturaToHelpVictor.showShortDialog();
    creatureteTellsYouGoAway.showShortDialog();
    whyYouWentToSeeCreature.showShortDialog();
     whyShouldCreatureHelpVictor();
    silenceAfteraskingCreaturehelp.showLongDialog();
    bool keepGoingAfterCreature = whatDidThatCreature();
    if (!keepGoingAfterCreature) 
    {
        cout << "La Creatura se aleja y ya no hay nada mas que puedas hacer en este caso";
        return;
    }
    creaturesCreation.showLongDialog();
    
}

//______________________________________________________________________________


//C2E1:Testimonio del Padre Jesuita 
void lookForPriestKenovitz(){
    string question = "Donde Quieres buscar?";
    vector<string> places = {"Bar", "Basilica de San Pedro en Ginebra", "Rio Rhône"};
    vector<bool> alreadyFound(places.size(), false);
    bool found = false;

    while(!found && count(alreadyFound.begin(), alreadyFound.end(),true)< (int)places.size()){
        int election = minigameChoiceWithResult("Donde buscaras al padre Kenonitz?", places, alreadyFound);

        switch (election)
        {
        case 0: // this case is the the Bar
            ifGoIntoBar.showLongDialog();
            break;

        case 1: // this case is the the Basilic 
            goToMonja.showLongDialog();
            found = true;
            break;

        case 2: // this case is the the river
            cout << "Caminas un poco al rio pero no vez ni un alma. Regresas al punto donde estabas";
            break;         
        }
    }
if (found){
    cout << "*** Finaliza el Dia 1***";
}
else{cout << "Quiza otro dia tengas mas suerte...";}
    
}
bool minigamePassportFromGenivaToItaly(){
     string question = "Para este viaje necesitas escoger el objeto que es primordial para tu viaje.\nEscoge el objecto que quieres llevar a Parc National de Forêts, en Francia: ";
    vector<string> options = {
        "Lapiz", 
        "Un Diario del Dia de hoy", 
        "Pasaporte", 
    };
    int userChoice =  promptOnce(question, options);
    if (userChoice == 3)
    {
        return true; 
    } else{return false;}
    

}

void lookforFatherKenovitzOnItaly (){
     string question = "¿A quién decides pedir direcciones";
    vector<string> places = {"A un borracho", "A una anciana que vende lechugas"};
    vector<bool> alreadyFound(places.size(), false);
    bool found = false;

    while(!found && count(alreadyFound.begin(), alreadyFound.end(),true)< (int)places.size()){
        int election = minigameChoiceWithResult("¿A quién decides pedir direcciones?", places, alreadyFound);

        switch (election)
        {
        case 0: // this case is the the drunken man
            drunkManDialog.showLongDialog();
            break;

        case 1: // this case is the the Basilic 
            ancianaSellingLettuce.showLongDialog();
            found = true;
            break;
       
        }
    }

}


void playCase2Evidence2(){
//C2E2IntroThought.showLongDialog();
//lookForPriestKenovitz();

bool passportBrought = minigamePassportFromGenivaToItaly();

//begginingDay2.showLongDialog();
cout << "        ***Empieza el día III ***\n\n";

if (!passportBrought) //checks if the user brought the passport
{
    cout << "Oficial Aduanero: ";
    cout << "   No tienes tu pasaporte, no puedes entrar a Italia"; return;
}else{cout << "Oficial de Aduana: "; cout << "  Muy bien. Bienvenido a Italia!";}
begginingDay3.showLongDialog();
lookforFatherKenovitzOnItaly();
begginingDay4.showLongDialog();


}



// CASE1  Evidencia driario de victor nuevo

bool chosingHouse(){
    string question = "¿Cuál quieres revisar? ";
    vector<string> options = {
        "233",
	    "234",
	    "235", 
	    "236",
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=2)
    {
        return false; 
    }
    else{return true;}
}

bool chosingHouseColor(){
    string question = "¿Cuál quieres entrar? ";
    vector<string> options = {
        "Casa verde",
	    "Casa amarilla",
	    "Casa roja", 
	    "Casa café",
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=3)
    {
        return false; 
    }
    else{return true;}
}

bool chosingDoor(){
    string question = "¿Cuál quieres revisar?? ";
    vector<string> options = {
        "1er cuarto a la izquierda ",
	    "2do cuarto a la izquierda ",
	    "1er cuarto a la derecha ", 
	    "2do cuarto a la derecha" ,
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=3)
    {
        return false; 
    }
    else{return true;}
}

bool chosingBook(){
    string question = "¿Cuál quieres leer?? ";
    vector<string> options = {
        "Libro rojo",
	    "Libro azul",
	    "Libro Blanco", 
	    "Libro verde" ,
    };

    int userChoice =  promptOnce(question, options);

    if (userChoice!=4)
    {
        return false; 
    }
    else{return true;}
}

void playCase1Evidence4(){
    cout << "        ***Empieza el día I ***\n\n";
    firstDialogC1.showLongDialog();

    bool rightHouse = chosingHouse();
    
    if (!rightHouse) {
        cout << "Has elegido una casa incorrecta. \n";
        return;
    }

    dialogHouse234.showLongDialog();

    bool rightHouseColor = chosingHouseColor();

    if (!rightHouseColor) {
        cout << "Has elegido una casa incorrecta. Te matan por pensar que eras un intruso \n";
        return;
    }

    dialogHouseRed.showLongDialog();

    bool rightDoor = chosingDoor();

    if (!rightDoor) {
        cout << "Encontraste una serpiente que se salió de un armario, estaba arriba tuyo y te pica. Mueres \n";
        return;
    }
    
    cout << "Encuentras 4 libros. Hay de todos colores \n";

    bool rightBook = chosingBook();


    if (!rightBook) {
        cout << "Encontraste libros que no necesitabas \n";
        return;
    }

    cout << "Encontraste el libro de Victor \n\n";
    cout << "Con esta enorme evidencia ya has cumplido tu misión, pero no puedes regresar a casa dado que esta obscuro. Tienes que esperar al dia siguiente \n\n Termina el dia \n\n";

    endDay.showLongDialog();
}



