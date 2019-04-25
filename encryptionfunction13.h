/*******************************************************************************
 this is what make the rotation encryption work


*******************************************************************************/
int encryptionFunction(){
    
    char characterAscii;
	char Text[1000];
	int i;
	int key;
	
    for(i = 0; Text[i] != '\0'; ++i){       
	    //for loop to incrament i and use of '\0'(NULL)
		characterAscii = Text[i];   
		//characterAscii is taking 'text' and making it numbers 
		//lower case if statement 
		    if(characterAscii >= 'a' && characterAscii <= 'z') { 
		    //if characterAscii greater than a and less than z key is added
			characterAscii = characterAscii + key;
			//accounting for full rotations eg dog wiht k of 3 is grj and dog with k of 29 is also grj 
			    if(characterAscii > 'z'){
				characterAscii = characterAscii - 'z' + 'a' - 1; 
				//only worked with the -1 might be cause of the c thing where something like 0-10 being 11 values 
			    }
			    
		Text[i] = characterAscii;   
		
		    }
		//upper case letters else if statement 
		else if(characterAscii >= 'A' && characterAscii <= 'Z'){
			characterAscii = characterAscii + key;
			//accounting for full rotations eg DOG wiht k of 3 is GRJ and DOG with k of 29 is also GRJ 
			if(characterAscii > 'Z'){
				characterAscii = characterAscii - 'Z' + 'A' - 1;
			}

		 Text[i] = characterAscii;

		}

    }

    return 0;

}
