#include<stdio.h>
#define MAXNOTES 50
void test(){
    printf( "TEST\n"); 
}
void affichage(int nbn, int (n[MAXNOTES]), int (c[MAXNOTES])){

    printf("Vos notes: ");
    for (int i=0;i<nbn;i++){
	    printf("[%d]",n[i]);
    }
    printf("\nVos coeffs:");

    for (int i=0;i<nbn;i++){

	    printf("[%d]",c[i]);
    }
    printf("\n");

}

int saisi(int nbn, int *nbnr,int (n[MAXNOTES]),int (c[MAXNOTES])){
    printf("Combien de notes ? \n");
    scanf("%d",&nbn);
    *nbnr = nbn;
    for (int i=0;i<nbn;i++){
        printf("Saisir votre note n°%d\n",i+1);
        scanf("%d",&n[i]);
        printf("Donner le coeff de la note n°%d\n",i+1);
        scanf("%d",&c[i]);
        if (c[i]>1){
            *nbnr = *nbnr + c[i] - 1; 
        }
        
    }   
    printf("%d",i);
    printf("Nombre de notes en fonction du coeff ajouté : %d\n",*nbnr);
    return nbn;
}
void calcul(int nbn,int nbnr, int (n[MAXNOTES]), int (c[MAXNOTES])){
    int resultat=0;
    for(int i=0; i<nbn;i++){

        resultat = resultat + c[i] * n[i];
    }
    resultat = resultat / nbnr;
    printf("Votre moyenne est de : %d",nbnr);

}
int main(){
    int nbn,n[MAXNOTES],c[MAXNOTES],nbnr;

    nbn = saisi(nbn,&nbnr,n,c);

    printf("Nombre de notes saisi : %d\n",nbn);
    //printf("%d\n",nbnr);
    /*prouve que nbnr est en variable globale*/
    
    affichage(nbn,n,c);
    calcul(nbn,nbnr,n,c);



return 0;
}
