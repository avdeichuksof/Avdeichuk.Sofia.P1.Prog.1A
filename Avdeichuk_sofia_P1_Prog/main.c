#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct
{
  int id;
  char nombre[20];
  char tipo;
  float efectividad;
}eVacuna;

float aplicarAumento(float precio);
int reemplazarCaracteres(char cad[], char letra1, char letra2, int tam);
int ordenarVacunas(eVacuna vec[], int tam);
int mostrarVacunas(eVacuna vacuna, int tam);


int main()
{

    //1
    /*int precio;
    aplicarAumento(precio);*/

    //2
   /* char cadena[2];
    char letra1;
    char letra2;

    printf("Ingrese una letra: ");
    scanf("%c", &letra1);
    printf("Ingrese otra letra: ");
    scanf("%c", &letra2);

    reemplazarCaracteres(cadena, letra1, letra2);*/

    //3
    eVacuna vacunas[TAM]={
    {0000, "Sputnik", 'I', 95},
    {0001, "Pfizer", 'O', 80},
    {0002, "Astrazeneca", 'I', 98},
    };

    ordenarVacunas(vacunas, TAM);
    return 0;
}

float aplicarAumento(float precio)
{
    int aumento=5;
    float precioFinal;

    printf("Ingrese precio: ");
    scanf("%f", &precio);

    precioFinal=precio+(precio*aumento/100);

    printf("El precio final es: $ %.2f", precioFinal);

}

/*int reemplazarCaracteres(char cad[], char letra1, char letra2, int tam)
{

    int todoOk = 0;
    int auxLetra;

    if(letra1 && letra2&&tam>0){
        for(int i=0;i<tam-1;i++)
            {
                for(int j=i+1;j<tam;j++)
                    {
                        auxLetra=letra1;
                        letra1=letra2;
                        letra2=auxLetra;
                    }
            }
        }
        todoOk=1;
    }
    return todoOk;
}*/


int mostrarVacunas(eVacuna vacuna, int tam)
{
    int todoOk = 0;
    if(tam > 0)
        {
            printf("  %4d       %10s      &c    &2d\n",
           vacuna.id, vacuna.nombre, vacuna.tipo, vacuna.efectividad);
        todoOk = 1;
    }
    return todoOk;
}

int ordenarVacunas(eVacuna vec[], int tam)
{
    int todoOk = 0;
    eVacuna auxVac;
    if(vec != NULL && tam > 0)
    {
        for(int i=0; i < tam -1; i++)
        {
            for(int j= i + 1; j < tam; j++)
            {
                if( ((vec[i].tipo == vec[j].tipo) && (vec[i].efectividad > vec[j].efectividad))
                    || ((vec[i].tipo != vec[j].tipo) &&(vec[i].tipo > vec[j].tipo)))
                {
                    auxVac = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxVac;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}

