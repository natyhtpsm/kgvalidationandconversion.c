/* Name: Nathália Pimentel de Assis
  University: University of Brasilia
  Bachelor student in eletronic engineering course
  Date: June 18th 2019 */
  
#include<stdio.h>
int validaPeso(double pesoKg);
void fazGrama(double pesoKg);
void fazTonelada(double pesoKg);
int main ( ) {
    double pesoKg;
    do{
    scanf ("%f" , &pesoKg );
    } while (!validaPeso(pesoKg));
    fazGrama (pesoKg);
    fazTonelada (pesoKg);
return 0 ;
}
int validaPeso(double pesoKg){
    int resultado;
    if(pesoKg>=0){
        resultado = 1;
    } else{
        resultado = 0;
    }
return resultado;}

void fazGrama(double pesoKg){
    double gramas;
    gramas = pesoKg * 1000;
    printf("%lf\n", gramas);
}
void fazTonelada(double pesoKg){
    double tonelada;
    tonelada = pesoKg/1000;
    printf("%lf\n", tonelada);
}
  
