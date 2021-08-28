#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int dia, mes;
    char nombre[30];

    printf("ingrese el nombre: ");
    scanf("%s",&nombre);
    fflush(stdin);
    printf ("Ingresa el valor de dia: ");
    scanf ("%d", &dia);
    fflush(stdin);
    printf ("Ingresa el valor de mes: ");
    scanf ("%d", &mes);
    fflush(stdin);

    if((dia>=21&&mes==3)||(dia<=20&&mes==4)){

	    printf("%s",nombre);
        printf ("\nAries\n");
        printf("Futuro: Durante esta jornada se enfrentara con situaciones difíciles, que le exigirán el máximo de su concentración. Amor: Utilice un diálogo sincero cuando se comunique.");
        printf("\ncolor: rojo");
        printf("\nnumero: 16-61");

		}

    if((dia>=24&&mes==9)||(dia<=23&&mes==10)){
	    printf("%s",nombre);
        printf("\nLibra\n");
        printf("Futuro: Tenga en cuenta las circunstancias y no sea tan cruel con los demás. Amor: Si está en pareja, no dude en decirle todo lo que siente a su amado.");
        printf("\ncolor: chocolate");
        printf("\nnumero: 45-75");

		}

    if((dia>=21&&mes==4)||(dia<=21&&mes==5)){

	    printf("%s",nombre);
        printf ("\nTauro\n");
        printf("Futuro: Tenga en cuenta las circunstancias y no sea tan cruel con los demás. Amor: Si está en pareja, no dude en decirle todo lo que siente a su amado. esta en un dia en el cual podras aprender de la vida");
        printf("\ncolor: verde");
        printf("\nnumero: 16-61");

	}

    if((dia>=24&&mes==10)||(dia<=22&&mes==11)){
	    printf("%s",nombre);
        printf ("\nEscorpio\n");
        printf("Futuro: En esta jornada despertará teniendo una dosis extra de energía, la cual lo ayudará a realizar rápidamente todas sus obligaciones, teniendo resultados positivos. Amor: Restablecerá contacto con una persona que quiere. tener encuentros cordiales");
        printf("\ncolor: blanco");
        printf("\nnumero: 88-69");

		}
    if((dia>=22&&mes==5)||(dia<=21&&mes==6)){
	    printf("%s",nombre);
        printf ("\nGeminis\n");
        printf("Futuro: En esta jornada despertará teniendo una dosis extra de energía, la cual lo ayudará a realizar rápidamente todas sus obligaciones, teniendo resultados positivos. Amor: Restablecerá contacto con una persona que quiere.");
        printf("\ncolor: rosado");
        printf("\nnumero: 17-71");


		}

    if((dia>=23&&mes==11)||(dia<=21&&mes==12)){
     	printf("%s",nombre);
        printf ("\nSagitario\n");
        printf("Futuro: A causa de su natural diplomacia hará que todo su equipo de trabajo recurra a usted. Amor: No permita que los celos y la envidia intoxiquen el vínculo amoroso. hay forma de organizar tu economia");
        printf("\ncolor: amarillo");
        printf("\nnumero: 57-89");

		}

    if((dia>=21&&mes==6)||(dia<=23&&mes==7)){
	    printf("%s",nombre);
        printf ("\nCancer\n");
        printf("Futuro: A causa de su natural diplomacia hara que todo su equipo de trabajo recurra a usted. AMOR: No permita que los celos y la envidia intoxiquen el vinculo amoroso es un dia para poder sentirte cerca de las personas queridas");
        printf("\ncolor: purpura");
        printf("\nnumero: 21-12");
		}

    if((dia>=22&&mes==12)||(dia<=20&&mes==1)){
	    printf("%s",nombre);
        printf ("\nCapricornio\n");
        printf("Futuro: Permita que su intuición lo guíe en todos los caminos que deba transitar. Amor: Aprenda a diferenciar entre un romance pasajero y un amor arraigado. tomar la iniciativa a los compromisos");
        printf("\ncolor: celeste");
        printf("\nnumero: 78-98");
		}

    if((dia>=24&&mes==7)||(dia<=23&&mes==8)){
	    printf("%s",nombre);
        printf ("\nLeo\n");
        printf("Futuro: Permita que su intuición lo guíe en todos los caminos que deba transitar. Amor: Aprenda a diferenciar entre un romance pasajero y un amor arraigado. estara el amor muy a la vista");
        printf("\ncolor: azul");
        printf("\nnumero: 15-24");

		}

    if((dia>=21&&mes==1)||(dia<=19&&mes==2)){
	    printf("%s",nombre);
        printf ("\nAcuario\n");
        printf("Futuro: No cometa un error por su impaciencia. Relajese y conseguira lo que se proponga. Amor: Termine con los miedos internos y comparta lo que le sucede diariamente con sus seres queridos. solucionar emociones sin resolver");
        printf("\ncolor: Morado");
        printf("\nnumero: 95-56");
		}

    if((dia>=24&&mes==8)||(dia<=23&&mes==9)){
		printf("%s",nombre);
        printf ("\nVirgo\n");
        printf("Futuro: No cometa un error por su impaciencia. Relajese y conseguira lo que se proponga. Amor: Termine con los miedos internos y comparta lo que le sucede diariamente con sus seres queridos. para encontrar a una persona muy especial");
        printf("\ncolor: crema");
        printf("\nnumero: 43-74");

		}

    if((dia>=20&&mes==2)||(dia<=20&&mes==3)){
     	printf("%s",nombre);
        printf ("\nPiscis\n");
        printf("Futuro: Para alcanzar sus logros, sepa que la clave es organizarse y no dejar que los objetivos que estan en su mente se diluyan ante cualquier estímulo negativo.");
        printf("\ncolor: beige");
        printf("\nnumero: 94-64");

		}

    putchar ('\n');
    system ("pause");
    return 0;
}
