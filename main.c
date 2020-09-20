#include <stdio.h>
#include <windows.h>
#include <time.h> 

void menuP(){
    printf(" ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ \n");
    printf("||N |||i |||k |||o |||u |||X |||e |||l |||o |||n ||\n");
    printf("||__|||__|||__|||__|||__|||__|||__|||__|||__|||__||\n");
    printf("|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|  V0.01\n");
    printf("\n");
    printf("+-------------------------------------------------+\n");
    printf("|                         Menu                    |\n");
    printf("+-------------------------------------------------+\n");
    printf("|[01]Info        [02]Argent        [03]Contact    |\n");
    printf("|                                  [99]Leave      |\n");
    printf("+-------------------------------------------------+\n");
}
void menuA(){
    printf("+-------------------------------------------------+\n");
    printf("|[B]Start                                  [N]Stop|\n");
    printf("|[4]Back                                 [99]Leave|\n");
    printf("+-------------------------------------------------+\n");
    while (1) {
        /* test most significant bit of the
         * value returned by GetAsyncKeyState */
        if (GetAsyncKeyState(0x42)) {
            int argent = 1;
            while (argent == 1){
                if (GetAsyncKeyState(0x42)) {
                    printf("[+] 1 Millions :) \n");
                    argent = 1;
                }
                else{
                    argent = 0;
                }
            }
        }
        else if (GetAsyncKeyState(0x4E)){
            printf("[-] 1 Millions :) \n");
            break;
        }
    }
}  
void menuC(){
    printf("+-------------------------------------------------+\n");
    printf("|[01]GitHub          [02]Youtube         [03]Snap |\n");
    printf("|[4]Back                                 [99]Leave|\n");
    printf("+-------------------------------------------------+\n");
    int reponcemenuC = 0 ;
    printf("Choisir une option : ");
    scanf("%d", &reponcemenuC);

    if (reponcemenuC == 1)
    {
        ShellExecute( NULL, TEXT("open" ), TEXT("https://github.com/nikoudk/A4LTrash" ), NULL, NULL, SW_SHOW );
    }
    else if (reponcemenuC == 2)
    {   
        ShellExecute( NULL, TEXT("open" ), TEXT("https://www.youtube.com/channel/UCoQ-noyOr5WchDvk7VQwLPw" ), NULL, NULL, SW_SHOW );
    }
    else if (reponcemenuC == 3)
    {   
        ShellExecute( NULL, TEXT("open" ), TEXT("https://www.snapchat.com/add/nikoudu95" ), NULL, NULL, SW_SHOW );
    }
    else if (reponcemenuC == 4)
    {   
        menuP();
    }
}
void menuI(){
    printf("+-------------------------------------------------+\n");
    printf("|                                                 |\n");
    printf("|                                                 |\n");
    printf("|[4]Back                                 [99]Leave|\n");
    printf("+-------------------------------------------------+\n");
}
void error(){
    printf("[erreur]!!!!!!!!!!!!!!!!!!!![erreur]\n");
    Sleep(1000);
    menuP();
    
    int reponcesm2 = 0 ;
    printf("Choisir une option : ");
    scanf("%d", &reponcesm2);

    if (reponcesm2 == 1)
    {
        menuI();
    }
    else if (reponcesm2 == 2)
    {
        menuA();
    }
    else if (reponcesm2 == 3)
    { 
        menuC();
    }
    else if (reponcesm2 == 99)
    {
        printf("Bye");
        Sleep(1000);
    }
    else
    {   
        error();
    }
}
int Reponce(){
    int reponcesm1 = 0 ;
    printf("Choisir une option : ");
    scanf("%d", &reponcesm1);

    if (reponcesm1 == 1)
    {
        menuI();
    }
    else if (reponcesm1 == 2)
    {
        menuA();
    }
    else if (reponcesm1 == 3)
    { 
        menuC();
    }
    else if (reponcesm1 == 99)
    {
        printf("Bye");
        Sleep(1000);
    }
    else
    {   
        error();
    }
}
int main(){
    menuP();
    Reponce();
}

