#include <stdio.h>
#include <string.h>

int main() {

	struct {
		char prodi[3];
		char nama[100];
		char nilai[3];
	}MHS;

	FILE *Matkul;
	FILE *MatkulUpdate;

	Matkul = fopen("nilai.txt","r");
	MatkulUpdate = fopen("nilaiupdate.txt","w");
	fscanf(Matkul, "%s %s %s\n", &MHS.prodi,&MHS.nama, &MHS.nilai);


	do{
	  if((strcmp(MHS.nama,"MHE") == 0)){

	  	strcpy(MHS.nilai, "80");
	  }
	  if((strcmp(MHS.nama,"MHJ") == 0)){

	  	strcpy(MHS.nilai, "80");
	}
	  fprintf(MatkulUpdate, "%s %s %s\n", MHS.prodi, MHS.nama, MHS.nilai);

	  fscanf(Matkul, "%s %s %s\n", &MHS.prodi,&MHS.nama, &MHS.nilai);
	  
	}while(!feof(Matkul));

	fclose(Matkul);
	fclose(MatkulUpdate);
	     
	return 0;
}
