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

int compAdmin(Administrador* a , char admin[], char contra[], int x){
	int resultado = 0;
	for (int var = 0; var < x; ++var) {
		if(a[var].nombre_admin == admin && a[var].contra_admin == contra){
			resultado = 1;
			break;
		}

	}
	return resultado;
}

}
