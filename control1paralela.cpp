#include <stdio.h>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string> 
#include <vector>

using namespace std;

struct Estacion{ 
   string codigo;
   string nombre;
   string linea;
   bool combi;
   string combiOrigen;
   string combiDestino;
};

void largoMinimo(Estacion matriz[][51], int largo[][3], string origen, string destino){
	int auxi,auxj=100,auxk=100, cont;
	for(int i=0;i<9;i++){
		for(int j=0;j<51;j++){
			if(matriz[i][j].codigo==origen){
				auxi=i;
				auxj=j;
				for(int k=0;k<51;k++){
					if(matriz[auxi][k].codigo==destino){
						auxk=k;
					}
				}
				if(auxk==100){
					auxj=100;
				}
			}
		}
		if(auxk!=100 && auxj < auxk){
			largo[auxi][0] = auxk - auxj +1;
			largo[auxi][1] = auxj;
			largo[auxi][2] = auxk;
		}
		else if(auxk!=100 && auxj > auxk){
			largo[auxi][0] = (auxj+1) - auxk;
			largo[auxi][1] = auxj;
			largo[auxi][2] = auxk;
		}
		auxj=100;
		auxk=100;
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<3;j++){
			cout<<"largo["<<i<<"]["<<j<<"]= "<<largo[i][j]<<" ";
		}
		cout<<endl;
	}
}

void vectorInvertido(Estacion vector[], int largo){
	Estacion vectorAux[largo];
	for(int j=0;j<largo;j++)
		vectorAux[j]=vector[j];
	for(int i=0;i<largo;i++)
		vector[i]=vectorAux[(largo-1)-i];
}

void caminoMinimo(Estacion matriz[][51], int largo[][3], Estacion camino[], int& aux){
	int auxi;
	aux=1000;
	for(int i=0;i<9;i++){
		if(aux>largo[i][0] && largo[i][0]!=0){
			aux=largo[i][0];
			auxi=i;
		}
	}
	cout<<"aux: "<<aux<<endl;
	cout<<"auxi: "<<auxi<<endl;
	Estacion caminoAux[aux];
	if(largo[auxi][1]<largo[auxi][2]){
		for(int j=0;j<aux;j++){
			camino[j]=matriz[auxi][j];
		}
	}
	else{
		for(int j=aux;j>0;j--){
			camino[j]=matriz[auxi][j];

		}
		vectorInvertido(camino,aux);
	}
}

void imprimirVector(Estacion vector[],int largo){
	for(int i=0;i<largo;i++){
		if(i==largo-1){
			cout<<vector[i].nombre<<endl;
		}
		else
			cout<<vector[i].nombre<<" - ";
	}
}

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
	Linea4a[5].nombre = "La Cisterna";
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

	Linea5[29].codigo = "VVA";
	Linea5[29].codigo = "VV";
	Linea5[29].nombre = "Vicente Valdes";
	Linea5[29].linea = "L5";
	Linea5[29].combi = true;
	Linea5[29].combiOrigen = "L5";
	Linea5[29].combiDestino = "L4";


	string cod = argv[1];
	string origen = argv[2];
	string destino = argv[3];
	
	if(cod=="-v"){
		cout<<"integrantes: Erwin Alves Silva - Alberto Vasquez Benavente"<<endl;
	}
	else if((cod=="-f") && ((origen.length()>0) || (destino.length()>0))){
	
		string origen = argv[2];
		string destino = argv[3];
		int largo[9][3],l;
		Estacion camino[51];

		for(int i=0;i<9;i++)
			for(int j=0;j<3;j++)
				largo[i][j]=0;

		Estacion rutas[50][51];

		//linea 1
		rutas[0][0]=Linea1[26];
		rutas[0][1]=Linea1[25];
		rutas[0][2]=Linea1[24];
		rutas[0][3]=Linea1[23];
		rutas[0][4]=Linea1[22];
		rutas[0][5]=Linea1[21];
		rutas[0][6]=Linea1[20];
		rutas[0][7]=Linea1[19];
		rutas[0][8]=Linea1[18];
		rutas[0][9]=Linea1[17];
		rutas[0][10]=Linea1[16];
		rutas[0][11]=Linea1[15];
		rutas[0][12]=Linea1[14];
		rutas[0][13]=Linea1[13];
		rutas[0][14]=Linea1[12];
		rutas[0][15]=Linea1[11];
		rutas[0][16]=Linea1[10];
		rutas[0][17]=Linea1[9];
		rutas[0][18]=Linea1[8];
		rutas[0][19]=Linea1[7];
		rutas[0][20]=Linea1[6];
		rutas[0][21]=Linea1[5];
		rutas[0][22]=Linea1[4];
		rutas[0][23]=Linea1[3];
		rutas[0][24]=Linea1[2];
		rutas[0][25]=Linea1[1];
		rutas[0][26]=Linea1[0];

		//linea 2
		rutas[1][0]=Linea2[21];
		rutas[1][1]=Linea2[20];
		rutas[1][2]=Linea2[19];
		rutas[1][3]=Linea2[18];
		rutas[1][4]=Linea2[17];
		rutas[1][5]=Linea2[16];
		rutas[1][6]=Linea2[15];
		rutas[1][7]=Linea2[14];
		rutas[1][8]=Linea2[13];
		rutas[1][9]=Linea2[12];
		rutas[1][10]=Linea2[11];
		rutas[1][11]=Linea2[10];
		rutas[1][12]=Linea2[9];
		rutas[1][13]=Linea2[8];
		rutas[1][14]=Linea2[7];
		rutas[1][15]=Linea2[6];
		rutas[1][16]=Linea2[5];
		rutas[1][17]=Linea2[4];
		rutas[1][18]=Linea2[3];
		rutas[1][19]=Linea2[2];
		rutas[1][20]=Linea2[1];
		rutas[1][21]=Linea2[0];

		//linea 4
		rutas[2][0]=Linea4[22];
		rutas[2][1]=Linea4[21];
		rutas[2][2]=Linea4[20];
		rutas[2][3]=Linea4[19];
		rutas[2][4]=Linea4[18];
		rutas[2][5]=Linea4[17];
		rutas[2][6]=Linea4[16];
		rutas[2][7]=Linea4[15];
		rutas[2][8]=Linea4[14];
		rutas[2][9]=Linea4[13];
		rutas[2][10]=Linea4[12];
		rutas[2][11]=Linea4[11];
		rutas[2][12]=Linea4[10];
		rutas[2][13]=Linea4[9];
		rutas[2][14]=Linea4[8];
		rutas[2][15]=Linea4[7];
		rutas[2][16]=Linea4[6];
		rutas[2][17]=Linea4[5];
		rutas[2][18]=Linea4[4];
		rutas[2][19]=Linea4[3];
		rutas[2][20]=Linea4[2];
		rutas[2][21]=Linea4[1];
		rutas[2][22]=Linea4[0];

		//linea 4a
		rutas[3][17]=Linea4a[5];
		rutas[3][18]=Linea4a[4];
		rutas[3][19]=Linea4a[3];
		rutas[3][20]=Linea4a[2];
		rutas[3][21]=Linea4a[1];
		rutas[3][22]=Linea4a[0];

		//linea 5
		rutas[4][0]=Linea5[29];
		rutas[4][1]=Linea5[28];
		rutas[4][2]=Linea5[27];
		rutas[4][3]=Linea5[26];
		rutas[4][4]=Linea5[25];
		rutas[4][5]=Linea5[24];
		rutas[4][6]=Linea5[23];
		rutas[4][7]=Linea5[22];
		rutas[4][8]=Linea5[21];
		rutas[4][9]=Linea5[20];
		rutas[4][10]=Linea5[19];
		rutas[4][11]=Linea5[18];
		rutas[4][12]=Linea5[17];
		rutas[4][13]=Linea5[16];
		rutas[4][14]=Linea5[15];
		rutas[4][15]=Linea5[14];
		rutas[4][16]=Linea5[13];
		rutas[4][17]=Linea5[12];
		rutas[4][18]=Linea5[11];
		rutas[4][19]=Linea5[10];
		rutas[4][20]=Linea5[9];
		rutas[4][21]=Linea5[8];
		rutas[4][22]=Linea5[7];
		rutas[4][23]=Linea5[6];
		rutas[4][24]=Linea5[5];
		rutas[4][25]=Linea5[4];
		rutas[4][26]=Linea5[3];
		rutas[4][27]=Linea5[2];
		rutas[4][28]=Linea5[1];
		rutas[4][29]=Linea5[0];

		//linea 6
		rutas[5][0]=Linea6[9];
		rutas[5][1]=Linea6[8];
		rutas[5][2]=Linea6[7];
		rutas[5][3]=Linea6[6];
		rutas[5][4]=Linea6[5];
		rutas[5][5]=Linea6[4];
		rutas[5][6]=Linea6[3];
		rutas[5][7]=Linea6[2];
		rutas[5][8]=Linea6[1];
		rutas[5][9]=Linea6[0];

		// puente alto -> vicuña mackenna -> la cisterna -> santa ana -> plaza de maipu
		rutas[6][0]=Linea4[22];
		rutas[6][1]=Linea4[21];
		rutas[6][2]=Linea4[20];
		rutas[6][3]=Linea4[19];
		rutas[6][4]=Linea4[18];
		rutas[6][5]=Linea4[17];
		rutas[6][6]=Linea4[16];
		rutas[6][7]=Linea4[15];
		rutas[6][8]=Linea4[14];
		rutas[6][9]=Linea4[13];
		rutas[6][10]=Linea4a[0];
		rutas[6][11]=Linea4a[1];
		rutas[6][12]=Linea4a[2];
		rutas[6][13]=Linea4a[3];
		rutas[6][14]=Linea4a[4];
		rutas[6][15]=Linea4a[5];
		rutas[6][16]=Linea2[1];
		rutas[6][17]=Linea2[2];
		rutas[6][18]=Linea2[3];
		rutas[6][19]=Linea2[4];
		rutas[6][20]=Linea2[5];
		rutas[6][21]=Linea2[6];
		rutas[6][22]=Linea2[7];
		rutas[6][23]=Linea2[8];
		rutas[6][24]=Linea2[9];
		rutas[6][25]=Linea2[10];
		rutas[6][26]=Linea2[11];
		rutas[6][27]=Linea2[12];
		rutas[6][28]=Linea2[13];
		rutas[6][29]=Linea5[13];
		rutas[6][30]=Linea5[12];
		rutas[6][31]=Linea5[11];
		rutas[6][32]=Linea5[10];
		rutas[6][33]=Linea5[9];
		rutas[6][34]=Linea5[8];
		rutas[6][35]=Linea5[7];
		rutas[6][36]=Linea5[6];
		rutas[6][37]=Linea5[5];
		rutas[6][38]=Linea5[4];
		rutas[6][39]=Linea5[3];
		rutas[6][40]=Linea5[2];
		rutas[6][41]=Linea5[1];
		rutas[6][42]=Linea5[0];

		// puente alto -> Vicente Valdes -> plaza de maipu
		rutas[7][0]=Linea4[22];
		rutas[7][1]=Linea4[21];
		rutas[7][2]=Linea4[20];
		rutas[7][3]=Linea4[19];
		rutas[7][4]=Linea4[18];
		rutas[7][5]=Linea4[17];
		rutas[7][6]=Linea4[16];
		rutas[7][7]=Linea4[15];
		rutas[7][8]=Linea4[14];
		rutas[7][9]=Linea4[13];
		rutas[7][10]=Linea5[28];
		rutas[7][11]=Linea5[27];
		rutas[7][12]=Linea5[26];
		rutas[7][13]=Linea5[25];
		rutas[7][14]=Linea5[24];
		rutas[7][15]=Linea5[23];
		rutas[7][16]=Linea5[22];
		rutas[7][17]=Linea5[21];
		rutas[7][18]=Linea5[20];
		rutas[7][19]=Linea5[19];
		rutas[7][20]=Linea5[18];
		rutas[7][21]=Linea5[17];
		rutas[7][22]=Linea5[16];
		rutas[7][23]=Linea5[15];
		rutas[7][24]=Linea5[14];
		rutas[7][25]=Linea5[13];
		rutas[7][26]=Linea5[12];
		rutas[7][27]=Linea5[11];
		rutas[7][28]=Linea5[10];
		rutas[7][29]=Linea5[9];
		rutas[7][30]=Linea5[8];
		rutas[7][31]=Linea5[7];
		rutas[7][32]=Linea5[6];
		rutas[7][33]=Linea5[5];
		rutas[7][34]=Linea5[4];
		rutas[7][35]=Linea5[3];
		rutas[7][36]=Linea5[2];
		rutas[7][37]=Linea5[1];
		rutas[7][38]=Linea5[0];

		//l5 puente alto -> Tobalaba -> san pablo -> plaza de maipu
		rutas[8][0]=Linea4[22];
		rutas[8][1]=Linea4[21];
		rutas[8][2]=Linea4[20];
		rutas[8][3]=Linea4[19];
		rutas[8][4]=Linea4[18];
		rutas[8][5]=Linea4[17];
		rutas[8][6]=Linea4[16];
		rutas[8][7]=Linea4[15];
		rutas[8][8]=Linea4[14];
		rutas[8][9]=Linea4[13];
		rutas[8][10]=Linea4[12];
		rutas[8][11]=Linea4[11];
		rutas[8][12]=Linea4[10];
		rutas[8][13]=Linea4[9];
		rutas[8][14]=Linea4[8];
		rutas[8][15]=Linea4[7];
		rutas[8][16]=Linea4[6];
		rutas[8][17]=Linea4[5];
		rutas[8][18]=Linea4[4];
		rutas[8][19]=Linea4[3];
		rutas[8][20]=Linea4[2];
		rutas[8][21]=Linea4[1];
		rutas[8][22]=Linea4[0];
		rutas[8][23]=Linea1[19];
		rutas[8][24]=Linea1[18];
		rutas[8][25]=Linea1[17];
		rutas[8][26]=Linea1[16];
		rutas[8][27]=Linea1[15];
		rutas[8][28]=Linea1[14];
		rutas[8][29]=Linea1[13];
		rutas[8][30]=Linea1[12];
		rutas[8][31]=Linea1[11];
		rutas[8][32]=Linea1[10];
		rutas[8][33]=Linea1[9];
		rutas[8][34]=Linea1[8];
		rutas[8][35]=Linea1[7];
		rutas[8][36]=Linea1[6];
		rutas[8][37]=Linea1[5];
		rutas[8][38]=Linea1[4];
		rutas[8][39]=Linea1[3];
		rutas[8][40]=Linea1[2];
		rutas[8][41]=Linea1[1];
		rutas[8][42]=Linea1[0];
		rutas[8][43]=Linea5[7];
		rutas[8][44]=Linea5[6];
		rutas[8][45]=Linea5[5];
		rutas[8][46]=Linea5[4];
		rutas[8][47]=Linea5[3];
		rutas[8][48]=Linea5[2];
		rutas[8][49]=Linea5[1];
		rutas[8][50]=Linea5[0];

		largoMinimo(rutas,largo,origen,destino);
		caminoMinimo(rutas,largo,camino,l);
		imprimirVector(camino,l);
	}

return 0;
}

