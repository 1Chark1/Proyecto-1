#include <iostream> 
#include <locale>
#include <locale.h>
#include <string>
#include <cstdlib> 
#include <ctime>

using namespace std;

struct cita {

	int cita;
	int ptra;
	int ctra;
	int pu;
	int total; 
	int hor;
	string texto;
	string datos;
	string nom;
	string ntra;
	string desc;

};

int main() {

	cita Acita[3];
	int op, n;
	int j;
	int i;


	do {
		system("cls");
		cout << "Bienvenidos a DoctorChark " << endl;
		cout << "¿Que desea hacer?" << endl;
		cout << "1.Agendar cita" << endl;
		cout << "2.Modificar cita" << endl;
		cout << "3.Eliminar cita" << endl;
		cout << "4.Lista de citas vigentes" << endl;
		cout << "5.Limpiar pantalla" << endl;
		cout << "6.Salir" << endl;
		cin >> op;

		switch (op) {

		case 1:
			cout << "¿Desea agendar cita? (Si=1 No=2) " << endl;
			cin >> op;

			system("cls");

			while (op == 1) {

				for (i = 0; i < 3; i++) {

					Acita[i].cita = i + 1;

					cout << "ID de paciente: " << Acita[i].cita << endl;

					cout << "Nombre del paciente: " << endl;
					cin >> Acita[i].nom;

					cout << "Hora del tratamiento (en formato 24hrs): " << endl;
					cin >> Acita[i].hor;

					cout << "Nombre del tratamient: " << endl;
					cin >> Acita[i].ntra;

					cout << "Descripcion: " << endl;
					cin >> Acita[i].desc;

					cout << "Precio unitario tratamiento: " << endl;
					cin >> Acita[i].ptra;

					cout << "Cantidad del tratamiento: " << endl;
					cin >> Acita[i].ctra;

					cout << "Precio Unitario: " << endl;
					cin >> Acita[i].pu;

					cout << "Total: " << endl;
					cin >> Acita[i].total;


					cout << "\nNombre del paciente: " << Acita[i].nom << "\nHora del tratamiento (en formato 24hrs): " << Acita[i].hor << "\nNombre del tratamient: " << Acita[i].ntra << "\nDescripción: " << Acita[i].desc << "\nPrecio unitario tratamiento: " << Acita[i].ptra << "\nCantidad del tratamiento: " << Acita[i].ctra << "\nPrecio Unitario: " << Acita[i].pu << "\nTotal: " << Acita[i].total << endl << endl;

					system("pause>nul");
					system("cls");

				}	
				
				op = 0;
		
			}
			break;

		case 2:

			cout << "¿Desea eliminar cita vigente? (Si=1 No=2) " << endl;
			cin >> op;

			system("cls");

			while (op == 1) {

				cout << "ingrese la cita a modificar \n";
				cin >> j;
				j = j - 1;

				for (i = j; i <= j; i++) {


					cout << "ID de paciente: " << Acita[i].cita << endl;

					cout << "Nombre del paciente: " << endl;
					cin >> Acita[i].nom;

					cout << "Hora del tratamiento (en formato 24hrs): " << endl;
					cin >> Acita[i].hor;

					cout << "Nombre del tratamient: " << endl;
					cin >> Acita[i].ntra;

					cout << "Descripcion: " << endl;
					cin >> Acita[i].desc;

					cout << "Precio unitario tratamiento: " << endl;
					cin >> Acita[i].ptra;

					cout << "Cantidad del tratamiento: " << endl;
					cin >> Acita[i].ctra;

					cout << "Precio Unitario: " << endl;
					cin >> Acita[i].pu;

					cout << "Total: " << endl;
					cin >> Acita[i].total;

				

				}
				op = 0;

			}
			break;

		case 3:
			break;

		case 4:

			cout << "¿Desea ver las cita vigentes? (Si=1 No=2) " << endl;
			cin >> op;

			system("cls");

			while (op == 1) {

				for (i = 0; i < 3; i++) {

					cout << "ID de cita: " << Acita[i].cita << endl;
					cout << "\nNombre del paciente: " << Acita[i].nom; 
					cout << "\nHora del tratamiento (en formato 24hrs): " << Acita[i].hor;
					cout << "\nNombre del tratamient: " << Acita[i].ntra;
					cout << "\nDescripción: " << Acita[i].desc;
					cout << "\nPrecio unitario tratamiento: " << Acita[i].ptra;
					cout << "\nCantidad del tratamiento: " << Acita[i].ctra;
					cout << "\nPrecio Unitario: " << Acita[i].pu;
					cout << "\nTotal: " << Acita[i].total << endl << endl;

				} 
				op = 0;

				system("pause>nul");
				system("cls");
			}
			break;

		case 5:
			system("cls");
			op = 0;
			break;

		case 6:
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << "\nPor favor, Ingrese una opcion valida\n\n";

		}
		system("pause>nul");
		system("cls");
		cout << "Desea volver al menu? (Si=1 No=2)\n";
		cin >> op;

	} while (op == 1);


}