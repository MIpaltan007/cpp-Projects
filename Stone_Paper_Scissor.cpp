#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ply;
    int n;
    int i = 0;
    int j = 0;
    int t = 0;
    char name[100];
    cout<<"\t\t\t\t\t`````````````````````WELCOME TO GPL```````````````````````\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`      AN ULTIMATE LEAGUE FOR ROCKS,PAPERS,SCISSORS      `\n";
    cout<<"\t\t\t\t\t`                                                        `\n";
    cout<<"\t\t\t\t\t`     ENTER  YOUR  NAME :                                `\n";
    cin>>name;
    cout<<"\t\t\t\t\t`     ENTER NO. OF ROUNDS YOU WANT TO PLAY :             `\n";
    cin>>n;
    cout<<"\t\t\t\t\t`     WELCOME "<<name<<" LET'S  BEGIN "<<"\n";
    
    for (int k = 0; k < n; k++)
    {    cout<<"\t\t\t\t\t                                                          \n";
         cout<<"\t\t\t\t\t`*************** PICK FROM THE GIVEN OPTIONS ************`\n";
         cout<<"\t\t\t\t\t`                                                        `\n";
         cout<<"\t\t\t\t\t`     0) STONE                                           `\n";
         cout<<"\t\t\t\t\t`                                                        `\n";
         cout<<"\t\t\t\t\t`     1) PAPER                                           `\n";
         cout<<"\t\t\t\t\t`                                                        `\n";
         cout<<"\t\t\t\t\t`     2) SCISSOR                                         `\n";
         
        cin>>ply;
       

        if (ply != 0 && ply != 1 && ply != 2)
        {
         cout<<"\t\t\t\t\t`*************PLEASE ENTER A VALID CHOICE****************`\n";
         cout<<"\t\t\t\t\t`------YOUR REQUESTED CHOICE MAY NOT BE AVAILABLE--------`\n";
        }

        else
        {

            int rps;

            srand(time(NULL));
            rps = rand() % 3;
            if (rps == 0)
            {   cout<<"\t\t\t\t\t`  SYSTEM  CHOICE:                                       `\n";
                cout<<"\t\t\t\t\t`<><><><><><><><><><><><> STONE <><><><><><><><><><><><> `\n";
                cout<<"\t\t\t\t\t`                                                        `\n";
            }
            else if (rps == 1)
            {      cout<<"\t\t\t\t\t`  SYSTEM  CHOICE:                                       `\n";
                   cout<<"\t\t\t\t\t`------------------------ PAPER ------------------------ `\n";
                   cout<<"\t\t\t\t\t`                                                        `\n";
                
            }
            else if (rps == 2)
            {      cout<<"\t\t\t\t\t`  SYSTEM  CHOICE:                                       `\n";
                   cout<<"\t\t\t\t\t`~~~~~~~~~~~~~~~~~~~~~~~~ SCISSOR ~~~~~~~~~~~~~~~~~~~~~~~`\n";
                   cout<<"\t\t\t\t\t`                                                        `\n";
                
            }

            if (ply == 0 && rps == 1 || ply == 1 && rps == 2 || ply == 2 && rps == 0)
            {
                cout<<"\t\t\t\t\t`^^^^^^^^^^^^^^^ SYSTEM WON THIS ROUND ^^^^^^^^^^^^^^^^^^`\n";
                cout<<"\t\t\t\t\t`            BETTER LUCK NEXT TIME, BUDDY...             `\n";
                i++;
            }

            if (ply == 0 && rps == 2 || ply == 1 && rps == 0 || ply == 2 && rps == 1)
            {
                cout<<"\t\t\t\t\t`                   CONGRATULATION!!!!!                  `\n";
                cout<<"\t\t\t\t\t`_________________ YOU WON THIS ROUND____________________`\n";
                j++;
            }

            if (ply == 0 && rps == 0 || ply == 1 && rps == 1 || ply == 2 && rps == 2)
            {   
                cout<<"\t\t\t\t\t`---------------------- ITS  A  TIE -------------------- `\n";
                cout<<"\t\t\t\t\t`                                                        `\n";
               
                t++;
            }
        }
    }
    printf("\n\n SCORES : \n COMPUTER - \t%d \n %s - \t%d \n TIES - \t%d", i, name, j,t);
    printf("\n");
    if (i > j)
    {
        cout<<"\t\t\t\t\t`                SYSSSSTUMMMMM...............            `\n";
        cout<<"\t\t\t\t\t`                                                        `\n";
       
    }
    else if (i < j)
    {    
        
        cout<<"\t\t\t\t\t`                   CONGRATULATION!!!!!                  `\n";
        cout<<"\t\t\t\t\t`************* YOU HAVE EMERGED VICTORIOUS ************* `\n";
               
        
    }
    else if (i == j)
    {
        cout<<"\t\t\t\t\t`       AFTER BATTLING OUT FOR SEVERAL ATTEMPTS          `\n";
        cout<<"\t\t\t\t\t`           NEITHER OF US EMERGE VICTORIOUS              `\n";
    }
    return 0;
}