#include <iostream> 
#include <locale>
#include <locale.h>
#include <string>
#include <cstdlib> 
#include <ctime>

using namespace std;
int main() {

	int op, n;
	float cita, ptra, ctra, pu, total;
	char texto[100], datos[100], nom[100], hor, ntra, desc;


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
			while (op == 1) {
				cout << "Nombre del paciente: " << endl;
				cin >> nom;

				cout << "Hora del tratamiento (en formato 24hrs): " << endl;
				cin >> hor;

				cout << "Nombre del tratamient: " << endl;
				cin >> ntra;

				cout << "Descripción: " << endl;
				cin >> desc;

				cout << "Precio unitario tratamiento: " << endl;
				cin >> ptra;

				cout << "Cantidad del tratamiento: " << endl;
				cin >> ctra;

				cout << "Precio Unitario: " << endl;
				cin >> pu;

				cout << "Total: " << endl;
				cin >> total;

				cout << "Numero de cita: " << endl;
				srand((unsigned)time(0));

				cout << "\nNombre del paciente: " << nom << "\nHora del tratamiento (en formato 24hrs): " << hor << "\nNombre del tratamient: " << ntra << "\nDescripción: " << desc << "\nPrecio unitario tratamiento: " << ptra << "\nCantidad del tratamiento: " << ctra << "\nPrecio Unitario: " << pu << "\nTotal: " << total << "\nNumero de cita: " << (rand() % 899999) + 100000 << endl;


				op = 0;
			}
			break;
		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			system("cls");
			op = 0;
			break;

		case 6:
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << "\nPor favor, Ingrese una opción válida\n\n";

		}
		system("pause");
		system("cls");
		cout << "Desea volver al menú? (Si=1 No=2)\n";
		cin >> op;

	} while (op == 1);


}