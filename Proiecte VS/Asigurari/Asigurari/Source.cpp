#include <iostream>
#include <fstream>
#include <string>
using namespace std;

enum MeniuPrincipal {
	Iesire = 0,
	IdClient,
	NumeClient,
	PrenumeClient,
	TelefonClient,
	AdresaClient,
	NoteAdminClient,
	DataNastereClient,
	PolitaClient
};

enum MeniuPolita {
	IdPolita = 1,
	TipPolita,
	CampuriAditionalePolita,
	DataExpirarePolita,
	Inapoi = 9
};

struct Data {
	int zi;
	int luna;
	int an;
};

struct StructPolita {
	int id;
	string tipPolita, campuriAditionale;
	Data dataExpirare;
};

struct StructClient {
	int id;
	string nume, prenume, telefon, adresa, note;
	Data dataNastere;
	StructPolita polita;
};

string getMenuTextById(int id) {
	switch (id)
	{
	case MeniuPrincipal::Iesire: {
		return "Iesire";
	}break;
	case MeniuPrincipal::IdClient: {
		return "Id";
	}break;
	case MeniuPrincipal::NumeClient: {
		return "Nume";
	}break;
	case MeniuPrincipal::PrenumeClient: {
		return "Prenume";
	}break;
	case MeniuPrincipal::TelefonClient: {
		return "Telefon";
	}break;
	case MeniuPrincipal::AdresaClient: {
		return "Adresa";
	}break;
	case MeniuPrincipal::NoteAdminClient: {
		return "NoteAdmin";
	}break;
	case MeniuPrincipal::DataNastereClient: {
		return "DataNastere";
	}break;
	case MeniuPrincipal::PolitaClient: {
		return "Polita";
	}break;
	default:
		return NULL;
	}
}

string getMenuPolitaTextById(int id) {
	switch (id)
	{
	case MeniuPolita::Inapoi: {
		return "Inapoi";
	}break;
	case MeniuPolita::IdPolita: {
		return "ID";
	}break;
	case MeniuPolita::TipPolita: {
		return "Tip";
	}break;
	case MeniuPolita::CampuriAditionalePolita: {
		return "Campuri Aditionale";
	}break;
	case MeniuPolita::DataExpirarePolita: {
		return "Data Expirare";
	}break;
	default:
		break;
	}
}

int main(void) {

	string text;
	ifstream myfile("Utilizatori.txt");

	StructClient clienti[101];

	if (myfile.is_open())
	{

		int numar_client = 0;
		while (getline(myfile, text))
		{


			int dimensiune_string = text.length();
			int numar_cuvinte = 0;
			string cuvinte[7];
			int cuvantul_incepe_de_la = 0;
			for (int i = 0; i <= text.length(); i++)
				if (text[i] == ';' || text[i] == '\0')
				{
					cuvinte[numar_cuvinte] = text.substr(cuvantul_incepe_de_la, i - cuvantul_incepe_de_la);
					//atribuim valoare variabilei cuvantul_incepe_de_la cu valoarea i+1
					cuvantul_incepe_de_la = i + 1;
					//incrementam numar_cuvinte cu +1 //numar_cuvinte++
					numar_cuvinte = numar_cuvinte + 1;

				}

			clienti[numar_client].id = atoi(cuvinte[0].c_str());
			clienti[numar_client].nume = cuvinte[1].c_str();
			clienti[numar_client].prenume = cuvinte[2].c_str();
			clienti[numar_client].telefon = cuvinte[3].c_str();
			clienti[numar_client].adresa = cuvinte[4].c_str();
			clienti[numar_client].note = cuvinte[5].c_str();
			clienti[numar_client].dataNastere = cuvinte[6].c_str();
			numar_client = numar_client + 1;
			cout << text << '\n';
		}


		myfile.close();
	}

	else cout << "Unable to open file";


	int obtiune = -1;

	StructClient client;

	client.id = 0;
	client.nume = "Ungureanu";
	client.prenume = "Andrei";
	client.telefon = "0720019529";
	client.adresa = "Drumul Taberei, Nr. 36";
	client.note = "bla bla";
	client.dataNastere.zi = 30;
	client.dataNastere.luna = 7;
	client.dataNastere.an = 1980;

	client.polita.id = 0;
	client.polita.tipPolita = "rca";
	client.polita.campuriAditionale = "bla bla";
	client.polita.dataExpirare.zi = 30;
	client.polita.dataExpirare.luna = 9;
	client.polita.dataExpirare.an = 2019;

	int idOptiuneClient = -1;

	// Al catalea client vreti sa il vizualizati ?
	cin >> idOptiuneClient;




	while (obtiune != MeniuPrincipal::Iesire) {

		cout << "Ce optiune doresti sa afisezi? \n";

		for (int i = 0; i < 9; i++) {
			cout << "[" << i << "]" << getMenuTextById(i).c_str() << "Client" << endl;
		}


		cin >> obtiune;
		cout << getMenuTextById(obtiune).c_str() << ":";
		if (obtiune == MeniuPrincipal::IdClient) {
			cout << client.id << endl;
		}
		else if (obtiune == MeniuPrincipal::NumeClient) {
			cout << client.nume.c_str() << endl;
		}
		else if (obtiune == MeniuPrincipal::PrenumeClient) {
			cout << client.prenume.c_str() << endl;
		}
		else if (obtiune == MeniuPrincipal::TelefonClient) {
			cout << client.telefon.c_str() << endl;
		}
		else if (obtiune == MeniuPrincipal::AdresaClient) {
			cout << client.adresa.c_str() << endl;
		}
		else if (obtiune == MeniuPrincipal::NoteAdminClient) {
			cout << client.note.c_str() << endl;
		}
		else if (obtiune == MeniuPrincipal::DataNastereClient) {
			cout << client.dataNastere.zi << "." << client.dataNastere.luna << "." << client.dataNastere.an << endl;
		}
		else if (obtiune == MeniuPrincipal::PolitaClient) {
			while (obtiune > MeniuPrincipal::Iesire &&  obtiune < MeniuPolita::Inapoi) {


				cout << "Ce optiune doresti sa afisezi? \n";

				for (int i = 1; i < 5; i++)
				{
					cout << "[" << i << "]"  << getMenuPolitaTextById(i).c_str() << "Polita" << endl;
				}
				cout << "[" << 9 << "]" << getMenuPolitaTextById(9).c_str() << "Polita" << endl;
				cout << "[" << 0 << "]" << getMenuTextById(0).c_str() << endl;


				cin >> obtiune;
				switch (obtiune) {
				case MeniuPolita::IdPolita: {
					cout << client.polita.id << endl;
				}break;
				case MeniuPolita::TipPolita: {
					cout << client.polita.tipPolita.c_str() << endl;
				}break;
				case MeniuPolita::CampuriAditionalePolita: {
					cout << client.polita.campuriAditionale.c_str() << endl;
				}break;
				case MeniuPolita::DataExpirarePolita: {
					cout << client.polita.dataExpirare.zi << "." << client.polita.dataExpirare.luna << "." << client.polita.dataExpirare.an << "." << endl;
				}break;
				default: {
					cout << "Nu exista valoarea selectata\n";
				}break;
				}
			}
			cout << ".\n";
		}
	}





	system("pause");
	return 0;
}