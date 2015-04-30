/* TP # 3 - Estructuras de Control
TOMAS AUGUSTO SCHMID
Creación: 30/04/2015

*/

#include <iostream>
using namespace std;
using std::string;

int main () {

int nroPregunta;
int puntaje;
int respuesta;
string nombreParticipante;
int categoria;

puntaje = 0; 
nroPregunta = 1;

cout << "Ingrese su nombre: ";
cin >> nombreParticipante;
cout << "Bienvenido! " << nombreParticipante << "\n\n";


	cout << "Elija la categoria que desea participar: \n";
	
	cout << "1. Deportes \n";
	cout << "2. Historia y Geografia \n";
	cin  >> categoria;
	switch (categoria)
	{	
		case 1: 
				while (nroPregunta < 3)
				{
					cout << " Pregunta numero: " << nroPregunta << "\n\n";
					
					if (nroPregunta == 1) 
					{
					cout << "¿Que pais gano el Mundial de Futbol Brasil 2014? \n";
							cout << "1. Argentina \n";
							cout << "2. Brasil \n";
							cout << "3. Alemania \n";
							cin >> respuesta;
							
							switch (respuesta)
							{
							case 3: cout << "Correcto \n";
							puntaje +=5;
							break;
							
							default: cout << "Incorrecto \n";
							break;
							}				
					} 
					
					if (nroPregunta == 2)
					{ 
					cout << "¿En que deporte se destaca Fernando Alonso? \n";
						cout << "1. Formula 1 \n";
						cout << "2. Basquet \n";
						cout << "3. Natacion \n";
						cin >> respuesta;
					
						switch (respuesta)
						{
						case 1: cout << "Correcto \n";
						puntaje += 5;
						break;
						
						default: cout << "Incorrecto \n";
						break;
						}	
					}
			
					nroPregunta ++;	
				}	
		case 2: 
				for (nroPregunta;nroPregunta < 3; nroPregunta++)
				{
					cout << " Pregunta numero: " << nroPregunta << "\n\n";
				
					if (nroPregunta == 1) 
					{
					cout << "¿Cual es la capital de Italia? \n";
							cout << "1. Roma \n";
							cout << "2. Berlin \n";
							cout << "3. Napoles \n";
							cin >> respuesta;
							
							switch (respuesta)
							{
							case 1: cout << "Correcto \n";
							puntaje +=5;
							break;
							
							default: cout << "Incorrecto \n";
							break;
							}				
					} 
					
					if (nroPregunta == 2)
					{ 
					cout << "¿En que año fue el descubrimiento de America? \n";
						cout << "1. 1692 \n";
						cout << "2. 1492 \n";
						cout << "3. 1592 \n";
						cin >> respuesta;
					
						switch (respuesta)
						{
						case 2: cout << "Correcto \n";
						puntaje += 5;
						break;
						
						default: cout << "Incorrecto \n";
						break;
						}	
					}
				}	
	}
	
	
	cout << nombreParticipante << " tu puntaje final es de " << puntaje << " puntos";
}
