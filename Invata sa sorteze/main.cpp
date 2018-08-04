#include <iostream>
#include "string.h"

using namespace std;

int main() {

    int names_length = 101;
    string *names = new string[names_length] {
            "Jonah Cox",
            "Aidyn Weber",
            "Randy Krueger",
            "Tyrese Ponce",
            "Maya Barron",
            "Yurem Cruz",
            "Kayley Henderson",
            "Bruce Palmer",
            "Ansley Mora",
            "Eden Long",
            "Haylie Estrada",
            "Presley Mosley",
            "Paola Gardner",
            "Mylee Liu",
            "Isla Huerta",
            "Nathalia Knox",
            "Riya Macdonald",
            "Johanna Vance",
            "Hanna Mclean",
            "Cody Ewing",
            "Kenneth Cannon",
            "Carlie Rivers",
            "Hayden Hancock",
            "Anton Esparza",
            "Charlie Nichols",
            "Cristopher Rice",
            "Aden Simmons",
            "Selena Kent",
            "Nathaly Blevins",
            "Kendal Mahoney",
            "Boston Hays",
            "Hassan Guzman",
            "Hugh Buchanan",
            "Michaela Avery",
            "Esther Cantu",
            "Jake Mcknight",
            "Adrianna Wilson",
            "Nathalie Short",
            "Tate Pollard",
            "Joseph Jarvis",
            "Paige Burgess",
            "Jakob Burke",
            "Leanna Hobbs",
            "Marshall Black",
            "Sandra Barry",
            "Marcus Gallegos",
            "Colton Galloway",
            "Aarav Bullock",
            "Ean Barton",
            "Madison Ho",
            "Alessandra Petersen",
            "Jayvon Woodward",
            "Margaret Lozano",
            "Kaylyn Archer",
            "Angeline Roberson",
            "Zoe Green",
            "Reagan Mack",
            "Alena Potts",
            "Kenzie Cordova",
            "Paul Hurst",
            "Jessie Rios",
            "Sadie Mejia",
            "Aydin Shelton",
            "Randall Mullen",
            "Karlie Hoover",
            "Dixie Page",
            "Jeffery Horn",
            "Holden Browning",
            "Everett Horton",
            "Kylie Madden",
            "Sloane Meyer",
            "Madalyn Manning",
            "Brice Fischer",
            "Justin Bartlett",
            "Zackary Hale",
            "Damien Turner",
            "Isabela Gaines",
            "Hailey Lam",
            "Christina Brock",
            "Marcos Morton",
            "Shelby Allen",
            "Jaime Daniels",
            "Dexter Fitzgerald",
            "Sonia Austin",
            "Selah Mills",
            "Blaine Rogers",
            "Wendy Harrington",
            "Billy Khan",
            "Carter Mccarthy",
            "Bo Roberts",
            "Cason Yates",
            "Ungureanu Andrei",
            "Natalia English",
            "Jonathon Stafford",
            "Piper Cherry",
            "Gael Wallace",
            "Kevin Proctor",
            "Riley Sexton",
            "Josephine Calhoun",
            "Fernanda Day",
            "Lillian Shepard",
    };

    for (int i = 0; i < names_length; ++i) {
        cout << names[i] << endl;
    }
//        cout << names[0] << " > " << names[1] << " = " << names[0].compare(names[1]) << endl;
//        cout << names[0] << " > " << names[2] << " = " << names[0].compare(names[2]) << endl;
//        cout << names[0] << " > " << names[3] << " = " << names[0].compare(names[3]) << endl;


//        string test1 = "baaa";
//        string test2 = "aaaa";



    for (int i = 0; i < names_length; i++) {
        for (int j = i + 1; j < names_length ; j++) {
            if ( (names[i].compare(names [j])) > 0 ){
                string buffer = names[i];
                names[i] = names[j];
                names[j] = buffer;
            }
        }
    }

    cout << "========================================\n";

    for (int i = 0; i < names_length; ++i) {
        cout << names[i] << endl;
    }


    cout << "=======================DUTI E UN BOU=================\n";


    for (int k = 0; k <names_length ; ++k) {
//        cout << names [k][0]<<endl;
        if ( names[k][0] == 'A' ){
            cout << names[k] << endl;
        }


    }
//    cout << "Afisarea numele primelor 4 persoane:\n";
//    for (int iterator_nume = 0; iterator_nume < 4; ++iterator_nume) {
//        cout << iterator_nume << ":[" << endl << '\t';
//        for (int iterator_nume_caracter = 0; iterator_nume_caracter < names[iterator_nume].length() + 1; ++iterator_nume_caracter) {
//            cout << iterator_nume_caracter << ":[" <<names[iterator_nume][iterator_nume_caracter] <<"]" ;
//            if(iterator_nume_caracter < names[iterator_nume].length() -1){
//                cout <<',';
//            }
//        }
//        cout<< endl << "]" << endl;
//    }


//        cout << test1 << " > " << test2 << " = " << test1.compare(test2) << endl;


    return 0;
}