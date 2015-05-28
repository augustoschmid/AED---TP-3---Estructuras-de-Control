/* TP # 3 - Estructuras de Control
TOMAS AUGUSTO SCHMID
última modificación: 28/05/2015
Esta hecho para que se respondan sólo 2 preguntas. Puede ser 1 de cada categoría o 2 de la misma.
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
	
	while (respuesta != 0 && nroPregunta < 3)
	{
	
		cout << "1. Deportes \n";
		cout << "2. Historia y Geografia \n\n";
		cout << "Presione 0 para salir" << endl;
		
		cin  >> categoria;
		switch (categoria)
		{	
		
			case 0:
					cout << nombreParticipante << " tu puntaje final es de " << puntaje << " puntos";
					return 0;
			case 1: 
					{	
						cout << " Pregunta numero " << nroPregunta << " de deportes \n\n";
						
						if (nroPregunta == 1) 
						
							{
								cout << "¿Que pais gano el Mundial de Futbol Brasil 2014? \n";
								cout << "1. Argentina \n";
								cout << "2. Brasil \n";
								cout << "3. Alemania \n";
								cin >> respuesta;
									
								if (respuesta == 3)
								{
									cout << "Correcto \n\n";
									puntaje +=5;
									nroPregunta ++;	
									break;
								}
								else
								{
									cout << "Incorrecto \n\n";
									nroPregunta ++;	
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
						
							if (respuesta == 1)
							{
								cout << "Correcto \n\n";
								puntaje += 5;
								nroPregunta ++;	
								break;
							}
							else
							{
								cout << "Incorrecto \n\n";
								nroPregunta ++;	
								break;
							}
						}
					}

			case 2: 
	
					{
						cout << " Pregunta numero " << nroPregunta << " de Historia \n\n";
						
						if (nroPregunta == 1) 	
						{
								cout << "¿Cual es la capital de Italia? \n";
								cout << "1. Roma \n";
								cout << "2. Berlin \n";
								cout << "3. Napoles \n";
								cin >> respuesta;
								
								if (respuesta == 1)
								{
									cout << "Correcto \n\n";
									puntaje +=5;
									nroPregunta ++;
									break;
								}
								else
								{															
									cout << "Incorrecto \n\n";
									nroPregunta ++;
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
						
							if (respuesta == 2)
							{
								cout << "Correcto \n\n";
								puntaje += 5;
								nroPregunta ++;
								break;
							}
							else
							{
								cout << "Incorrecto \n\n";
								nroPregunta ++;
								break;
							}	
						}
					}		
		}
	}
	
	cout << nombreParticipante << " tu puntaje final es de " << puntaje << " puntos";
}
