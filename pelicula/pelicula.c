/*
 * pelicula.c
 *
 *  Created on: 2 abr 2023
 *      Author: koldo
 */
#include "pelicula.h"
#include <string.h>
#include <stdio.h>
#include "../sql/sql.h"


void imprimirPeliculas(Pelicula *p, int x){

	for (int var = 0; var < x; ++var) {

			printf("Id_Pelicula: %i | Titulo: %s | Genero: %s | Director: %s | Formato: %s | Precio: %.2f | Cantidad: %i \n ",
					p[var].id_pelicula, p[var].titulo, buscarGenero(p[var].cod_genero) , p[var].director, buscarFormato(p[var].cod_formato),
					p[var].precio, p[var].cantidad);

		}


}


