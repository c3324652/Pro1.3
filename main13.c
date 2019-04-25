#include<stdio.h>
#include"RFunctionE.h"
#include"menu.h"
#include"DFunctionR.h"
/*to do:condense hear files into 1 "Cipher" and make it run a menu and
 choose  functions to run accordingly 
 a good input method need to be able to work
 
 find out why errors happen and fix all 

/**************************************************************************
 this uses header files and runs the task
 **************************************************************************/
int main()
{
    
    menuscreen();       //the function to run a menu
    /*
    these dont need to be here if they are called within menu
    */
    REncryption();      //Rotation Encryption these dont need to be here if

    DecryptionR();      //Rotation Decryption
    //to be made:
    /*
    SEncryption();
    SDecryption();
    find a method of making it select a 
    */
    

    return 1;
}
