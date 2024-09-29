#include <stdio.h>

int main(void) {
    float peso,distanza;
    int urgenza;
    printf("Inserisci il peso:");
    scanf("%f",&peso);
    printf("Inserisci la distanza:");
    scanf("%f",&distanza);
    if(distanza<=100 && peso<=1 || distanza>100<300 && peso<=2 || distanza>300 && peso<=3)
    {  urgenza=0; }
    else if (distanza<=100 && peso>=2.5 || distanza>100<300 && peso>=3.5 || distanza>=300 && peso>=4)
        {  urgenza=1; }
    printf("urgenza è: %d",urgenza);

    return 0;
}
