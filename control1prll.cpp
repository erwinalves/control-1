#include <stdio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string> 

using namespace std;

struct Estacion { 
   string codigo;
   string nombre;
   string linea;
   bool combi;
   string combiOrigen;
   string combiDestino;
};

/*void imprimirVector(Estacion vector[]){
	for(i=0;i<vector.length();i++){
		if(i==vector.length()-1){
			cout<<vector[i].nombre<<endl;
		}
		else
			cout<<vector[i]<<" - ";
	}
}*/

int main(int argc, char* argv[]){
	
	Estacion Linea1 [27];
	Estacion Linea2 [22];
	Estacion Linea4 [23];
	Estacion Linea4a [6];
	Estacion Linea5 [30];
	Estacion Linea6 [10];
	
	// llenado Linea 1
	Linea1[0].codigo = "SP";
	Linea1[0].nombre = "San Pablo";
	Linea1[0].linea = "L1";
	Linea1[0].combi = true;
	Linea1[0].combiOrigen = "L1";
	Linea1[0].combiDestino = "L5";
	
	Linea1[1].codigo = "NP";
	Linea1[1].nombre = "Neptuno";
	Linea1[1].linea = "L1";
	Linea1[1].combi = false;
	Linea1[1].combiOrigen = "";
	Linea1[1].combiDestino = "";
	
	Linea1[2].codigo = "PJ";
	Linea1[2].nombre = "Pajaritos";
	Linea1[2].linea = "L1";
	Linea1[2].combi = false;
	Linea1[2].combiOrigen = "";
	Linea1[2].combiDestino = "";
	
	Linea1[3].codigo = "LR";
	Linea1[3].nombre = "Las Rejas";
	Linea1[3].linea = "L1";
	Linea1[3].combi = false;
	Linea1[3].combiOrigen = "";
	Linea1[3].combiDestino = "";
	
	Linea1[4].codigo = "EC";
	Linea1[4].nombre = "Ecuador";
	Linea1[4].linea = "L1";
	Linea1[4].combi = false;
	Linea1[4].combiOrigen = "";
	Linea1[4].combiDestino = "";
	
	Linea1[5].codigo = "AH";
	Linea1[5].nombre = "San Alberto Hurtado";
	Linea1[5].linea = "L1";
	Linea1[5].combi = false;
	Linea1[5].combiOrigen = "";
	Linea1[5].combiDestino = "";
	
	Linea1[6].codigo = "US";
	Linea1[6].nombre = "Universidad de Santiago";
	Linea1[6].linea = "L1";
	Linea1[6].combi = false;
	Linea1[6].combiOrigen = "";
	Linea1[6].combiDestino = "";
	
	Linea1[7].codigo = "EL";
	Linea1[7].nombre = "Estacion Central";
	Linea1[7].linea = "L1";
	Linea1[7].combi = false;
	Linea1[7].combiOrigen = "";
	Linea1[7].combiDestino = "";
	
	Linea1[8].codigo = "LA";
	Linea1[8].nombre = "ULA";
	Linea1[8].linea = "L1";
	Linea1[8].combi = false;
	Linea1[8].combiOrigen = "";
	Linea1[8].combiDestino = "";
	
	Linea1[9].codigo = "RP";
	Linea1[9].nombre = "Republica";
	Linea1[9].linea = "L1";
	Linea1[9].combi = false;
	Linea1[9].combiOrigen = "";
	Linea1[9].combiDestino = "";
	
	Linea1[10].codigo = "LH";
	Linea1[10].nombre = "Los Heroes";
	Linea1[10].linea = "L1";
	Linea1[10].combi = true;
	Linea1[10].combiOrigen = "L1";
	Linea1[10].combiDestino = "L2";
	
	Linea1[11].codigo = "LM";
	Linea1[11].nombre = "La Moneda";
	Linea1[11].linea = "L1";
	Linea1[11].combi = false;
	Linea1[11].combiOrigen = "";
	Linea1[11].combiDestino = "";
	
	Linea1[12].codigo = "CH";
	Linea1[12].nombre = "Universidad de Chile";
	Linea1[12].linea = "L1";
	Linea1[12].combi = false;
	Linea1[12].combiOrigen = "";
	Linea1[12].combiDestino = "";
	
	Linea1[13].codigo = "SL";
	Linea1[13].nombre = "Santa Lucia";
	Linea1[13].linea = "L1";
	Linea1[13].combi = false;
	Linea1[13].combiOrigen = "";
	Linea1[13].combiDestino = "";	
	
	Linea1[14].codigo = "UC";
	Linea1[14].nombre = "Universidad Catolica";
	Linea1[14].linea = "L1";
	Linea1[14].combi = false;
	Linea1[14].combiOrigen = "";
	Linea1[14].combiDestino = "";
	
	Linea1[15].codigo = "BA";
	Linea1[15].nombre = "Baquedano";
	Linea1[15].linea = "L1";
	Linea1[15].combi = true;
	Linea1[15].combiOrigen = "L1";
	Linea1[15].combiDestino = "L5";
	
	Linea1[16].codigo = "SA";
	Linea1[16].nombre = "Salvador";
	Linea1[16].linea = "L1";
	Linea1[16].combi = false;
	Linea1[16].combiOrigen = "";
	Linea1[16].combiDestino = "";
	
	Linea1[17].codigo = "MM";
	Linea1[17].nombre = "Manuel Montt";
	Linea1[17].linea = "L1";
	Linea1[17].combi = false;
	Linea1[17].combiOrigen = "";
	Linea1[17].combiDestino = "";
	
	Linea1[18].codigo = "PV";
	Linea1[18].nombre = "Pedro de Valdivia";
	Linea1[18].linea = "L1";
	Linea1[18].combi = false;
	Linea1[18].combiOrigen = "";
	Linea1[18].combiDestino = "";
	
	Linea1[19].codigo = "LE";
	Linea1[19].nombre = "Los Leones";
	Linea1[19].linea = "L1";
	Linea1[19].combi = true;
	Linea1[19].combiOrigen = "L1";
	Linea1[19].combiDestino = "L6";
	
	Linea1[20].codigo = "TB";
	Linea1[20].nombre = "Tobalaba";
	Linea1[20].linea = "L1";
	Linea1[20].combi = true;
	Linea1[20].combiOrigen = "L1";
	Linea1[20].combiDestino = "L4";
	
	Linea1[21].codigo = "GO";
	Linea1[21].nombre = "El Golf";
	Linea1[21].linea = "L1";
	Linea1[21].combi = false;
	Linea1[21].combiOrigen = "";
	Linea1[21].combiDestino = "";
	
	Linea1[22].codigo = "AL";
	Linea1[22].nombre = "Alcantara";
	Linea1[22].linea = "L1";
	Linea1[22].combi = false;
	Linea1[22].combiOrigen = "";
	Linea1[22].combiDestino = "";
	
	Linea1[23].codigo = "EM";
	Linea1[23].nombre = "Escuela Militar";
	Linea1[23].linea = "L1";
	Linea1[23].combi = false;
	Linea1[23].combiOrigen = "";
	Linea1[23].combiDestino = "";
	
	Linea1[24].codigo = "MQ";
	Linea1[24].nombre = "Manquehue";
	Linea1[24].linea = "L1";
	Linea1[24].combi = false;
	Linea1[24].combiOrigen = "";
	Linea1[24].combiDestino = "";
	
	Linea1[25].codigo = "HM";
	Linea1[25].nombre = "Hernando de Magallanes";
	Linea1[25].linea = "L1";
	Linea1[25].combi = false;
	Linea1[25].combiOrigen = "";
	Linea1[25].combiDestino = "";
	
	Linea1[26].codigo = "LD";
	Linea1[26].nombre = "Los Dominicos";
	Linea1[26].linea = "L1";
	Linea1[26].combi = false;
	Linea1[26].combiOrigen = "";
	Linea1[26].combiDestino = "";
	
	// llenado Linea 2
	Linea2[0].codigo = "LC";
	Linea2[0].nombre = "La Cisternas";
	Linea2[0].linea = "L2";
	Linea2[0].combi = true;
	Linea2[0].combiOrigen = "L2";
	Linea2[0].combiDestino = "L4a";
	
	Linea2[1].codigo = "EP";
	Linea2[1].nombre = "El Parron";
	Linea2[1].linea = "L2";
	Linea2[1].combi = false;
	Linea2[1].combiOrigen = "";
	Linea2[1].combiDestino = "";
	
	Linea2[2].codigo = "LO";
	Linea2[2].nombre = "Lo Ovalle";
	Linea2[2].linea = "L2";
	Linea2[2].combi = false;
	Linea2[2].combiOrigen = "";
	Linea2[2].combiDestino = "";
	
	Linea2[3].codigo = "CN";
	Linea2[3].nombre = "Ciudad del niño";
	Linea2[3].linea = "L2";
	Linea2[3].combi = false;
	Linea2[3].combiOrigen = "";
	Linea2[3].combiDestino = "";
	
	Linea2[4].codigo = "DE";
	Linea2[4].nombre = "Departamental";
	Linea2[4].linea = "L2";
	Linea2[4].combi = false;
	Linea2[4].combiOrigen = "";
	Linea2[4].combiDestino = "";
	
	Linea2[5].codigo = "LV";
	Linea2[5].nombre = "Lo Vial";
	Linea2[5].linea = "L2";
	Linea2[5].combi = false;
	Linea2[5].combiOrigen = "";
	Linea2[5].combiDestino = "";
	
	Linea2[6].codigo = "SM";
	Linea2[6].nombre = "San Miquel";
	Linea2[6].linea = "L2";
	Linea2[6].combi = false;
	Linea2[6].combiOrigen = "";
	Linea2[6].combiDestino = "";
	
	Linea2[7].codigo = "LL";
	Linea2[7].nombre = "El LLano";
	Linea2[7].linea = "L2";
	Linea2[7].combi = false;
	Linea2[7].combiOrigen = "";
	Linea2[7].combiDestino = "";
	
	Linea2[8].codigo = "FR";
	Linea2[8].nombre = "Franklin";
	Linea2[8].linea = "L2";
	Linea2[8].combi = true;
	Linea2[8].combiOrigen = "L2";
	Linea2[8].combiDestino = "L6";
	
	Linea2[9].codigo = "RO";
	Linea2[9].nombre = "Rondizzoni";
	Linea2[9].linea = "L2";
	Linea2[9].combi = false;
	Linea2[9].combiOrigen = "";
	Linea2[9].combiDestino = "";
	
	Linea2[10].codigo = "PQ";
	Linea2[10].nombre = "Parque Ohiggins";
	Linea2[10].linea = "L2";
	Linea2[10].combi = false;
	Linea2[10].combiOrigen = "";
	Linea2[10].combiDestino = "";
	
	Linea2[11].codigo = "TO";
	Linea2[11].nombre = "Toesca";
	Linea2[11].linea = "L2";
	Linea2[11].combi = false;
	Linea2[11].combiOrigen = "";
	Linea2[11].combiDestino = "";
	
	Linea2[12].codigo = "HE";
	Linea2[12].nombre = "Los Heroes";
	Linea2[12].linea = "L2";
	Linea2[12].combi = true;
	Linea2[12].combiOrigen = "L2";
	Linea2[12].combiDestino = "L1";
	
	Linea2[13].codigo = "AN";
	Linea2[13].nombre = "Santa Ana";
	Linea2[13].linea = "L2";
	Linea2[13].combi = true;
	Linea2[13].combiOrigen = "L2";
	Linea2[13].combiDestino = "L5";
	
	Linea2[14].codigo = "CA";
	Linea2[14].nombre = "Puente de Cal y Canto";
	Linea2[14].linea = "L2";
	Linea2[14].combi = false;
	Linea2[14].combiOrigen = "";
	Linea2[14].combiDestino = "";
	
	Linea2[15].codigo = "PT";
	Linea2[15].nombre = "Patronato";
	Linea2[15].linea = "L2";
	Linea2[15].combi = false;
	Linea2[15].combiOrigen = "";
	Linea2[15].combiDestino = "";
	
	Linea2[16].codigo = "CB";
	Linea2[16].nombre = "Cerro Blanco";
	Linea2[16].linea = "L2";
	Linea2[16].combi = false;
	Linea2[16].combiOrigen = "";
	Linea2[16].combiDestino = "";
	
	Linea2[17].codigo = "CE";
	Linea2[17].nombre = "Cementerio";
	Linea2[17].linea = "L2";
	Linea2[17].combi = false;
	Linea2[17].combiOrigen = "";
	Linea2[17].combiDestino = "";
	
	Linea2[18].codigo = "EI";
	Linea2[18].nombre = "Einstein";
	Linea2[18].linea = "L2";
	Linea2[18].combi = false;
	Linea2[18].combiOrigen = "";
	Linea2[18].combiDestino = "";
	
	Linea2[19].codigo = "DO";
	Linea2[19].nombre = "Dorsal";
	Linea2[19].linea = "L2";
	Linea2[19].combi = false;
	Linea2[19].combiOrigen = "";
	Linea2[19].combiDestino = "";
	
	Linea2[20].codigo = "ZA";
	Linea2[20].nombre = "Zapadores";
	Linea2[20].linea = "L2";
	Linea2[20].combi = false;
	Linea2[20].combiOrigen = "";
	Linea2[20].combiDestino = "";
	
	Linea2[21].codigo = "AV";
	Linea2[21].nombre = "Vespucio Norte";
	Linea2[21].linea = "L2";
	Linea2[21].combi = false;
	Linea2[21].combiOrigen = "";
	Linea2[21].combiDestino = "";
	
	// llenado Linea 4 
	Linea4[0].codigo = "TOB";
	Linea4[0].nombre = "Tobalaba";
	Linea4[0].linea = "L4";
	Linea4[0].combi = true;
	Linea4[0].combiOrigen = "L4";
	Linea4[0].combiDestino = "L1";
	
	Linea4[1].codigo = "COL";
	Linea4[1].nombre = "Cristobal Colon";
	Linea4[1].linea = "L4";
	Linea4[1].combi = false;
	Linea4[1].combiOrigen = "";
	Linea4[1].combiDestino = "";
	
	Linea4[2].codigo = "BIL";
	Linea4[2].nombre = "Francisco Bilbao";
	Linea4[2].linea = "L4";
	Linea4[2].combi = false;
	Linea4[2].combiOrigen = "";
	Linea4[2].combiDestino = "";
	
	Linea4[3].codigo = "PDG";
	Linea4[3].nombre = "Principe de Gales";
	Linea4[3].linea = "L4";
	Linea4[3].combi = false;
	Linea4[3].combiOrigen = "";
	Linea4[3].combiDestino = "";
	
	Linea4[4].codigo = "SBO";
	Linea4[4].nombre = "Simon Bolivar";
	Linea4[4].linea = "L4";
	Linea4[4].combi = false;
	Linea4[4].combiOrigen = "";
	Linea4[4].combiDestino = "";
	
	Linea4[5].codigo = "PEG";
	Linea4[5].nombre = "Plaza Egaña";
	Linea4[5].linea = "L4";
	Linea4[5].combi = false;
	Linea4[5].combiOrigen = "";
	Linea4[5].combiDestino = "";
	
	Linea4[6].codigo = "LOR";
	Linea4[6].nombre = "Los Orientales";
	Linea4[6].linea = "L4";
	Linea4[6].combi = false;
	Linea4[6].combiOrigen = "";
	Linea4[6].combiDestino = "";
	
	Linea4[7].codigo = "RGR";
	Linea4[7].nombre = "Grecia";
	Linea4[7].linea = "L4";
	Linea4[7].combi = false;
	Linea4[7].combiOrigen = "";
	Linea4[7].combiDestino = "";
	
	Linea4[8].codigo = "LPR";
	Linea4[8].nombre = "Los Presidentes";
	Linea4[8].linea = "L4";
	Linea4[8].combi = false;
	Linea4[8].combiOrigen = "";
	Linea4[8].combiDestino = "";
	
	Linea4[9].codigo = "RQU";
	Linea4[9].nombre = "Quilin";
	Linea4[9].linea = "L4";
	Linea4[9].combi = false;
	Linea4[9].combiOrigen = "";
	Linea4[9].combiDestino = "";
	
	Linea4[10].codigo = "LTO";
	Linea4[10].nombre = "Las Torres";
	Linea4[10].linea = "L4";
	Linea4[10].combi = false;
	Linea4[10].combiOrigen = "";
	Linea4[10].combiDestino = "";
	
	Linea4[11].codigo = "MAC";
	Linea4[11].nombre = "Macul";
	Linea4[11].linea = "L4";
	Linea4[11].combi = false;
	Linea4[11].combiOrigen = "";
	Linea4[11].combiDestino = "";
	
	Linea4[12].codigo = "VMA";
	Linea4[12].nombre = "Vicuña Makena";
	Linea4[12].linea = "L4";
	Linea4[12].combi = true;
	Linea4[12].combiOrigen = "L4";
	Linea4[12].combiDestino = "L4a";
	
	Linea4[13].codigo = "VVA";
	Linea4[13].nombre = "Vicente Valdes";
	Linea4[13].linea = "L4";
	Linea4[13].combi = true;
	Linea4[13].combiOrigen = "L4";
	Linea4[13].combiDestino = "L5";
	
	Linea4[14].codigo = "RMA";
	Linea4[14].nombre = "Rojas Magallanes";
	Linea4[14].linea = "L4";
	Linea4[14].combi = false;
	Linea4[14].combiOrigen = "";
	Linea4[14].combiDestino = "";
	
	Linea4[15].codigo = "TRI";
	Linea4[15].nombre = "Trinidad";
	Linea4[15].linea = "L4";
	Linea4[15].combi = false;
	Linea4[15].combiOrigen = "";
	Linea4[15].combiDestino = "";
	
	Linea4[16].codigo = "SJE";
	Linea4[16].nombre = "San Jose de la Estrella";
	Linea4[16].linea = "L4";
	Linea4[16].combi = false;
	Linea4[16].combiOrigen = "";
	Linea4[16].combiDestino = "";
	
	Linea4[17].codigo = "LQU";
	Linea4[17].nombre = "Los Quillayes";
	Linea4[17].linea = "L4";
	Linea4[17].combi = false;
	Linea4[17].combiOrigen = "";
	Linea4[17].combiDestino = "";
	
	Linea4[18].codigo = "ECO";
	Linea4[18].nombre = "Elisa Correa";
	Linea4[18].linea = "L4";
	Linea4[18].combi = false;
	Linea4[18].combiOrigen = "";
	Linea4[18].combiDestino = "";
	
	Linea4[19].codigo = "HSR";
	Linea4[19].nombre = "Hospital Sotero del Rio";
	Linea4[19].linea = "L4";
	Linea4[19].combi = false;
	Linea4[19].combiOrigen = "";
	Linea4[19].combiDestino = "";
	
	Linea4[20].codigo = "LME";
	Linea4[20].nombre = "Las Mercedes";
	Linea4[20].linea = "L4";
	Linea4[20].combi = false;
	Linea4[20].combiOrigen = "";
	Linea4[20].combiDestino = "";
	
	Linea4[21].codigo = "PIN";
	Linea4[21].nombre = "Protectora de la Infancia";
	Linea4[21].linea = "L4";
	Linea4[21].combi = false;
	Linea4[21].combiOrigen = "";
	Linea4[21].combiDestino = "";
	
	Linea4[22].codigo = "PPA";
	Linea4[22].nombre = "Plaza de Puente Alto";
	Linea4[22].linea = "L4";
	Linea4[22].combi = false;
	Linea4[22].combiOrigen = "";
	Linea4[22].combiDestino = "";
	
	// llenado Linea 4a
	Linea4a[0].codigo = "VIM";
	Linea4a[0].nombre = "Vicuña Makena";
	Linea4a[0].linea = "L4a";
	Linea4a[0].combi = true;
	Linea4a[0].combiOrigen = "L4a";
	Linea4a[0].combiDestino = "L4";
	
	Linea4a[1].codigo = "SJU";
	Linea4a[1].nombre = "Santa Julia";
	Linea4a[1].linea = "L4a";
	Linea4a[1].combi = false;
	Linea4a[1].combiOrigen = "";
	Linea4a[1].combiDestino = "";
	
	Linea4a[2].codigo = "LGR";
	Linea4a[2].nombre = "La Granja";
	Linea4a[2].linea = "L4a";
	Linea4a[2].combi = false;
	Linea4a[2].combiOrigen = "";
	Linea4a[2].combiDestino = "";
	
	Linea4a[3].codigo = "SRO";
	Linea4a[3].nombre = "Santa Rosa";
	Linea4a[3].linea = "L4a";
	Linea4a[3].combi = false;
	Linea4a[3].combiOrigen = "";
	Linea4a[3].combiDestino = "";
	
	Linea4a[4].codigo = "SRA";
	Linea4a[4].nombre = "San Ramon";
	Linea4a[4].linea = "L4a";
	Linea4a[4].combi = false;
	Linea4a[4].combiOrigen = "";
	Linea4a[4].combiDestino = "";
	
	Linea4a[5].codigo = "LCI";
	Linea4a[5].nombre = "Santa Julia";
	Linea4a[5].linea = "L4a";
	Linea4a[5].combi = true;
	Linea4a[5].combiOrigen = "L4a";
	Linea4a[5].combiDestino = "L2";
	
	//llenado linea 6
	Linea6[0].codigo = "CER";
	Linea6[0].nombre = "Cerrillos";
	Linea6[0].linea = "L6";
	Linea6[0].combi = false;
	Linea6[0].combiOrigen = "";
	Linea6[0].combiDestino = "";
	
	Linea6[1].codigo = "LVA";
	Linea6[1].nombre = "Lo Valledor";
	Linea6[1].linea = "L6";
	Linea6[1].combi = false;
	Linea6[1].combiOrigen = "";
	Linea6[1].combiDestino = "";
	
	Linea6[2].codigo = "PAC";
	Linea6[2].nombre = "Pedro Aguirre Cerda";
	Linea6[2].linea = "L6";
	Linea6[2].combi = false;
	Linea6[2].combiOrigen = "";
	Linea6[2].combiDestino = "";
	
	Linea6[3].codigo = "FRA";
	Linea6[3].nombre = "Franklin";
	Linea6[3].linea = "L6";
	Linea6[3].combi = true;
	Linea6[3].combiOrigen = "L6";
	Linea6[3].combiDestino = "L2";
	
	Linea6[4].codigo = "BIO";
	Linea6[4].nombre = "Bio Bio";
	Linea6[4].linea = "L6";
	Linea6[4].combi = false;
	Linea6[4].combiOrigen = "";
	Linea6[4].combiDestino = "";
	
	Linea6[5].codigo = "NUB";
	Linea6[5].nombre = "Ñuble";
	Linea6[5].linea = "L6";
	Linea6[5].combi = true;
	Linea6[5].combiOrigen = "L6";
	Linea6[5].combiDestino = "L5";
	
	Linea6[6].codigo = "ESN";
	Linea6[6].nombre = "Estadio Nacional";
	Linea6[6].linea = "L6";
	Linea6[6].combi = false;
	Linea6[6].combiOrigen = "";
	Linea6[6].combiDestino = "";
	
	Linea6[7].codigo = "NUO";
	Linea6[7].nombre = "Ñuñoa";
	Linea6[7].linea = "L6";
	Linea6[7].combi = false;
	Linea6[7].combiOrigen = "";
	Linea6[7].combiDestino = "";
	
	Linea6[8].codigo = "ISU";
	Linea6[8].nombre = "Ines de Suarez";
	Linea6[8].linea = "L6";
	Linea6[8].combi = false;
	Linea6[8].combiOrigen = "";
	Linea6[8].combiDestino = "";
	
	Linea6[9].codigo = "LEN";
	Linea6[9].nombre = "Los Leones";
	Linea6[9].linea = "L6";
	Linea6[9].combi = true;
	Linea6[9].combiOrigen = "L6";
	Linea6[9].combiDestino = "L1";

	//llenado linea 5
	Linea5[0].codigo = "PM";
	Linea5[0].nombre = "Plaza de Maipú";
	Linea5[0].linea = "L5";
	Linea5[0].combi = false;
	Linea5[0].combiOrigen = "";
	Linea5[0].combiDestino = "";

	Linea5[1].codigo = "SB";
	Linea5[1].nombre = "Santiago Bueras";
	Linea5[1].linea = "L5";
	Linea5[1].combi = false;
	Linea5[1].combiOrigen = "";
	Linea5[1].combiDestino = "";

	Linea5[2].codigo = "DS";
	Linea5[2].nombre = "Del Sol";
	Linea5[2].linea = "L5";
	Linea5[2].combi = false;
	Linea5[2].combiOrigen = "";
	Linea5[2].combiDestino = "";

	Linea5[3].codigo = "MT";
	Linea5[3].nombre = "Monte Tabor";
	Linea5[3].linea = "L5";
	Linea5[3].combi = false;
	Linea5[3].combiOrigen = "";
	Linea5[3].combiDestino = "";

	Linea5[4].codigo = "LP";
	Linea5[4].nombre = "Las Parcelas";
	Linea5[4].linea = "L5";
	Linea5[4].combi = false;
	Linea5[4].combiOrigen = "";
	Linea5[4].combiDestino = "";

	Linea5[5].codigo = "LS";
	Linea5[5].nombre = "Laguna Sur";
	Linea5[5].linea = "L5";
	Linea5[5].combi = false;
	Linea5[5].combiOrigen = "";
	Linea5[5].combiDestino = "";

	Linea5[6].codigo = "BR";
	Linea5[6].nombre = "Barrancas";
	Linea5[6].linea = "L5";
	Linea5[6].combi = false;
	Linea5[6].combiOrigen = "";
	Linea5[6].combiDestino = "";

	Linea5[7].codigo = "PU";
	Linea5[7].nombre = "Pudahuel";
	Linea5[7].linea = "L5";
	Linea5[7].combi = false;
	Linea5[7].combiOrigen = "";
	Linea5[7].combiDestino = "";

	Linea5[8].codigo = "SO";
	Linea5[8].nombre = "San Pablo";
	Linea5[8].linea = "L5";
	Linea5[8].combi = true;
	Linea5[8].combiOrigen = "L5";
	Linea5[8].combiDestino = "L1";

	Linea5[9].codigo = "PR";
	Linea5[9].nombre = "Lo Prado";
	Linea5[9].linea = "L5";
	Linea5[9].combi = false;
	Linea5[9].combiOrigen = "";
	Linea5[9].combiDestino = "";

	Linea5[10].codigo = "BL";
	Linea5[10].nombre = "Blanqueado";
	Linea5[10].linea = "L5";
	Linea5[10].combi = false;
	Linea5[10].combiOrigen = "";
	Linea5[10].combiDestino = "";

	Linea5[11].codigo = "GL";
	Linea5[11].nombre = "Gruta de Lourdes";
	Linea5[11].linea = "L5";
	Linea5[11].combi = false;
	Linea5[11].combiOrigen = "";
	Linea5[11].combiDestino = "";

	Linea5[12].codigo = "QN";
	Linea5[12].nombre = "Quinta Normal";
	Linea5[12].linea = "L5";
	Linea5[12].combi = false;
	Linea5[12].combiOrigen = "";
	Linea5[12].combiDestino = "";

	Linea5[13].codigo = "RC";
	Linea5[13].nombre = "Cumming";
	Linea5[13].linea = "L5";
	Linea5[13].combi = false;
	Linea5[13].combiOrigen = "";
	Linea5[13].combiDestino = "";

	Linea5[14].codigo = "NA";
	Linea5[14].nombre = "Santa Ana";
	Linea5[14].linea = "L5";
	Linea5[14].combi = true;
	Linea5[14].combiOrigen = "L5";
	Linea5[14].combiDestino = "L2";

	Linea5[15].codigo = "PZ";
	Linea5[15].nombre = "Plaza de Armas";
	Linea5[15].linea = "L5";
	Linea5[15].combi = false;
	Linea5[15].combiOrigen = "";
	Linea5[15].combiDestino = "";

	Linea5[16].codigo = "BE";
	Linea5[16].nombre = "Bellas Artes";
	Linea5[16].linea = "L5";
	Linea5[16].combi = false;
	Linea5[16].combiOrigen = "";
	Linea5[16].combiDestino = "";

	Linea5[17].codigo = "BQ";
	Linea5[17].nombre = "Baquedano";
	Linea5[17].linea = "L5";
	Linea5[17].combi = true;
	Linea5[17].combiOrigen = "L5";
	Linea5[17].combiDestino = "L1";

	Linea5[18].codigo = "PB";
	Linea5[18].nombre = "Parque Bustamante";
	Linea5[18].linea = "L5";
	Linea5[18].combi = false;
	Linea5[18].combiOrigen = "";
	Linea5[18].combiDestino = "";

	Linea5[19].codigo = "SI";
	Linea5[19].nombre = "Santa Isabel";
	Linea5[19].linea = "L5";
	Linea5[19].combi = false;
	Linea5[19].combiOrigen = "";
	Linea5[19].combiDestino = "";

	Linea5[20].codigo = "IR";
	Linea5[20].nombre = "Irarrázaval";
	Linea5[20].linea = "L5";
	Linea5[20].combi = false;
	Linea5[20].combiOrigen = "";
	Linea5[20].combiDestino = "";

	Linea5[21].codigo = "NU";
	Linea5[21].nombre = "Ñuble";
	Linea5[21].linea = "L5";
	Linea5[21].combi = true;
	Linea5[21].combiOrigen = "L5";
	Linea5[21].combiDestino = "L6";

	Linea5[22].codigo = "RA";
	Linea5[22].nombre = "Rodrigo de Araya";
	Linea5[22].linea = "L5";
	Linea5[22].combi = false;
	Linea5[22].combiOrigen = "";
	Linea5[22].combiDestino = "";

	Linea5[23].codigo = "CV";
	Linea5[23].nombre = "Carlos Valdovinos";
	Linea5[23].linea = "L5";
	Linea5[23].combi = false;
	Linea5[23].combiOrigen = "";
	Linea5[23].combiDestino = "";

	Linea5[24].codigo = "AG";
	Linea5[24].nombre = "Camino Agrícola";
	Linea5[24].linea = "L5";
	Linea5[24].combi = false;
	Linea5[24].combiOrigen = "";
	Linea5[24].combiDestino = "";

	Linea5[25].codigo = "SJ";
	Linea5[25].nombre = "San Joaquín";
	Linea5[25].linea = "L5";
	Linea5[25].combi = false;
	Linea5[25].combiOrigen = "";
	Linea5[25].combiDestino = "";

	Linea5[26].codigo = "PE";
	Linea5[26].nombre = "Pedrero";
	Linea5[26].linea = "L5";
	Linea5[26].combi = false;
	Linea5[26].combiOrigen = "";
	Linea5[26].combiDestino = "";

	Linea5[27].codigo = "MA";
	Linea5[27].nombre = "Mirador";
	Linea5[27].linea = "L5";
	Linea5[27].combi = false;
	Linea5[27].combiOrigen = "";
	Linea5[27].combiDestino = "";

	Linea5[28].codigo = "LF";
	Linea5[28].nombre = "Bellavista de La Florida";
	Linea5[28].linea = "L5";
	Linea5[28].combi = false;
	Linea5[28].combiOrigen = "";
	Linea5[28].combiDestino = "";

	Linea5[29].codigo = "VV";
	Linea5[29].nombre = "Vicente Valdes";
	Linea5[29].linea = "L5";
	Linea5[29].combi = true;
	Linea5[29].combiOrigen = "L5";
	Linea5[29].combiDestino = "L4";
	
	string init;
	string origen;
	string destino;
	string l_origen;
	string l_destino;
	string Ruta[100];
	init = argv[1];
	int cont=0, n_dest, n_orig, n_combi;
	if(init=="-v"){
		cout<<"integrantes: Erwin Alves Silva - Alberto Vasquez Benavente"<<endl;
	}
	if(init=="-f")
	{
	origen = argv[2];
	destino = argv[3];
	string aux;
	//verificar linea destino y linea origen
	for(int i=0;i<=30;i++)
	{
	if (origen==Linea1[i].codigo)
	{
		l_origen=Linea1[i].linea;
		n_orig=i;
	}
	if (destino==Linea1[i].codigo)
	{
		l_destino=Linea1[i].linea;
		n_dest=i;
	}
	if (origen==Linea2[i].codigo)
	{
		l_origen=Linea2[i].linea;
		n_orig=i;
	}
	if (destino==Linea2[i].codigo)
	{
		l_destino=Linea2[i].linea;
		n_dest=i;
	}
	if (origen==Linea4[i].codigo)
	{
		l_origen=Linea4[i].linea;
		n_orig=i;
	}
	if (destino==Linea4[i].codigo)
	{
		l_destino=Linea4[i].linea;
		n_dest=i;
	}
	if (origen==Linea4a[i].codigo)
	{
		l_origen=Linea4a[i].linea;
		n_orig=i;
	}
	if (destino==Linea4a[i].codigo)
	{
		l_destino=Linea4a[i].linea;
		n_dest=i;
	}
	if (origen==Linea5[i].codigo)
	{
		l_origen=Linea5[i].linea;
		n_orig=i;
	}
	if (destino==Linea5[i].codigo)
	{
		l_destino=Linea5[i].linea;
		n_dest=i;
	}
	if (origen==Linea6[i].codigo)
	{
		l_origen=Linea6[i].linea;
		n_orig=i;
	}
	if (destino==Linea6[i].codigo)
	{
		l_destino=Linea6[i].linea;
		n_dest=i;
	}
	}
	/*cout<<origen<<endl;
	cout<<destino<<endl;
	cout<<l_origen<<endl;
	cout<<l_destino<<endl;
	cout<<n_orig<<endl;
	cout<<n_dest<<endl;*/
	if (l_origen==l_destino)
	{
		if (l_origen=="L1")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea1[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=27;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea1[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea1[n_orig].nombre;
				}
			}	
		}
		if (l_origen=="L2")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea2[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=22;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea2[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea2[n_orig].nombre;
				}
			}	
		}
		if (l_origen=="L4")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea4[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=23;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea4[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea4[n_orig].nombre;
				}
			}	
		}
		if (l_origen=="L4a")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea4a[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=6;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea4a[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea4a[n_orig].nombre;
				}
			}	
		}
		if (l_origen=="L5")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea5[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=30;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea5[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea5[n_orig].nombre;
				}
			}	
		}
		if (l_origen=="L6")
		{
			if(n_orig<n_dest)
			{
				for(int j=0;j<=n_dest;j++)
				{
					if (j>=n_orig)
					{
						Ruta[cont]=Linea6[j].nombre;
						cont++;
					}
				}
			}
			else
			{
				if (n_orig>n_dest)
				{
					//cout<<"si"<<endl;
					for(int j=10;j>=n_dest;j--)
					{	
						if (j<=n_orig)
						{
							Ruta[cont]=Linea6[j].nombre;
							cont++;
						}
					}
				}
				else
				{
					Ruta[cont]=Linea6[n_orig].nombre;
				}
			}	
		}
	}
	//imprimir Ruta
	if (cont>1)
	{
		for(int k=1;k<cont;k++)
		{
			if (k<cont)
			{
				cout<<Ruta[k-1]<<" - ";
			}
			if (k==cont-1)
			{
				cout<<Ruta[k]<<endl;
			}
		}
		cout<<endl;
	}
	else
	{
		cout<<Ruta[cont]<<endl;
	}
}
return 0;
}

