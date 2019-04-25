/* *********************************************************************************
    header file for a menu system 
    this file runs a menu with muiltple options and prints what output you want to screen, 
    this is also what selects what function to use pulling them from local header files
    there is a in the making counter to ensure the file ends when function isnt run correctly 
    
    to do:
    run a 'if' statement or something to stop main from running through both  
************************************************************************************* */    
    
    int menuscreen(){ 

    int menuop1;    //first menu choise the options as seen below
    int option1;    //second menu choise      Encryption menu codes 
    int option2;    //thrid                   Decryption menu codes
    int option3;    //fourth                
    int option4;    //un used
    int returnV;    //this is to try and make sure if a wrong number is made if stops
    
        //starting menu
    printf("***********************************************");      //main menu 
    printf("\n  pick a option:\n");
    printf("    1) Encryption\n");
    printf("    2) Decryption\n");
    printf("    3) text input selection\n");
    printf("***********************************************\n");

    printf("  Enter a number between 1 and 3: \n");                 
    scanf("     %d",&menuop1);                                      //main menu option input line
    
    switch(menuop1){    //switch case for menu operation simple 1 for this or 2 for that
        case 1:
            returnV++;  //return value increment to make it not return 0 when it runs past a switch
                        //Encryption menu
            printf("******************************\n");
            printf("    Running Encryption Code Function\n");
            printf("******************************\n");
            printf("    Rotation(1) or Subsition(2)\n");
                        
            scanf("%d",&option1);
            
                if (option1==1){    
                //layered menu this when true only runs this if statement same with all switches and if's within the menu
                printf("    the program you wan to run is Rotation\n");
                printf("******************************\n");
                
                REncryption();
                
                printf("******************************\n");
                
                    break;
                }
    
                else if(option1==2) {   //layered menu again
                printf("    subsitution in the making\n");
                printf("******************************\n");
                //function line 
                printf("    nothing yet");
                printf("******************************\n");
                
                    break;
                }
            
        case 2:
            returnV++;      //second return counter so i knows when it works right 
            printf("******************************\n");
            printf("    Running Decryption Function\n");
            printf("******************************\n");
            printf("    decryption not yet working\n");
            printf("    Select:\n 1) For Rotation\n 2) for Subsitution Decryption:    \n");
            scanf("%d",&option2);
            
                if(option2==1){
                    printf("    Rotation Decryption\n");
                    printf("******************************\n\n");
                    
                    //Function
                    
                    printf("******************************\n\n");
                        break;
                }
                else if(option2==2){
                    printf("    Subsition Decryption\n");
                    //printf("******************************\n\n");
                    //Function
                    //printf("******************************\n\n");
                        break;
                }   
                
                //case '3': option3 menu
                //make a function that reads and writes to a text doc and is able to display it in the terminal
                //FILE *fopen
                //
                //returnV++;
        default:{
            //when nothing is correct it run a error 
            printf("    ERROR***wrong form of input***ERROR\n");
            printf("    ERROR***Please use a option given***ERROR\n");
            returnV++; //error counter 
            break;

        }
    }
    return returnV;
}
