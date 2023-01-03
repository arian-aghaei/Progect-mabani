#include <stdio.h>
#include <stdlib.h>

// struct person mikhaim. admin ye person hast.
// struct member mikhaim. zir shakhe person hast.

int main()
{

    int homePage=0;
    while(homePage!=3){
        home();
        scanf("%d", &homePage);
        while(homePage<1 || homePage>3){
            printf("Entered number wasn't in range 1-3.\nTry again : ");
            scanf("%d", &homePage);
        }
        if(homePage==1){
            system("cls");
            admin();
        }
        else if(homePage==2){
            system("cls");
            member();
        }
        system("cls");
    }



    return 0;
}
