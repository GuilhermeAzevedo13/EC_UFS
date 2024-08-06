#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct TpFreezers{
 char marca[20];
 float garantia;
 float economia;
 float capacidade;
 float temperaturaMin;
}RegistroFreezer;



FILE *ArqFreezer;

long int Tamanho = 20*sizeof(char) + 4*sizeof(float);

void InserirDados(){
    ArqFreezer = fopen("./Freezer.dat","a+b");
    if(ArqFreezer){
    int continuar;
    do{
    printf("\n");
    printf("\n Digite a Marca do Freezer com letras [minusculas]: ");
    fflush(stdin);
    scanf("%s", RegistroFreezer.marca);
    printf("\n");
    printf("\n Digite a Garantia(meses) do Freezer %s: ", RegistroFreezer.marca);
    scanf("%f", &RegistroFreezer.garantia);
    printf("\n");
    printf("\n Digite a Economia(Kwh/mes) do Freezer %s: ", RegistroFreezer.marca);
    scanf("%f", &RegistroFreezer.economia);
    printf("\n Digite a Capacidade(Litros) do Freezer %s: ", RegistroFreezer.marca);
    scanf("%f", &RegistroFreezer.capacidade);
    printf("\n Digite a Temperatura Minima do Freezer %s: ", RegistroFreezer.marca);
    scanf("%f", &RegistroFreezer.temperaturaMin);
    fseek(ArqFreezer,0,2);
    fwrite(&RegistroFreezer,Tamanho,1,ArqFreezer);
    printf("\nNova inclusao? [1] Sim / [2] Nao ");
    scanf("%d", &continuar);
    } while (continuar != 2);
    }else{
      printf("Erro ao tentar Abrir o Arquivo!");
    }
    fclose(ArqFreezer);
    return;
}


void ExibirDados(){
    
    printf(">>>> EXIBIR DADOS <<<<\n\n");
    ArqFreezer = fopen("./Freezer.dat","a+b");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    do{
        fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
        if (!feof(ArqFreezer)){
            printf("\n");
            printf("Marca: %s\n", RegistroFreezer.marca);
            printf("Garantia (meses): %.2f\n", RegistroFreezer.garantia);
            printf("Economia (Kwh/mes): %.2f\n", RegistroFreezer.economia);
            printf("Capacidade (Litros): %.2f\n", RegistroFreezer.capacidade);
            printf("Temperatura Minima: %.2f\n", RegistroFreezer.temperaturaMin);
        }
    }while (!feof(ArqFreezer));
    }else{
      printf("Erro ao tentar Abrir o Arquivo!");
    }
    fclose(ArqFreezer);
    return;
}

void ConsultarFreezer(){
    printf(">>>> CONSULTAR FREEZER <<<<\n\n");
    ArqFreezer = fopen("./Freezer.dat","a+b");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    printf("Qual Freezer deseja Buscar? [Digite o nome do Freezer em letras minusculas]: ");
    char freezer[20];
    fflush(stdin);
    scanf("%s", freezer);
    int Achou = 0;
    do{
      fread(&RegistroFreezer, Tamanho, 1, ArqFreezer);
      if (strcmp(RegistroFreezer.marca,freezer) == 0){
        Achou = 1;
        printf("\n");
        printf("Marca: %s\n", RegistroFreezer.marca);
        printf("Garantia (meses): %.2f\n", RegistroFreezer.garantia);
        printf("Economia (Kwh/mes): %.2f\n", RegistroFreezer.economia);
        printf("Capacidade (Litros): %.2f\n", RegistroFreezer.capacidade);
        printf("Temperatura Minima: %.2f\n", RegistroFreezer.temperaturaMin);
        break;
      }
    }while (!feof(ArqFreezer)&&(Achou==0));
    
  if (Achou==0){
    printf("Registro inexistente!");
  }
  }else{
    printf("Erro ao tentar Abrir o Arquivo!");
  }
  fclose(ArqFreezer); 
  return;
}

void ConsultarCaracteristica(){

  int opcaoX;

  printf(">>>> CONSULTAR CARACTERISTICA <<<<\n\n");
    ArqFreezer = fopen("./Freezer.dat","a+b");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    printf("Digite qual Caracteristica deseja exibir: ");
    printf("\n [1] Garantia");
    printf("\n [2] Economia");
    printf("\n [3] Capacidade");
    printf("\n [4] Temperatura Minima");
    printf("\n OPCAO: ");
    scanf("%d", &opcaoX);

    switch(opcaoX){
      case 1:
        do{
        fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
        if (!feof(ArqFreezer)){
            printf("\n");
            printf("Marca: %s\n", RegistroFreezer.marca);
            printf("Garantia (meses): %.2f\n", RegistroFreezer.garantia);
        }
        }while (!feof(ArqFreezer));
        fclose(ArqFreezer);
        break;
      case 2:
        do{
        fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
        if (!feof(ArqFreezer)){
            printf("\n");
            printf("Marca: %s\n", RegistroFreezer.marca);
            printf("Economia (Kwh/mes): %.2f\n", RegistroFreezer.economia);
        }
        }while (!feof(ArqFreezer));
        fclose(ArqFreezer);
        break;
      case 3:
        do{
        fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
        if (!feof(ArqFreezer)){
            printf("\n");
            printf("Marca: %s\n", RegistroFreezer.marca);
            printf("Capacidade (Litros): %.2f\n", RegistroFreezer.capacidade);
        }
        }while (!feof(ArqFreezer));
        fclose(ArqFreezer);
        break;
      case 4:
        do{
        fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
        if (!feof(ArqFreezer)){
            printf("\n");
            printf("Marca: %s\n", RegistroFreezer.marca);
            printf("Temperatura Minima: %.2f\n", RegistroFreezer.temperaturaMin);
        }
        }while (!feof(ArqFreezer));
        fclose(ArqFreezer);
        break;
      default:
        printf("\nOpcao Invalida...");
    }
    }else{
      printf("Erro ao tentar Abrir o Arquivo!");
    }
    return;
}

long int TArquivoFreezer() {
    long int X;
    fseek(ArqFreezer,0,2);
    X = ftell(ArqFreezer) / Tamanho;
return X;
}

void AlterarDado() {

        ArqFreezer = fopen("./Freezer.dat", "r+b");
        if(ArqFreezer){
        printf("\n>>>> ALTERAR DADOS DOS FREEZERS <<<<\n");

        fseek(ArqFreezer,0,0);

        printf("\nDigite a Marca do Freezer que deseja Alterar: ");
        char alterar[20];
        fflush(stdin);
        scanf("%s", alterar);

        int Achou = 0;
        int encontrou = 0;
        int opcao = 0;

        do {
            fread(&RegistroFreezer, Tamanho, 1, ArqFreezer);
            if (strcmp(RegistroFreezer.marca, alterar) == 0) {
                Achou = 1;
                break;
            }
        } while (!feof(ArqFreezer));

        if (Achou == 0) {
            printf("Registro Inexistente!\n");
        } else {
            do {
                printf("\n>>>> ESCOLHA A CARACTERISTICA <<<<");
                printf("\n[1] ALTERAR MARCA");
                printf("\n[2] ALTERAR GARANTIA");
                printf("\n[3] ALTERAR ECONOMIA");
                printf("\n[4] ALTERAR CAPACIDADE");
                printf("\n[5] ALTERAR TEMPERATURA MINIMA");
                printf("\nOPCAO: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("\nDigite a nova Marca: ");
                        char marcaDif[20];
                        fflush(stdin);
                        scanf("%s%*c", marcaDif);
                        strcpy(RegistroFreezer.marca, marcaDif);
                        break;
                    case 2:
                        printf("\nDigite a nova Garantia (meses): ");
                        float garantiaDif = 0;
                        scanf("%f", &garantiaDif);
                        RegistroFreezer.garantia = garantiaDif;
                        break;
                    case 3:
                        printf("\nDigite a nova Economia (Kwh/mes): ");
                        float economiaDif = 0;
                        scanf("%f", &economiaDif);
                        RegistroFreezer.economia = economiaDif;
                        break;
                    case 4:
                        printf("\nDigite a nova Capacidade: ");
                        float capacidadeDif = 0;
                        scanf("%f", &capacidadeDif);
                        RegistroFreezer.capacidade = capacidadeDif;
                        break;
                    case 5:
                        printf("\nDigite a nova Temperatura Minima: ");
                        float tempMinDif = 0;
                        scanf("%f", &tempMinDif);
                        RegistroFreezer.temperaturaMin = tempMinDif;
                        break;
                    default:
                        printf("\nOpcao invalida!\n");
                }

                if (opcao >= 1 && opcao <= 5) {
                    fseek(ArqFreezer, -Tamanho, SEEK_CUR);
                    fwrite(&RegistroFreezer, Tamanho, 1, ArqFreezer);
                    printf(">>>> ALTERACAO FEITA COM SUCESSO <<<<\n");
                }

                printf("\nDeseja alterar algo mais? [1] Sim [2] Nao\n");
                printf("OPCAO: ");
                scanf("%d", &encontrou);
        }while(encontrou == 1);
        system("pause");
       
    }
    }else{
      printf("Erro ao tentar Abrir o Arquivo!");
    }
  fclose(ArqFreezer);
  return;
}

void MelhorCapacidade(){
  printf(">>>> MELHOR CAPACIDADE <<<<\n");
    ArqFreezer = fopen("./Freezer.dat","rb");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    float melhorCap = 0;
    struct TpFreezers melhorRegistroZ;
    do{
      fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
      if (!feof(ArqFreezer)){
        if(RegistroFreezer.capacidade > melhorCap){
          melhorCap = RegistroFreezer.capacidade;
          melhorRegistroZ = RegistroFreezer;
        }
      }
    }while (!feof(ArqFreezer));
      fclose(ArqFreezer);
      printf("Marca: %s\n", melhorRegistroZ.marca);
      printf("A melhor CAPACIDADE eh: %.0f Litros\n", melhorCap);
      printf(">>>>>>>>>>>><<<<<<<<<<<<<\n");
      }else{
        printf("Erro ao tentar Abrir o Arquivo!");
      }
return;
}

void MelhorGarantia(){
  printf(">>>> MELHOR GARANTIA <<<<\n");
    ArqFreezer = fopen("./Freezer.dat","rb");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    float melhorGar = 0;
    struct TpFreezers melhorRegistroY;
    do{
      fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
      if (!feof(ArqFreezer)){
        if(RegistroFreezer.garantia > melhorGar){
          melhorGar = RegistroFreezer.garantia;
          melhorRegistroY = RegistroFreezer;
        }
      }
    }while (!feof(ArqFreezer));
      fclose(ArqFreezer);
      printf("Marca: %s\n", melhorRegistroY.marca);
      printf("A melhor GARANTIA eh: %.0f meses\n", melhorGar);
      printf(">>>>>>>>>>>><<<<<<<<<<<<<\n");
      }else{
        printf("Erro ao tentar Abrir o Arquivo!");
      }
return;
}

void MelhorEconomia(){
  printf(">>>> MELHOR ECONOMIA <<<<\n");
    ArqFreezer = fopen("./Freezer.dat","rb");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    float melhorEco = 1000;
    struct TpFreezers melhorRegistroX;
    do{
      fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
      if (!feof(ArqFreezer)){
        if(RegistroFreezer.economia < melhorEco){
          melhorEco = RegistroFreezer.economia;
          melhorRegistroX = RegistroFreezer;
        }
      }
    }while (!feof(ArqFreezer));
      fclose(ArqFreezer);
      printf("Marca: %s\n", melhorRegistroX.marca);
      printf("A melhor Economia eh: %.1f Kwh/mes\n", melhorEco);
      printf(">>>>>>>>>>>><<<<<<<<<<<<<\n");
      }else{
        printf("Erro ao tentar Abrir o Arquivo!");
      }
return;
}

void MelhorTempMin(){
    printf(">>>> MELHOR TEMP MIN <<<<\n");
    ArqFreezer = fopen("./Freezer.dat","rb");
    if(ArqFreezer){
    fseek(ArqFreezer,0,0);
    float melhorMin = 1000;
    struct TpFreezers menorRegistro;
   do{
      fread(&RegistroFreezer,Tamanho,1,ArqFreezer);
      if (!feof(ArqFreezer)){
        if(RegistroFreezer.temperaturaMin < melhorMin){
          melhorMin = RegistroFreezer.temperaturaMin;
          menorRegistro = RegistroFreezer;
        }
      }
      }while (!feof(ArqFreezer));
      fclose(ArqFreezer);
      printf("Marca: %s\n", menorRegistro.marca);
      printf("A melhor Temperatura Minima eh: %.1f\n", melhorMin);
      printf(">>>>>>>>>>>><<<<<<<<<<<<<\n");
    }else{
      printf("Erro ao tentar Abrir o Arquivo!");
    }  
return;
}

void ExcluirDados(){
    printf(">>>> EXCLUIR DADOS <<<<\n\n");
    char marca[20];
    printf("Digite a marca do Freezer que deseja excluir [em letras minusculas]: ");
    scanf("%s", marca);
    FILE* arqFreezer = fopen("Freezer.dat", "rb");
    if (arqFreezer == NULL) {
        printf("Erro ao abrir arquivo 'Freezer.dat'!\n");
        return;
    }
    FILE* arqTemp = fopen("temp.dat", "wb");
    if (arqTemp == NULL) {
        printf("Erro ao abrir arquivo 'temp.dat'!\n");
        fclose(arqFreezer);
        return;
    }
    int encontrado = 0;
    while (fread(&RegistroFreezer, Tamanho, 1, arqFreezer) == 1) {
        if (strcmp(RegistroFreezer.marca, marca) != 0) {
            fwrite(&RegistroFreezer, Tamanho, 1, arqTemp);
        } else {
            encontrado = 1;
        }
    }
    fclose(arqFreezer);
    fclose(arqTemp);
    if (!encontrado) {
        printf("Registro inexistente!\n");
        remove("temp.dat");
        return;
    }
    remove("Freezer.dat");
    rename("temp.dat", "Freezer.dat");
    printf("Registro excluido com sucesso!\n");
return;
}

int main(){
    ArqFreezer = fopen("./Freezer.dat","a+b");
  int opcao;

  do {
    opcao = 0;
    system("cls");
    printf(">>> PESQUISA FREEZER <<<\n\n");
    printf("Selecione a opcao desejada:\n");
    printf("[1] Inserir Dados\n");
    printf("[2] Exibir Dados\n");
    printf("[3] Dados de um Freezer\n");
    printf("[4] Dados de uma Caracteristica\n");
    printf("[5] Alterar Dado\n");
    printf("[6] Melhor Freezer em Capacidade\n");
    printf("[7] Melhor Freezer em Garantia\n");
    printf("[8] Melhor Freezer em Economia\n");
    printf("[9] Melhor Freezer em Temperatura\n");
    printf("[10] EXCLUIR DADOS\n");
    printf("[11] SAIR DO PROGRAMA\n");
    printf("OPCAO: ");
    scanf("%d", &opcao);

    switch (opcao){
      case 1:
        InserirDados();
        break;
      case 2:
        ExibirDados();
        break;
      case 3:
        ConsultarFreezer();
        break;
      case 4:
        ConsultarCaracteristica();
        break;
      case 5:
        AlterarDado();
        break;
      case 6:
        MelhorCapacidade();
        break;
      case 7:
        MelhorGarantia();
        break;
      case 8:
        MelhorEconomia();
        break;
      case 9:
        MelhorTempMin();
        break;
      case 10:
        ExcluirDados();
        break;
      case 11:
        printf("\n_Saindo do Programa_\n");
        break;
      default:
        printf("\nOpcao invalida!\n");
    }

    system("pause");
  } while (opcao != 11);
  fclose(ArqFreezer);
  return 0;
}

