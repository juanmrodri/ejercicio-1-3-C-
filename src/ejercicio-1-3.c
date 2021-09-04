/*
 ============================================================================
 Name        : ejercicio-1-3.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-3:
Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: "libre" - P: "presencial" – R: "remota")
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que corresponda.
a) El Legajo del mejor promedio femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)




		char sexoIngresado;
		int notaPromedio;
		int edadIngresada;
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	// vars
		// el legajo lo voy a limitar a 4 digitos, pinto
		int legajoIngresado;
		char tipoCursada;
		int cantidadMaterias;

		char consultaVueltas='s';

		// pedimos los datos

		while(consultaVueltas=='s')
		{
			printf("Por favor ingrese el legajo: ");
			scanf("%d", &legajoIngresado);
			while(legajoIngresado<=0 || legajoIngresado>9999)
			{
				printf("Por favor ingrese un legajo correcto: ");
				scanf("%d", &legajoIngresado);
			}
			printf("Por favor ingrese el tipo de cursada: ");
			scanf("%s", &tipoCursada);
			while(tipoCursada!='L' && tipoCursada!='P' && tipoCursada!='R')
			{
				printf("Por favor ingrese el tipo de cursada(L: 'libre' - P: 'presencial' – R: 'remota') : ");
				scanf("%s", &tipoCursada);
			}
			printf("Por favor ingrese la cantidad de materias a cursar: ");
			scanf("%d", &cantidadMaterias);
			while(cantidadMaterias<=0 || cantidadMaterias>8)
			{
				printf("Por favor ingrese la cantidad de materias correcta: ");
				scanf("%d", &cantidadMaterias);
			}




			// consulta para seguir
			printf("Quiere ingresar otro alumno?");
			scanf("%s", &consultaVueltas);
		}

		printf("Adios!");

	return EXIT_SUCCESS;
}
