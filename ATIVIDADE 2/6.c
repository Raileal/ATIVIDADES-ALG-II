#include <stdio.h>

 int main (){
 
 int a[2][3],b[3][2],i,j,r[2][2],l,matrizaux=0;
 
    for( i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(l=0;l<3;l++){
                matrizaux = matrizaux + (a[i][l]*b[l][j]);
            }
            r[i][j] = matrizaux;
            matrizaux=0;
        }
    }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d \t",r[i][j]);
        }
        printf("\n");
    }

 }
