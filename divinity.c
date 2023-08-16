#include <stdio.h>
#include <stdlib.h>

int main(){

    int npc_level;
    int a;
    int diff;
    int b;
    int attribute;
    int npc_attribute;
    int per_need;
    int your_per;

    printf("Digite o nivel do NPC (1-20): ");
    scanf("%d", &npc_level);

    printf("Escolha a dificuldade (1-Facil, 2-Normal, 3-Dificil): ");
    scanf("%d", &diff);

    printf("Qual seu nivel de per?");
    scanf("%d", &your_per);

    printf("Qual seu atributo? ");
    scanf("%d", &attribute);

    printf("E o atributo do npc? ");
    scanf("%d", &npc_attribute);

    if (npc_level >= 1 && npc_level <= 5)
    {
        a = 1;
    }else if (npc_level >= 6 && npc_level <=10)
    {
        a = 2;
    }else if (npc_level >= 11 && npc_level <=15)
    {
        a = 3;
    }else if (npc_level >= 16 && npc_level <=20)
    {
        a = 4;
    } else {
        
        printf("Invalid NPC level\n");

        return 1;
    }

   switch (diff) {
        case 1:
            b = -1;
            break;
        case 2:
            b = 0;
            break;
        case 3:
            b = 1;
            break;
        default:
            printf("Invalid difficulty\n");
            return 1;
    }
    
    per_need = a + b;

    if (per_need < your_per)
    {
        printf("sucesso\n");
    } else if (per_need > your_per)
    {
        printf("falha\n");
    } else if (per_need == your_per)
    {
        if (attribute - npc_attribute >= 2)
        {
            printf("sucesso\n");
        }else
        {
            printf("falha\n");
        }
        
    }else
    {
        printf("Error!\n");
    }

    return 0;
}