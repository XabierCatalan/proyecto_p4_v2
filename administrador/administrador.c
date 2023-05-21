/*
 * administrador.c
 *
 *  Created on: 21 may 2023
 *      Author: xabic
 */
#include "administrador.h"

void imprimirAdmin(Administrador* a, int x){
	for (int var = 0; var < x; ++var) {

		printf("id = %i , nombre = %s, email = %s, contra = %s \n", a[var].id_admin, a[var].nombre_admin, a[var].gmail_admin, a[var].contra_admin );

	}
}

int compAdmin(Administrador* a , char* admin, char* contra, int x){
	int resultado = 0;
	for (int var = 0; var < x; ++var) {
		printf("nombre= %s \n", admin);
		printf("n= %s  \n", a[var].nombre_admin);
		printf("contra= %s \n", contra);
		printf("c= %s \n", a[var].contra_admin);

		if(a[var].nombre_admin == admin && a[var].contra_admin == contra){
			resultado = 1;
		}

	}
	return resultado;
}


