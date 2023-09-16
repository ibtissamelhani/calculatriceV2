#include <stdio.h>
#include <math.h>



double addition(double a , double b){
    return a+b;
}

double soustraction(double a, double b){
    return a-b;
}

double multiplication(double a, double b){
    return a*b;
    }

double division(double a , double b){

    if(b!=0){
       return a/b;
    }else{
      printf(" error !!!");
      return 0;
    }

}


int saisir(int tab[], int tailleTableau){
   int i;
   printf("saisir la taille de votre tableau : ");
   scanf("%d", &tailleTableau);
   printf("saisir les elements de tableau : \n");

    for(i=0; i < tailleTableau; i++){
    printf("tab[%d] = ", i);
    scanf("%d", tab[i]);
   }

return 0;
}

int maxTableau(int tab[], int tailleTableau){
    int maxT=0;
    for(int i=0; i< tailleTableau; i++){
        if(tab[i]>= maxT) maxT=tab[i];
    }
    return maxT;
}

int minTableau(int tab[], int tailleTableau){
    int minT=0;
    for(int i=0; i< tailleTableau; i++){
        if(tab[i]<= minT) minT=tab[i];
    }
    return minT;
}

int calcMoyenne(int tab[], int tailleTableau){
 double some=0, moy;
 for(int i=0; i<tailleTableau; i++){
    some=some+tab[i];
 }
 moy=some/tailleTableau;
 return moy;
}



 int MenuTableau(){
     int  tailleTableau, choix2;
     int result, tab[tailleTableau];
 printf("entrer <1> afficher la valeur maximal \n");
 printf("entrer <2> afficher la valeur minimal \n");
 printf("entrer <3> calculer la moyenne \n");
 printf("entrer <4> quitter \n");
 scanf("%d",choix2);

 saisir(tab[], tailleTableau);
 switch(choix2){
 case 1:
     result=maxTableau(tab[],tailleTableau);
     printf("%d", result);
     break;
 case 2:
     result=minTableau(tab[],tailleTableau);
     printf("%d", result);
     break;
 case 3:
    result=calcMoyenne(tab[],tailleTableau);
    printf("%d", result);
     break;
 default:
    printf("entrer un nombre entre 1 et 4");
    break;


 }

return 0;
}


double carre(double a , double b){
    return pow(a,2);
}

double racine(double a){
    return sqrt(a);
}

int main(){
    int choix;
    double a,b,r;

 printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ calculatrice ~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n\n");

while(1<2){


 printf("\n choisir une operation : \n\n ");
 printf("entrer <1> Addition \n");
 printf("entrer <2> Soustraction \n");
 printf("entrer <3> Multiplication \n");
 printf("entrer <4> Division \n");
 printf("entrer <5> Carre \n");
 printf("entrer <6> Racine carre \n");
 printf("entrer <7> Quitter \n\n\n");
 printf("entrer <8> tableau \n\n\n");
 scanf("%d",&choix);
 if(choix==7) break;

 printf("\n entrer deux nombres: \n");
 printf("a : ");
 scanf("%lf",&a);
 printf("b : ");
 scanf("%lf",&b);
    switch(choix){

case 1:
    r=addition(a,b);
    printf("= %lf",r);
    break;
case 2:
    r=soustraction(a,b);
     printf("= %lf",r);
    break;
case 3:
    r=multiplication(a,b);
     printf("= %lf \n",r);
    break;
case 4:
    r=division(a,b);
     printf("= %lf \n",r);
    break;
case 5:
    r=carre(a,b);
     printf("= %lf \n",r);
    break;
case 6:
    r=racine(a);
     printf("= %lf \n",r);
    break;
case 8:

default:
    printf("ce choix n'existe pas entrer un nombre entre 1 et 7");
    break;

 }

}

return 0;

}

