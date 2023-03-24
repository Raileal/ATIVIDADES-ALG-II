#include <stdio.h>

#define tam 5
int main() {

    char n[tam][20];
    float Ma, Sa=0, Mea, Maa;
    float Mi, Si=0, Mai, Mei, Sp=0, Mp, Map, Mep, D[tam][3];
    int i, j, mp, mi, ma;

    for(i=0; i<tam; i++){
        scanf("%s",n[i]);
            for(j=0; j<3; j++){
                scanf("%f",&D[i][j]);
            }
    }

    Maa=D[0][0];
    Mea=D[0][0];
    Mei=D[0][1];
    Mei=D[0][1];
    Map=D[0][2];
    Mep=D[0][2];

    for(i=0; i<tam; i++){
        for(j=0; j<3; j++){
            if(j==0){
                Sa+=D[i][0];
            }
                if(j==1){
                    Sp+=D[i][1];
                }
                        if(j==2){
                            Si+=D[i][2];}
                                if(D[i][0]>Maa){
                                    Maa=D[i][0];
                                        ma=i;
                                }
                                            if(D[i][0]<Mea){
                                                Mea=D[i][0];
                                            }
                                                     if(D[i][1]>Mai){
                                                        Mai=D[i][1];
                                                                mi=i;
                                                    }
                                             if(D[i][1]<Mei){
                                                        Mei=D[i][1];
                                            }
                                 if(D[i][2]>Map){
                                    Map=D[i][2];
                                         mp=i;
                                 }
                            if(D[i][2]<Mep){
                                Mep=D[i][2];
                            }
        }

    }

    Ma=Sa/tam;
    Mi=Si/tam;
    Mp=Sp/tam;

    printf("Maior altura: %.2f\nMenor altura: %.2f\nMedia das alturas: %.2f\n",Maa,Mea,Ma);
    printf("Maior Ira: %.2f\nMenor Ira: %.2f\nMedia dos Iras: %.2f\n",Mai,Mei,Mi);
    printf("Maior peso: %.2f\nMenor peso: %.2f\npesos: %.2f\n",Map,Mep,Mp);

    for(int l=0; l<tam; l++){
        for(int j=0; j<3; j++){
            if(l==ma){
                printf("Dados do aluno com maior Altura:\nNome: %s\nAltura: %.2f\nPeso: %.2f\nIra: %.2f\n",n[l],D[l][j],D[l][j],D[l][j]);
            }

            if(l==mi){
                printf("Dados do aluno com maior Ira:\nNome: %s\nAltura: %.2f\nPeso: %.2f\nIra: %.2f\n",n[l],D[l][j],D[l][j],D[l][j]);
            }
            if(l==mp){
                printf("Dados do aluno com maior Peso:\nNome: %s\nAltura: %.2f\nPeso: %.2f\nIra: %.2f\n",n[l],D[l][j],D[l][j],D[l][j]);
            }

        }

    }

    return 0;
    }