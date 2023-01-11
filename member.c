
void member()
{
    puts("1- View all defined subscription");
    puts("2- Change info");
    puts("3- Charge account");
    puts("4- Purchase a new subscription");
    puts("5- Return");
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input <= 5 && input >= 1)
        {
            switch (input)
            {
            case 1:
                // subscription menu
                break;
            case 2:
                //info menu
                break;
            case 3:
                //wallet menu
                break;
            case 4:
                //new sub menu
                break;
            case 5:
                
                break;
            }
            break;
        }
        else
        {
            printf("invalid input");
        }
    }
}

// void member_1, 2, 3, 4, 5
