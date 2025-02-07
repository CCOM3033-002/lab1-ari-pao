/*
Asignación 1: Box Office
Nombre: Ariana Paola Rivera Alejandro
Núm. Est: 801-24-4953
Colaboraciones: 
- n/a
*/

//cabecera
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//declarar función
int main ()
{
    //desplegar próposito del programa a pantalla
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater."<<endl;
    cout << endl;

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
        cout << left << setw(28) << "Movie Name:" << right << "\"" << movie_name << "\"" << endl;
        //Desplegar cantidad de boletos vendidos de adultos
        cout << left << setw(33) << "Adult Tickets Sold:" << right << adult_ticket << endl;
        //Desplegar cantidad de boletos vendidos de niños
        cout << left << setw(33) << "Child Tickets Sold:" << right << child_ticket << endl;
        
        /* Calcular el Gross Box Office Profit (el total del dinero hecho en ventas)
        Calcular el Net Box Office Profit (la cantidad de dinero que se queda el teatro)
        Calcular el Amount Paid to Distributor (la diferencia entre el Gross y el Net) y desplegar en pantalla. */

        double gross_profit = (10.0 * adult_ticket) + (6.0 * child_ticket); //declarar e inicializar variable del gross
        double net_profit = gross_profit - (gross_profit * 0.8); //declarar e inicializar variable del net
        double paid_distributor = gross_profit - net_profit; //declarar e inicializar variable del paid to distributor

        cout << setprecision(2) << fixed;
        cout << setw(30) << left << "Gross Box Office Profit: " ; //despliegue a pantalla del gross
        cout << "$" << setw(8) << right << gross_profit << endl;
        cout << setw(30) << left << "Net Box Office Profit: "; //despliegue a pantalla del net
        cout << "$" << setw(8) << right << net_profit << endl;
        cout << setw(30) << left << "Amound paid to Distributor: "; //despliegue a pantalla del paid to distributor
        cout << "$" << setw(8) << right << paid_distributor << endl;

    //Cierre del programa
    cout << endl;
    cout << "Thank you for using our program!\n"; //mensaje de agradecimiento

    return 0;
}

//fin del programa