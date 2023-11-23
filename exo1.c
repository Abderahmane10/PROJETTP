//Farhi Abderahmane g3
#include <stdio.h>
#define max 10

int somme(int t[max][max],int nl,int nc,int n1, int n2){
     if (n1 >= nl) {
        return 0;
    } else if (n2>=nc ) {
        return t[n1][n2] + somme(t,nl,nc,n1, n2 + 1);
    } else {
        return somme(t,nl,nc, n1 + 1, 0);
}
}

int main() {
int t[10][10],n1,n2,i,j,sum;
printf("Entrer le nombre des lignes  :");
scanf("%d",&n1);
printf("Entrer le nombre des columns  :");
scanf("%d",&n2);
for (i= 0 ; i<n1 ; i++){
    for ( j=0 ; j<n2 ;j++){
        printf("entrer la valeur de t[%d][%d] = ",i,j);
        scanf("%d",&t[i][j]);
    }
    
}
sum = somme(t,n1,n2,0,0);
printf("La somme des elements de tableau deux dimensions  est = %d",sum);
    return 0;
}
