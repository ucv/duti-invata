#include <iostream>
#include <fstream>
#include "string.h"
using namespace std;

int main(void) {
	int names_length = 101;
	string *names = new string[names_length]{
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
		"Natalia English",
		"Jonathon Stafford",
		"Piper Cherry",
		"Gael Wallace",
		"Kevin Proctor",
		"Riley Sexton",
		"Josephine Calhoun",
		"Fernanda Day",
		"Lillian Shepard",
		"Ungureanu Andrei",
	};

	string * address = new string[names_length]{
		"420 Strawberry Circle Kansas City, MO 64151",
		"230 South Sierra Ave. Clifton, NJ 07011",
		"7943 Woodside Ave. Port Saint Lucie, FL 34952",
		"9141 Gulf Avenue Belmont, MA 02478",
		"348 Jennings Rd. Bensalem, PA 19020",
		"533 Santa Clara Court Mechanicsburg, PA 17050",
		"3 Bohemia Lane Prattville, AL 36067",
		"7079 Goldfield Ave. Owings Mills, MD 21117",
		"8958 Devonshire Street Fresno, CA 93706",
		"7946 Clay St. Pittsford, NY 14534",
		"56 Plymouth Street Wheaton, IL 60187",
		"9291 Richardson Avenue Harrison Township, MI 48045",
		"86 Cooper Avenue Sugar Land, TX 77478",
		"8641 Arcadia Rd.Suite 53 Fleming Island, FL 32003",
		"7997 Country DriveApt 213 Lansdowne, PA 19050",
		"674 Laurel Ave. Merrillville, IN 46410",
		"8629 Garnet Court Largo, FL 33771",
		"49 Apollo Ave. Monroe, NY 10950",
		"50 Old St. Buckeye, AZ 85326",
		"78 College Dr. Durham, NC 27703",
		"560 Lyme Rd. Manitowoc, WI 54220",
		"297 Hazelnut Drive Hampton, VA 23666",
		"9217 Farmer Ave. Flint, MI 48504",
		"137 Wellness St. Akron, OH 44312",
		"357 Circus St. Queensbury, NY 12804",
		"8302 St Louis Street Danvers, MA 01923",
		"901 Augusta Ave. Levittown, NY 11756",
		"6 Center St. Rock Hill, SC 29730",
		"168 West Fleet Street Geneva, IL 60134",
		"134 Arcade Drive Webster, NY 14580",
		"242 Bohemia St. Franklin Square, NY 11010",
		"3 Talbot Street Schererville, IN 46375",
		"367 Wellington Lane Kennesaw, GA 30144",
		"57 SE. Mayflower Avenue Morrisville, PA 19067",
		"2 Shipley Court Aliquippa, PA 15001",
		"328 Museum Street Lewis Center, OH 43035",
		"82 Talbot Avenue Morganton, NC 28655",
		"8503 Oakland Ave. Marquette, MI 49855",
		"537 Newport Ave. Ballston Spa, NY 12020",
		"17 Bard St. Cincinnati, OH 45211",
		"771 West Green Lake Dr. New Brunswick, NJ 08901",
		"7 Atlantic Circle Rolla, MO 65401",
		"395 Columbia St. Wake Forest, NC 27587",
		"48 Low Street Oviedo, FL 32765",
		"118 Brook Ave. Lincolnton, NC 28092",
		"9859 Beacon Road Piscataway, NJ 08854",
		"28 Bellow Street Maplewood, NJ 07040",
		"251 King St. Milledgeville, GA 31061",
		"87 Old Galvin Lane Deer Park, NY 11729",
		"16 South Hawthorne Rd. Medina, OH 44256",
		"5 Seaview Drive Wheaton, IL 60187",
		"23 Pineknoll St. Shelbyville, TN 37160",
		"4 Sunny Street Brownsburg, IN 46112",
		"95 Ash Dr. Fort Myers, FL 33905",
		"97 Harbor St. Huntington Station, NY 11746",
		"466 1st Ave. Upper Darby, PA 19082",
		"7288 Linda Ave. Marlborough, MA 01752",
		"9263 East Longbranch Ave. Rocklin, CA 95677",
		"764 Wilson St. Augusta, GA 30906",
		"584 Academy St. Montgomery Village, MD 20886",
		"36 Sugar Street Carlisle, PA 17013",
		"40 Laurel St. Nottingham, MD 21236",
		"7077 Law St. Grove City, OH 43123",
		"352 Fairway Street Fall River, MA 02720",
		"27 Clay Street Hermitage, TN 37076",
		"53 Autumn Dr. Jackson, NJ 08527",
		"9630 E. Parker Lane Fishers, IN 46037",
		"7628 East 53rd Street Miami Beach, FL 33139",
		"8832 Java Road Farmington, MI 48331",
		"9961 Champion Avenue Merrillville, IN 46410",
		"9 E. Armstrong St. Elk River, MN 55330",
		"476 West Temple Road Marshfield, WI 54449",
		"7345 Elm Street Bowling Green, KY 42101",
		"532 Hope Lane Goodlettsville, TN 37072",
		"7219 Gregory Court Ravenna, OH 44266",
		"656 Java Ave. Villa Park, IL 60181",
		"6 Gainsway Ave. Southington, CT 06489",
		"529 Brown Ave. Orlando, FL 32806",
		"847 Peg Shop St. San Pablo, CA 94806",
		"75 Summer Dr. Aberdeen, SD 57401",
		"79 George Drive Pittsford, NY 14534",
		"8710 Arnold St. Hoffman Estates, IL 60169",
		"7001 Rock Maple Ave. Bozeman, MT 59715",
		"7558 Pennsylvania Ave. Maryville, TN 37803",
		"51 Queen St. Holyoke, MA 01040",
		"27 Swanson Street Nashua, NH 03060",
		"733 Sheffield St. Tullahoma, TN 37388",
		"631 Cross Street Nampa, ID 83651",
		"64 Primrose Ave. Palm Bay, FL 32907",
		"205 Hall St. Palm Coast, FL 32137",
		"204 Center Street Minot, ND 58701",
		"64 Upper Road Harrisburg, PA 17109",
		"8905 Colonial Court Ridgecrest, CA 93555",
		"8544 Feathers Ave. Madison, AL 35758",
		"90 Middle River Street Boynton Beach, FL 33435",
		"934 General Dr. South Portland, ME 04106",
		"13 James Road Strongsville, OH 44136",
		"895 Hartford Lane Frederick, MD 21701",
		"524 Kings Ave. Southgate, MI 48195",
		"9060 Manchester Ave. Bay City, MI 48706",
		"Drumul Taberei Nr.34"
	};


	ofstream file;
	file.open("Users.txt");
	for (int i = 0; i < 101; i++) {
		char * pch;
		pch = strtok((char *)names[i].c_str(), " ");
		string name[2];
		name[0] = pch;
		pch = strtok(NULL, " ");
		name[1] = pch;
		int birthYear = rand() % 30 + 75;
		file << i+1 << ';' << name[0].c_str()<< ';' << name[1].c_str() << ';' << "0729" << rand() % 999999 + 100000 << ';' << address[i].c_str() << ";bla bla bla;" << rand() % 30 + 1 <<'.'<< rand() % 12 + 1 <<'.'<< ((birthYear > 100)?(birthYear-100): birthYear) << endl;
	}
	file.flush();
	file.close();

	return 0;
}