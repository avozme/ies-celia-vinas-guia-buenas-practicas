/* Programa: JUEGO DE MEMORIA
	Ejercicio: n�19 (obligatorio) del tema 4
	Autor: Alfredo Moreno
*/

#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


/**************************** PROTOTIPOS *************************************/

void dibujar_pantalla(int);						// Dibujar pantalla de juego
int elegir_nivel(void);								// Elegir nivel de dificultad
void generar_combinacion(int lon,int nivel);	// Generar combinacion de colores
void mostrar_combinacion(int lon,int nivel); // Dibujar la combinacion de colores
int preguntar_combinacion(int lon);				// Introducir combinacion del jugador y comparar
void finalizar(int);									// Muestra el resultado de la partida
void retardo(int);

/************************* VARIABLES GLOBALES*********************************/

/* Las combinaciones son de 10 colores como maximo. Lo logico seria usar
un array, pero todavia no los hemos dado. Las variables seran globales
para evitar tener que pasarlas por referencia en todas las funciones (si
fuera un array seria otra historia) */
int color1, color2, color3, color4, color5;
int color6, color7, color8, color9, color10;

/*************************** PROGRAMA PRINCIPAL ******************************/

int main(void)
{
	int acierto;							// �Acerto el jugador la combinacion?
	int nivel;								// Nivel de dificultad
	int longitud;							// N� de colores de la combinacion de colores

	randomize();
	nivel = elegir_nivel();
	dibujar_pantalla(nivel);   		// Dibuja la pantalla de juego
	longitud = 1;							// Empezamos por series de longitud 1
	do											// Bucle principal del juego
	{
		/* Generar una combinacion de colores de la longitud adecuada */
		generar_combinacion(longitud, nivel);
		/* Preguntar la combinacion al jugador y comparar */
		/* Si acierto = 1, el jugador la reprodujo con exito */
		acierto = preguntar_combinacion(longitud);
		/* Incrementar la longitud de la serie de colores */
		longitud++;
	}
	while (acierto == 1);
	finalizar(longitud-1);
	return 1;
}


/*************************** FUNCIONES **************************************/
/* Dibujar la pantalla de juego */
void dibujar_pantalla(int nivel)
{
	int x,y;
	textbackground(BLUE);
	clrscr();
	textcolor(YELLOW);
	// Dibujamos contornos de la pantalla
	for (x=1; x<=80; x++)
	{
		gotoxy(x, 1); cprintf("%c",205);
		gotoxy(x, 3); cprintf("%c",205);
		gotoxy(x, 24);cprintf("%c",205);
	}
	for (y=1; y<=24; y++)
	{
		gotoxy(1, y); cprintf("%c",186);
		gotoxy(80,y); cprintf("%c",186);
	}

	// Dibujamos esquinas de la pantalla
	gotoxy(1,1);   cprintf("%c",201);	gotoxy(80,1);  cprintf("%c",187);
	gotoxy(1,3);	cprintf("%c",204);	gotoxy(80,3);  cprintf("%c",185);
	gotoxy(1,24);	cprintf("%c",200);	gotoxy(80,24); cprintf("%c",188);

	// Dibujamos contornos de los contenedores de las series
	textcolor(LIGHTGRAY);
	for (x=20; x<=60; x++)
	{
		gotoxy(x, 7); cprintf("%c",205);
		gotoxy(x, 9); cprintf("%c",205);
		gotoxy(x,15); cprintf("%c",205);
		gotoxy(x,17); cprintf("%c",205);
	}
	// Dibujamos laterales y esquinas de los contenedores
	for (x=1; x<=11; x++)
	{
		gotoxy(16+4*x, 7); cprintf("%c",203);
		gotoxy(16+4*x, 8); cprintf("%c",186);
		gotoxy(16+4*x, 9); cprintf("%c",202);
		gotoxy(16+4*x,15); cprintf("%c",203);
		gotoxy(16+4*x,16); cprintf("%c",186);
		gotoxy(16+4*x,17); cprintf("%c",202);
	}
	gotoxy(20,7);  cprintf("%c",201); gotoxy(60,7); cprintf("%c",187);
	gotoxy(20,9);  cprintf("%c",200); gotoxy(60,9); cprintf("%c",188);
	gotoxy(20,15); cprintf("%c",201); gotoxy(60,15);cprintf("%c",187);
	gotoxy(20,17); cprintf("%c",200); gotoxy(60,17); cprintf("%c",188);

	// Textos
	textcolor(YELLOW);
	gotoxy(7,2);   cprintf("JUEGO DE MEMORIA");
	textcolor(LIGHTCYAN);
	gotoxy(32,5);  cprintf("MI COMBINACION ES");
	gotoxy(30,13); cprintf("ESCRIBE TU COMBINACION");
	textcolor(YELLOW);
	gotoxy(34,2);  cprintf("NIVEL: ");
	switch (nivel)
	{
		case 1: cprintf("DIFICIL"); break;
		case 2: cprintf("MEDIO"); break;
		case 3: cprintf("FACIL"); break;
	}
}

/* Elegir el nivel de dificultad del juego. Se devuelve el nivel como un numero
entero entre 1 y 5 (1 = dificil, 3 = facil) */
int elegir_nivel(void)
{
	char nivel_car;
	int nivel;
	// Primero lo leemos como caracter, para evitar errores en la entrada
	cprintf("Introduzca el nivel de dificultad (1=dificil, 2=medio, 3=facil)\r\n");
	do
	{
		scanf("%c", &nivel_car);
		if ((nivel_car !='1') && (nivel_car != '2') && (nivel_car != '3'))
			cprintf("Valor incorrecto. Introduzca 1, 2 o 3:\r\n");
	} while ((nivel_car !='1') && (nivel_car != '2') && (nivel_car != '3'));
	nivel = nivel_car - 48;		// Convertimos el nivel a numero
	return nivel;
}


/* Genera una combinacion de colores de longitud "lon" (entre 1 y 10).
La combinacion de colores se guarda en las variables globales color1,
color2... color10. Los colores pueden ser: 1 = rojo, 2 = azul, 3 = amarillo */
void generar_combinacion(int lon, int nivel)
{
	int i, col;

	for (i=1; i<=lon; i++)
	{
		col = random(3) + 1;
		switch (i)   		// No podemos usar arrays (todavia no los hemos estudiado)
		{						// Hacemos un switch para almacenar el color i-esimo
			case 1: color1 = col; break;
			case 2: color2 = col; break;
			case 3: color3 = col; break;
			case 4: color4 = col; break;
			case 5: color5 = col; break;
			case 6: color6 = col; break;
			case 7: color7 = col; break;
			case 8: color8 = col; break;
			case 9: color9 = col; break;
			case 10:color10= col; break;
		}
	}
	mostrar_combinacion(lon, nivel);	// Mostrar combinacion en la pantalla
}

/* Muestra en la pantala una combinacion de colores de longitud "lon" durante
un tiempo determinado que depende de "nivel". Despues la borra */
void mostrar_combinacion(int lon, int nivel)
{
	int i, col;

	/* Escribimos la longitud de la serie en la linea informativa */
	/* El rotulo parpadera varias veces antes de mostrar la serie */
	gotoxy(62,2); cprintf("            ");
	textcolor(LIGHTMAGENTA);
	for (i=1; i<=3; i++)
	{
		gotoxy(62,2); cprintf("S E R I E :  %d", lon);
		retardo(1);
		gotoxy(62,2); cprintf("               ");
		retardo(1);
	}
	gotoxy(62,2); cprintf("S E R I E :  %d", lon);

	/* Mostramos la combinacion */
	textcolor(YELLOW);
	for (i=1; i<=lon; i++)
	{
		switch(i)			// No podemos usar arrays (aun no se han estudiado)
		{						// Hacemos un switch para recuperar el color i-esimo
			case 1: col = color1; break;
			case 2: col = color2; break;
			case 3: col = color3; break;
			case 4: col = color4; break;
			case 5: col = color5; break;
			case 6: col = color6; break;
			case 7: col = color7; break;
			case 8: col = color8; break;
			case 9: col = color9; break;
			case 10:col = color10;break;
		}
		gotoxy(18+i*4, 8); 	// Mostramos el color
		cprintf("%d", col);
		retardo(nivel);		// Esperamos un poco antes de mostrar el siguiente
	}
	retardo(nivel);			// Esperamos antes de borrar todo

	/* Borramos la combinacion */
	for (i=1; i<=lon; i++)
	{
		gotoxy(18+i*4, 8);
		cprintf(" ");
	}
}

/* Pregunta al jugador la combinacion de colores y la compara con la que se
genero al azar y se guardo en color1, color2... color10. Si el jugador falla
devuelve 0, o 1 si acierta */
int preguntar_combinacion(int lon)
{
	int acierto = 1;
	int i, color;

	// Primero borramos lo que pudiera haber escrito de antes
	for (i=1; i<=lon; i++)
	{
		gotoxy(18+i*4, 16);
		cprintf(" ");
	}

   // Iniciamos la rutina de lectura de la combinacion y comparacion
	textcolor(LIGHTRED);
	for (i=1; i<=lon; i++)
	{
		gotoxy(18+i*4, 16);	// Colocamos el cursor en el lugar adecuado
		color = getche();		// Leemos el color (con eco)
		color = color-48;  	// Convertimos el caracter a un numero
		/* Comparamos con el color de la serie */
		switch(i)		// No podemos usar arrays (aun no se han dado)
		{					// Hacemos un switch para comparar "color" con el color i-esimo
			case 1: if (color != color1)  acierto = 0; break;
			case 2: if (color != color2)  acierto = 0; break;
			case 3: if (color != color3)  acierto = 0; break;
			case 4: if (color != color4)  acierto = 0; break;
			case 5: if (color != color5)  acierto = 0; break;
			case 6: if (color != color6)  acierto = 0; break;
			case 7: if (color != color7)  acierto = 0; break;
			case 8: if (color != color8)  acierto = 0; break;
			case 9: if (color != color9)  acierto = 0; break;
			case 10:if (color != color10) acierto = 0; break;
		}
		if (!acierto) break;
	}
	return acierto;
}


/* Muestra el resultado del juego antes de terminar */
void finalizar(int lon)
{
	clrscr();
	textcolor(YELLOW);
	if (lon == 10)
	{
		cprintf("ENHORABUENA\r\n");
		cprintf("Has acabado el juego con exito\n\n");
	}
	else
	{
		cprintf("Has fallado en la serie %d\n\n", lon);
		cprintf("Intentalo de nuevo!\n");
	}
	retardo(10);
}


void retardo(int nivel)
{
	delay(nivel*400);
}