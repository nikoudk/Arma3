#include <stdio.h>
#include <windows.h>
#include <time.h> 

void menuP(){
    int RepMenuP;
    puts(" ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ");
    puts("||N |||i |||k |||o |||u |||X |||e |||l |||o |||n ||");
    puts("||__|||__|||__|||__|||__|||__|||__|||__|||__|||__||");
    puts("|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|  V0.01");
    puts("\n");
    puts("+-------------------------------------------------+");
    puts("|                     Menu                        |");
    puts("+-------------------------------------------------+");
    puts("|[01]Info        [02]Argent        [03]Contact    |");
    puts("|                                                 |");
    puts("|[4]Bot-Net      [05]Fishing       [06] EN DEV    |");
    puts("|                                                 |");
    puts("|                                                 |");
    puts("|                                                 |");
    puts("+-------------------------------------------------+");
    puts("|                  [99]Leave                      |");
    puts("+-------------------------------------------------+");
    printf(">> ");
    scanf("%d",&RepMenuP);
    switch(RepMenuP){
        case 1: //Info (1)
            puts("+-------------------------------------------------+");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                              By Nikou Xelon  ;) |");
            puts("+-------------------------------------------------+");
            puts("|[4]Back                                 [99]Leave|");
            puts("+-------------------------------------------------+");
            break;
        case 2: //Argent (2)
            puts("+-------------------------------------------------+");
            puts("|                                                 |");
            puts("|               Comment l'utiliser ?              |");
            puts("|                                                 |");
            puts("|   1-  Se mettre devant les jeux d'argent puis   |");
            puts("|       rester cliquer sur B et scroll avec       |");
            puts("|       la molette.                               |");
            puts("|                                                 |");
            puts("|   2- Pour STOPER lacher B                       |");
            puts("|                              By Nikou Xelon  ;) |");
            puts("+-------------------------------------------------+");
            puts("|[B]Start                                  [N]Stop|");
            puts("|[4]Back                                  [5]Leave|");
            puts("+-------------------------------------------------+");
            printf(">> ");
            while (1) {
                if (GetAsyncKeyState(0x42)) {
                    int argent = 1;
                    printf("[+] Vous venez de commencer a faire de l'argent ! :) \n");
                    while (argent == 1){
                        if (GetAsyncKeyState(0x42)) {
                            printf("[+]:) \n");
                            argent = 1;
                        }
                        else{
                            argent = 0;
                        }
                    }
                }
            }  
           break;
        case 3:  // Contact (3)
            puts("+-------------------------------------------------+");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|[01]GitHub          [02]Youtube         [03]Snap |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("|                                                 |");
            puts("+-------------------------------------------------+");
            puts("|[4]Back                                 [99]Leave|");
            puts("+-------------------------------------------------+");

            int RepMenuInfo;
            printf(">> ");
            scanf("%d", &RepMenuInfo);

            if (RepMenuInfo == 1)
            {
                ShellExecute( NULL, TEXT("open" ), TEXT("https://github.com/nikoudk/Arma3" ), NULL, NULL, SW_SHOW );
            }
            else if (RepMenuInfo == 2)
            {   
                ShellExecute( NULL, TEXT("open" ), TEXT("https://www.youtube.com/channel/UCoQ-noyOr5WchDvk7VQwLPw" ), NULL, NULL, SW_SHOW );
            }
            else if (RepMenuInfo == 3)
            {   
                ShellExecute( NULL, TEXT("open" ), TEXT("https://www.snapchat.com/add/nikoudu95" ), NULL, NULL, SW_SHOW );
            }
            else if (RepMenuInfo == 4)
            {   
                menuP();
            }
            break; 
        case 4:
            puts("+--------------------------------------------------------------------------------------------------+");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("|                                                                                                  |");
            puts("+--------------------------------------------------------------------------------------------------+");
            puts("|[4]Back              [23]Opérationel     [7]Page P.       [12]OFF       [9]Page S.      [99]Leave|");
            puts("+--------------------------------------------------------------------------------------------------+");
            Sleep(7000);
            printf("EN DEV ... \n");
            Sleep(5000);
            menuP();// BotNet(4) // //BotNet(4)
        case 5:
            puts("+-------------------------------------------------+");
            puts("|                     Menu                        |");
            puts("+-------------------------------------------------+");
            puts("|[01]INSTA        [02]SNAP          [03]GitHub    |");
            puts("|                                                 |");
            puts("|[04]Origin       [05]Twitter       [06]Steam     |");
            puts("|                                                 |");
            puts("|[07]Gmail        [08]Linkedin                    |");
            puts("|                                                 |");
            puts("+-------------------------------------------------+");
            puts("|[4]Back                                 [99]Leave|");
            puts("+-------------------------------------------------+");
            printf("[/!\\] LES SERVEURS SONT OFF [/!\\]");
            int RepMenuFhising;
            printf(">> ");
            scanf("%d", &RepMenuFhising);

            if (RepMenuFhising == 99)
            {
                system("exit");
            }
            else if (RepMenuInfo == 4)
            {   
                menuP();
            }

            menuP();// BotNet(4) // Fishing
        case 99:  // Leave(99)
            system("exit");
            break;
        default:
            puts("/!\\  ERROR  /!\\");
    }
}
int main(void){
    menuP();
}