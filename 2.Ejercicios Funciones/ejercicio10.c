// 10) Escribir una función que dado un tiempo expresado en segundos, devuelva
// por parámetros el equivalente en días, horas, minutos y segundos.
// Utilizar esta función dentro de un programa que solicite el valor al usuario.
// Se debe validar que el valor ingresado sea entero positivo, de lo contrario,
// deberá mostrarse el mensaje: “Valor ingresado inválido”

// Ejemplo:
// Valor ingresado representando una cantidad de segundos: 1234567
// Resultado: Días: 14, Horas: 6, Minutos: 56, Segundos 7
// Para verificar el resultado pueden ir a la siguiente web:
// https://www.satsig.net/training/seconds-days-hours-minutes-calculator.htm

#include <stdio.h>
#include <stdbool.h>

#define DIA 86400//24 horas x 60 minutos x 60 segundos
#define HORA 3600//60 minutos x 60 segundos
#define MINUTO 60//1 minuto = 60 segundos

void devolverFecha(int fecha_segundos, int *dias,int *horas, int *minutos, int *segundos, bool *verificacion){

    *verificacion=false;
    if(fecha_segundos>0){
    *verificacion=true;
    *dias=fecha_segundos/DIA;
    fecha_segundos=fecha_segundos%DIA;

    *horas=fecha_segundos/HORA;
    fecha_segundos=fecha_segundos%HORA;

    *minutos=fecha_segundos/MINUTO;
    fecha_segundos=fecha_segundos%MINUTO;

    *segundos=fecha_segundos;
    }
}

int main(){
    int segundos, d,h,m,s;
    bool verdad;

    printf("ingrese segundos y lo devuelvo en fecha\n");
    scanf("%d",&segundos);

    devolverFecha(segundos,&d,&h,&m,&s,&verdad);
    if(verdad)
    printf("Para %d, es %d día/s %d hora/s %d minuto/s %d segundos",segundos,d,h,m,s);
    else
    printf("Ingrese un número positivo");
}