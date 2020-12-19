#include <stdio.h>
#include<windows.h>
#include<dos.h>

int main()
{
    int attack;
    char quit;
    int character;
    int enemy1_health = 100;
    int enemy2_health = 100;
    int enemy3_health = 100;
    int hero_health = 100;
Beep(500,600);
    printf("Welcome to Mahabharata\n\nPlease select your character\n1:Arjuna\n2:Bhima\n3:Yudhishthira\n");
    scanf("%d", &character);
restart:
switch (character)
{
    case 1:
    printf("\nYou have chosen Arjuna as your character\n");
    break;
    case 2:
    printf("\nYou have chosen Bhima as your character\n");
    break;
    case 3:
    printf("\nYou have chosen Yudhishthira as your character\n");
    break;


    
}

    printf("Level 1:You are face-to-face with the mighty Gangaputra Bhishma\n\n");
    enemy1_health = 100;
    hero_health = 100;
    while (enemy1_health > 0)
    {

        printf("Which attack would you like to use?\n");
        switch (character)
        {
        case 1:
            printf("1:Pashupatastra\n2:Raudrastra\n3:Brahmashir Astra\n4:Anjalikastra\n");
            break;
        
        case 2:
        printf("1:Mace blow\n2:Body slam\n3:Skull breaker\n4:Sneaky suplex\n");
            break;

        case 3:
        printf("1:Fiery spear\n2:Raged melee\n3:Slashing blade\n4:Sharpnel shatter\n");
            break;

        }
        scanf("%d", &attack);
        switch (character)
        {
          case 1:
     
            switch (attack)
            {
            case 1:
            printf("Arjuna used Pashupatastra\n");
                enemy1_health -= 35;
                break;
            case 2:
            printf("Arjuna used Raudrastra\n");
                enemy1_health -= 30;
                break;
            case 3:
            printf("Arjuna used Brahmashir Astra\n");
                enemy1_health -= 20;
                break;
            case 4:
            printf("Arjuna used Anjalikastra\n");
                enemy1_health -= 15;
                break;
            }
            break;
        
          case 2:
         
            switch (attack)
            {
            case 1:
            printf("Bhima used mace-blow\n");
                enemy1_health -= 30;
                break;
            case 2:
            printf("Bhima used Body slam\n");
                enemy1_health -= 35;
                break;
            case 3:
            printf("Bhima used skull breaker\n");
                enemy1_health -= 15;
                break;
            case 4:
            printf("Bhima used sneaky suplex\n");
                enemy1_health -= 20;
                break;
            }
          break; 
          
          case 3:
  
            switch (attack)
            {
            case 1:
            printf("Yudhishthira used fiery spear\n");
                enemy1_health -= 20;
                break;
            case 2:
            printf("Yudhishthira used raged melee\n");
                enemy1_health -= 15;
                break;
            case 3:
            printf("Yudhishthira used blade slashes\n");
                enemy1_health -= 35;
                break;
            case 4:
            printf("Yudhishthira used sharpnel shatter\n");
                enemy1_health -= 30;
                break;
            }
          break;
            
        }
printf("Bhishma used rising wisp\n\n");
        hero_health -= 20;

        if (hero_health >= 0)
        {
            if (enemy1_health >= 0)
            {
                printf("Bhishma's health reduced to %d \nYour health decreased to %d\n\n", enemy1_health, hero_health);
            }

            else
            {
                printf("Bhishma succumbed to his adharma\nYou have %d health remaining\n\n", hero_health);
            }
        }

        else
        {
            printf("Your health reduced to 0.\n");
        }

        if (hero_health <= 0)
        {   Beep(100,600);
            printf("Game over\n");
            printf("Press r to restart,q to quit.\n");
            scanf(" %c", &quit);
            if (quit == 'r')
            {
                int enemy1_health = 100;
                int hero_health = 100;
                goto restart;
            }

            else
            {
                goto last;
            }
        }
    }
    printf("Congratulations, you have defeated Bhishma\nLevel 2:Your new opponent is Acharya Drona.\n");
restart2:
Beep(500,600);
    printf("Dronacharya challenges you for a face-off.\n\n");
    enemy2_health = 100;
    hero_health = 100;
    while (enemy2_health > 0)
    {

        printf("Which attack would you like to use?\n");
        switch (character)
        {
        case 1:
            printf("1:Pashupatastra\n2:Raudrastra\n3:Brahmashir Astra\n4:Anjalikastra\n");
            break;
        
        case 2:
        printf("1:Mace blow\n2:Body slam\n3:Skull breaker\n4:Sneaky suplex\n");
            break;

        case 3:
        printf("1:Fiery spear\n2:Raged melee\n3:Slashing blade\n4:Sharpnel shatter\n");
            break;
            }
        scanf("%d", &attack);
        switch (character)
        {
          case 1:
            switch (attack)
            {
            case 1:
            printf("Arjuna used Pashupatastra\n");
                enemy2_health -= 15;
                break;
            case 2:
            printf("Arjuna used Raudrastra\n");
                enemy2_health -= 30;
                break;
            case 3:
            printf("Arjuna used Brahmashir Astra\n");
                enemy2_health -= 35;
                break;
            case 4:
            printf("Arjuna used Anjalikastra\n");
                enemy2_health -= 20;
                break;
            }
            break;
            
     case 2:
            switch (attack)
            {
            case 1:
            printf("Bhima used mace-blow\n");
                enemy2_health -= 20;
                break;
            case 2:
            printf("Bhima used body slam\n");
                enemy2_health -= 15;
                break;
            case 3:
            printf("Bhima used skull breaker\n");
                enemy2_health -= 35;
                break;
            case 4:
            printf("Bhima used sneaky suplex\n");
                enemy2_health -= 30;
                break;
            }
          break; 
        
       case 3:
            switch (attack)
            {
            case 1:
            printf("Yudhishthira used fiery spear\n");
                enemy2_health -= 35;
                break;
            case 2:
            printf("Yudhishthira used raged melee\n");
                enemy2_health -= 20;
                break;
            case 3:
            printf("Yudhishthira used slashing blade\n");
                enemy2_health -= 30;
                break;
            case 4:
            printf("Yudhishthira used sharpnel shatter\n");
                enemy2_health -= 15;
                break;
            }
          break;
          

            
        }
printf("Guru Drona used Flame shot\n\n");
        hero_health -= 25;

        if (hero_health >= 0)
        {
            if (enemy2_health >= 0)
            {
                printf("Guru Dronas's health reduced to %d\nYour health decreased to %d\n\n", enemy2_health, hero_health);
            }

            else
            {
                printf("Guru Drona falls to his end\nYour health stands at %d\n\n", hero_health);
            }
        }

        else
        {
            printf("Your health reduced to 0\n");
        }

        if (hero_health <= 0)
        {Beep(100,600);
            printf("Game over\n");
            printf("press r to restart,q to quit.\n");
            scanf(" %c", &quit);
            if (quit == 'r')
            {
                int enemy2_health = 100;
                int hero_health = 100;
                goto restart2;
            }

            else
            {
                goto last;
            }
        }
    }

restart3:
Beep(500,600);

    printf("Level 3:Congratulations, you've come to the last level.\nSuryaputra Karna wages war against you\n\n");
    enemy3_health = 100;
    hero_health = 100;
    while (enemy3_health > 0)
    {

        printf("Which attack will you chose?\n");
        switch (character)
        {
        case 1:
            printf("1:Pashupatastra\n2:Raudrastra\n3:Brahmashir Astra\n4:Anjalikastra\n");
            break;
        
        case 2:
        printf("1:Mace blow\n2:Body slam\n3:Skull breaker\n4:Sneaky suplex\n");
            break;

        case 3:
        printf("1:Fiery spear\n2:Raged melee\n3:Slashing blade\n4:Sharpnel shatter\n");
            break;
        }
        scanf("%d", &attack);
        switch (character)
        {
         case 1:
            switch (attack)
            {
            case 1:
            printf("Arjuna used Pashupatastra\n");
                enemy3_health -= 30;
                break;
            case 2:
            printf("Arjuna used Raudrastra\n");
                enemy3_health -= 20;
                break;
            case 3:
            printf("Arjuna used Brahmashir Astra\n");
                enemy3_health -= 15;
                break;
            case 4:
            printf("Arjuna used Anjalikastra\n");
                enemy3_health -= 35;
                break;
            }
            break;
        

          case 2:
            switch (attack)
            {
            case 1:
            printf("Bhima used mace-blow\n");
                enemy3_health -= 30;
                break;
            case 2:
            printf("Bhima used body slam\n");
                enemy3_health -= 35;
                break;
            case 3:
            printf("Bhima used skull breaker\n");
                enemy3_health -= 15;
                break;
            case 4:
            printf("Bhima used sneaky suplex\n");
                enemy3_health -= 20;
                break;
            }
          break; 
          case 3:
            switch (attack)
            {
            case 1:
            printf("Yudhishthira used fiery spear\n");
                enemy3_health -= 20;
                break;
            case 2:
            printf("Yudhishthira used raged melee\n");
                enemy3_health -= 15;
                break;
            case 3:
            printf("Yudhishthira used slashing blade\n");
                enemy3_health -= 30;
                break;
            case 4:
            printf("Yudhishthira used sharpnel shatter\n");
                enemy3_health -= 35;
                break;
            }
          break;
            
        }

        hero_health -= 30;
        printf("Karna used flare blast\n\n");

        if (hero_health >= 0)
        {
            if (enemy3_health >= 0)
            {
                printf("Karna's health reduced to %d \nYour health decreased to %d\n\n", enemy3_health, hero_health);
            }

            else
            {
                printf("Karna lays in ruins\nYour health stands at %d\n\n", hero_health);
            }
        }

        else
        {
            printf("Hero health = 0 \n");
        }

        if (hero_health <= 0)
        {Beep(100,600);
            printf("Game over\n");
            printf("Press r to restart,q to quit\n");
            scanf(" %c", &quit);
            if (quit == 'r')
            {
                int enemy3_health = 100;
                int hero_health = 100;
                goto restart3;
            }

            else
            {
                goto last;
            }
        }
    }
printf("\nCongratulations,you have defeated the evil trio\nYou have been quite a ferocious warrior!\n");
last:printf("\nThank you for playing :)");
    getch();
    return 0;
}

