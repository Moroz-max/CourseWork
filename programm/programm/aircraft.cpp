#include "stdafx.h"
#include "aircraft.h"


bool aircraft::Save(ofstream &file) {

	file << TypeAppatatus << "\n"
		<< name << "\n"
		<< Belonging << "\n"

		<< TypeWeapon << "\n"
		<< TypeEngine << "\n"
		<< TypeChassis << "\n"
		<< TypeTakeoffLanding << "\n"

		<< TakeoffWeight << "\n"
		<< NumbersEngine << "\n"
		<< WingsLocation << "\n"
		<< FlightSpeed << "\n"
		<< Management << "\n"
		<< Crew << "\n"
		<< ProductionYear << "\n";

	return true; 
}

bool aircraft::Read(ifstream &file) {

	getline(file, TypeAppatatus);
	getline(file, name);
	getline(file, Belonging);

	getline(file, TypeWeapon);
	getline(file, TypeEngine);
	getline(file, TypeChassis);
	getline(file, TypeTakeoffLanding);

	getline(file, TakeoffWeight);
	getline(file, NumbersEngine);
	getline(file, WingsLocation);
	getline(file, FlightSpeed);
	getline(file, Management);
	getline(file, Crew);
	getline(file, ProductionYear);

	return true; 
}

void aircraft::show() {
	cout << " aircraft " << endl
		<< "Name: " << name << endl
		<< "Belonging: " << Belonging << endl

		<< "TypeAppatatus: " << TypeAppatatus << endl
		<< "TypeWeapon " << TypeWeapon << endl
		<< "TypeEngine: " << TypeEngine << endl
		<< "TypeChassis: " << TypeChassis << endl
		<< "TypeTakeoffLanding: " << TypeTakeoffLanding << endl

		<< "TakeoffWeight: " << TakeoffWeight << endl
		<< "NumbersEngine: " << NumbersEngine << endl
		<< "WingsLocation: " << WingsLocation << endl
		<< "FlightSpeed: " << FlightSpeed << endl
		<< "Management: " << Management << endl
		<< "Crew: " << Crew << endl
		<< "ProductionYear: " << ProductionYear << endl;

	return;
}