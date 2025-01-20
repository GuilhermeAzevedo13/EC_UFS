#include <stdio.h>

int AnaliseExame (int trig, double col){

    if(trig == 0 || trig < 150 ){
        printf("Triglicerideos %d mg/dl: DESEJAVEL\n", trig);
    }else if(trig == 150 || trig < 200 || trig == 200){
        printf("Triglicerideos %d mg/dl: LIMITROFE\n", trig);
    }else if(trig > 200){
        printf("Triglicerideos %d mg/dl: ALTO\n", trig);
    }

    if (col < 150 ){
        printf("Colesterol total %.1lf mg/dl (DESEJAVEL)", col);
    }else if(col == 150 || col < 170 || col == 170){
        printf("Colesterol total %.1lf mg/dl (LIMITROFE)", col);
    }else if(col > 170){
        printf("Colesterol total %.1lf mg/dl (ALTO)", col);
    }

    return 0;
}


int main(){
    
    int trig;
    double col;

    scanf("%d",& trig);
    scanf("%lf",& col);

    if(trig < 0 || col < 0){
        printf("Algum valor fora da faixa");
    }else{
        AnaliseExame(trig, col);
    }
    return 0;
}