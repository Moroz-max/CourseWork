#include "stdafx.h"
#include "conveyor.h"


bool conveyor::Save() {
	string NameFile = Entry("Entry name file");
	ofstream file(NameFile);
	if (!file.is_open()) return false;
	if (aircraftBuilder == NULL) return false;

	aircraftBuilder->GetAircraft()->Save(file);

	file.close();
	return true;
}

bool conveyor::Read() {
	string temp;

	string NameFile = Entry("Entry name file");
	ifstream file(NameFile);
	if (!file.is_open()) return false;
	if (aircraftBuilder == NULL) {
		getline(file, temp);
		
		if (temp == "combat aircraft") {
			SetAircraftBuilder(new combat_aircraft);
			aircraftBuilder->createNewAircraftProduct();
		}
		else if (temp == "helicopter") {
			SetAircraftBuilder(new helicopter);
			aircraftBuilder->createNewAircraftProduct();
		}
		else if (temp == "passenger airplane") {
			SetAircraftBuilder(new passenger_airplane);
			aircraftBuilder->createNewAircraftProduct();
		}
		else if (temp == "quadrupter") {
			SetAircraftBuilder(new quadrupter);
			aircraftBuilder->createNewAircraftProduct();
		}
		else {
			file.close();
			return false;
		}

		file.close();
		file.open(NameFile);
		if (!file.is_open()) return false;
	}

	aircraftBuilder->GetAircraft()->Read(file);

	file.close();
	return true;
}

string conveyor::Entry(const char a[]) {
	char str[N] = "";
	cout << a << ": ";
	cin >> str;
	return str;
}

void conveyor::ConstructAircraft()
{
	aircraftBuilder->createNewAircraftProduct();

	aircraftBuilder->SetName();
	aircraftBuilder->SetBelonging();

	aircraftBuilder->SetTypeAppatatus();
	aircraftBuilder->SetTypeWeapon();
	aircraftBuilder->SetTypeEngine();
	aircraftBuilder->SetTypeChassis();
	aircraftBuilder->SetTypeTakeoffLanding();

	aircraftBuilder->SetTakeoffWeight();
	aircraftBuilder->SetNumbersEngine();
	aircraftBuilder->SetWingsLocation();
	aircraftBuilder->SetFlightSpeed();
	aircraftBuilder->SetManagement();
	aircraftBuilder->SetCrew();
	aircraftBuilder->SetProductionYear();
}

void conveyor::menu() {
	int c = 0;

	while (1) {
		system("cls");
		cout << "1.Create aircraft\n2.Show aircraft\n3.Save aircraft\n4.Read aircraft\n0.Exit\n";
		cin >> c;

		switch (c) {
		case 0:
			return;
		case 1:
			MenuCreate();
			break;
		case 2:
			if (aircraftBuilder == NULL)
				cout << "the plane has not been created yet\n";
			else
				aircraftBuilder->GetAircraft()->show();
			_getch();
			break;
		case 3:
			if (aircraftBuilder == NULL)
				cout << "the plane has not been created yet\n";
			else {
				if (Save())
					cout << "Save complite\n";
				else
					cout << "File Erroe\n";
			}
			Sleep(1000);
			break;
		case 4:
			if (Read())
				cout << "Read complite\n";
			else
				cout << "File Erroe\n";
			Sleep(1000);
			break;
		}

		c = 0;
	}
}

void conveyor::MenuCreate() {
	int c = 0;

	while (1) {
		system("cls");
		cout << "1.Combat aircraft\n2.Helicopter\n3.Passenger airplane\n4.Quadrupter\n0.Exit\n";
		cin >> c;

		switch (c) {
		case 0:
			return;
		case 1:
			SetAircraftBuilder( new combat_aircraft );
			ConstructAircraft();
			break;
		case 2:
			SetAircraftBuilder( new helicopter );
			ConstructAircraft();
			break;
		case 3:
			SetAircraftBuilder( new passenger_airplane );
			ConstructAircraft();
			break;
		case 4:
			SetAircraftBuilder( new quadrupter );
			ConstructAircraft();
			break;
		}

		Sleep(1000);
		c = 0;
	}

	return;
}

