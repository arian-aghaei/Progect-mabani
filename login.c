#include "structs.h"
#include <stdio.h>

void memberLogin()
{
    FILE *file = fopen("member-list.txt", "r");
    if (file == NULL)
    {
        return 1;
    }
    int trys = 3;
    while (trys)
    {
        ppl entry;
        int inputUID;
        int checkpass = 0;
        printf("Enter your UID :");
        scanf("%d", &inputUID);
        char buffer[200];
        fgets(buffer, 200, file);
        while (1)
        {
            sscanf(buffer, "%s %s %d %d %s", entry.name, entry.fname, &entry.uid, &entry.ssn, entry.password);
            if (inputUID == entry.uid)
            {
                checkpass = 1;
                break;
            }
            fgets(buffer, 200, file);
            if (feof(file))
            {
                printf("no user with id %d found !", inputUID);
                break;
            }
        }
        if(checkpass)
        {
            if()
        }

        trys--;
    }
}

void adminLogin()
{
}