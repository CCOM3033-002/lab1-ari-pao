/*
Asignación 1: Box Office
Nombre: Ariana Paola Rivera Alejandro
Núm. Est: 801-24-4953
Colaboraciones: 
- 
- 
*/

//cabecera
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//declarar función
int main ()
{
    //desplegar próposito del programa
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater."<<endl;

    //Ingresar el nombre de la pelicula

        //Desplegar al usuario el mensaje
        cout << "Enter the name of the movie: ";
        //Declarar variable del nombre de la pelicula
        string movie_name;
        //Pedir el nombre de la pelicula
        getline (cin, movie_name);

    //Ingresar la cantidad de boletos para adultos vendidos.

        //Desplegar al usuario el mensaje.
        cout << "Enter the amount of adult tickets sold: ";
        //Declarar la variable de los boletos
        double adult_ticket;
        //Pedir la cantidad de boletos
        cin >> adult_ticket;

    //Ingresar la cantidad de boletos para niños vendidos.

        //Desplegar al usuario el mensaje.
        cout << "Enter the amount of child tickets sold: ";
        //Declarar la variable de los boletos
        double child_ticket;
        //Pedir la cantidad de boletos
        cin >> child_ticket;

    //Tabla de gastos y ganancias por pelicula

        //Desplegar titulos
        cout << left << setw(30) << "Movie Name: " << right << "\"" << movie_name << "\"" << endl;
        //Desplegar cantidad de boletos vendidos de adultos
        cout << left << setw(30) << "Adult tickets sold: " << right << "$ " << setprecision(2)<< fixed << adult_ticket << endl;
        //Desplegar cantidad de boletos vendidos de niños
        cout << left << setw(30) << "Child tickets sold: " << right << "$ " << setprecision(2) << fixed << child_ticket << endl;
        
    return 0;
}
