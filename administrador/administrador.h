/*
 * administrador.h
 *
 *  Created on: 1 abr 2023
 *      Author: xabic
 */

#ifndef ADMINISTRADOR_ADMINISTRADOR_H_
#define ADMINISTRADOR_ADMINISTRADOR_H_

typedef struct {
	int id_admin;
	char *nombre_admin;
	char *gmail_admin;
	char *contra_admin;


}Administrador;

void imprimirAdmin(Administrador* a, int x);

int comprobarAdmin(Administrador* a , char admin[], char contra[], int x);





#endif /* ADMINISTRADOR_ADMINISTRADOR_H_ */
