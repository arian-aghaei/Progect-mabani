#include <stdio.h>
#include <stdlib.h>

// struct person mikhaim. admin ye person hast.
// struct member mikhaim. zir shakhe person hast.

int main()
{

    int homePage=0;
    while(homePage!=3){

        scanf("%d", &homePage);
        while(homePage<1 || homePage>3){
            printf("Entered number wasn't in range 1-3.\nTry again : ");
            scanf("%d", &homePage);
        }
        if(homePage==1){

        }
        else if(homePage==2){

        }
    }



    return 0;
}
