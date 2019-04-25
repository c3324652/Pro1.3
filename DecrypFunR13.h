/****************************************************************************

*****************************************************************************/
    
    
int decryptionfunctionR(){
        
    char text[500];
    char ASCIIchar;
	int i;
	int key;   
        
    
        for(i = 0; text[i] != '\0'; ++i){
		ASCIIchar = text[i];
		    if(ASCIIchar >= 'a' && ASCIIchar <= 'z'){
			    ASCIIchar = ASCIIchar - key;
			    if(ASCIIchar < 'a'){
				    ASCIIchar = ASCIIchar + 'z' - 'a' + 1;
			    }
			text[i] = ASCIIchar;
		    }
		else if(ASCIIchar >= 'A' && ASCIIchar <= 'Z'){
			ASCIIchar = ASCIIchar - key;
			    if(ASCIIchar < 'A'){
				    ASCIIchar = ASCIIchar + 'Z' - 'A' + 1;
			    }
			text[i] = ASCIIchar;
		}
	}
    }
