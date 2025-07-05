#include "headerFiles/juicioQuestion.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

char userAnswer;
int totalPoints = 0; 
const int pointsWin = 8;

void makeQuestionE1() {
    ifstream archivo("prosecutorQuestions/case1/e2q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'b') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    //

    ifstream archivo2("prosecutorQuestions/case1/e2q2.txt"); 
    string linea2;
    while (getline(archivo2, linea2)) {
        cout << linea2 << endl;
    }
    archivo2.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'b') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++; 
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
    
    //
    
    ifstream archivo3("prosecutorQuestions/case1/e2q3.txt"); 
    string linea3;
    while (getline(archivo3, linea3)) {
        cout << linea3 << endl;
    }
    archivo3.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++; 
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

}

void makeQuestionE2() {
    ifstream archivo("prosecutorQuestions/case1/e3q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    //

    ifstream archivo2("prosecutorQuestions/case1/e3q2.txt"); 
    string linea2;
    while (getline(archivo2, linea2)) {
        cout << linea2 << endl;
    }
    archivo2.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++; 
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
    
    //
    
    ifstream archivo3("prosecutorQuestions/case1/e3q3.txt"); 
    string linea3;
    while (getline(archivo3, linea3)) {
        cout << linea3 << endl;
    }
    archivo3.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++; 
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    ifstream archivo4("prosecutorQuestions/case1/e3q4.txt"); 
    string linea4;
    while (getline(archivo4, linea4)) {
        cout << linea4 << endl;
    }
    archivo4.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++; 
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

}    

void makeQuestionE3() {
    ifstream archivo("prosecutorQuestions/case1/e4q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
}

void makeQuestionE4() {
    ifstream archivo("prosecutorQuestions/case1/e1q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'c') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    ////////////////////////////

    ifstream archivo2("prosecutorQuestions/case1/e1q2.txt");
    string linea2;
    while (getline(archivo2, linea2)) {
        cout << linea << endl;
    }
    archivo2.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'b') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    ////////////////////////

    ifstream archivo3("prosecutorQuestions/case1/e1q3.txt");
    string linea3;
    while (getline(archivo3, linea3)) {
        cout << linea3 << endl;
    }
    archivo3.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'a') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
}

void makeQuestionE5() {
    ifstream archivo("prosecutorQuestions/case1/e5q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'b') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
}

void makeQuestionE6() {
    ifstream archivo("prosecutorQuestions/case1/e6q1.txt");
    string linea;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'a') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }

    /////////////////

    ifstream archivo2("prosecutorQuestions/case1/e6q1.txt");
    string linea2;
    while (getline(archivo2, linea2)) {
        cout << linea2 << endl;
    }
    archivo2.close();

    cout << "Tu respuesta: ";
    cin >> userAnswer;
    userAnswer = tolower(userAnswer);

    if (userAnswer == 'b') {
        cout << "Respuesta correcta. Has ganado un punto." << endl;
        totalPoints++;
    } else {
        cout << "Respuesta incorrecta." << endl;
    }
}

void pointsVeri(){
    
    cout << "Puntos totales: " << totalPoints << endl;

    if (totalPoints >= pointsWin){
        cout << "Felicidades has gando el juicio del caso 1 con: " << totalPoints << " puntos" << endl;
        cout << "Eres un excelente detective y has logrado resolver el caso. \n";
    } else {
        cout << "No logras los puntos suficientes para ganar el caso. Solo obtuviste " << totalPoints << " puntos" << endl;
    }
    cout << "FIN \n";
}


















