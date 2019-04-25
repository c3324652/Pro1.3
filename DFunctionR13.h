/***************************************************************************
 this is what makes the rotation Decryption Work
 *************************************************************************/
// #include "DFunctionR.h"
 #include "DecrypFunR.h"
 
 
 int DecryptionR(){
     
        
    int selectionRD;    
    char text[500];
    char ASCIIchar;
	int key;
	int i;
	
	
	printf("    Welcome To Rotation Decryption\n");
	printf("*************************\n");
	printf("    What would you like to do:\n    ");
	printf("    write you own text or import from a txt\n");
	printf("*************************\n");
	printf("1) Input");
	printf("2) Import\n");
	scanf("%d",&selectionRD);
	    switch(selectionRD){ //text selection switch case
	        case 1:
	            if(selectionRD==1){
	                printf("*************************\n");
	                printf("Enter a text to decrypt: ");
	                gets(text);
	                printf("Enter key: ");
    	            scanf("%d", &key);
    	            decryptionfunctionR();
    	            break;
	            }
	        case 2:
	            if(selectionRD==2){
	                printf("*************************\n");
	                printf("dogs");
	                break;
	                
	            }
	    }
	printf("*************************\n"); 
	printf("Decrypted text: %s", text);
	return 0;
}
