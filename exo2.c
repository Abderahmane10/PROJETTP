//Farhi Aberahmane g3

#include <stdio.h>
#define max 100

int chercher(int t[max],int n,int val){
     if (n == 0 && t[n] != val) {
        return  0;
    } else if (t[n] == val) {
        return 1;
    } else {
        return chercher(t,n-1,val);
}

}

int main() {
int t[10],val,i,n;
char c = 'o'; //  pour arréter la boucle
printf("Entrer le nombre n de tableau  :");
scanf("%d",&n);
for (i= 0 ; i<n ; i++){
        printf("Saisir t[%d] = ",i);
        scanf("%d",&t[i]);
}
while(c != 'n'){
printf("Entrer la valeur   :");
scanf("%d",&val);
if(chercher(t,n,val) ==1){
    printf("Le nombre ( %d ) existe ",val);
}
else {
    printf(" erreur Le nombre ( %d ) n'existe pas ",val);

}

}return 0;
}
