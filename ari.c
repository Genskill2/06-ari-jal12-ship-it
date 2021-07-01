#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

string ari(string s)
{
	int ch=0, word=1, sentence=0;
	float ARI;
	for(size_t i=0; i<strlen(s); i++)
	{
		if(isalnum(s[i])) 
			ch++;
	
		else if(s[i] == ' ')
			word++;
			
		else if(s[i] == '.' || s[i] == '?' || s[i] == '!') {
			if(i+1 < strlen(s) && isalpha(s[i+1])){
				ch++;
				i+=2;
			}
			else sentence++;
		}

	}
	ARI = 4.71*ch/word + 0.5*word/sentence - 21.43;
	switch((int)ceil(ARI))
	{
		case 0: 
			return "Invalid";
			break;
		case 1: 
			return "Kindergarten";
			break;
			
		case 2: 
			return "First/Second Grade";
			break;
		        
		case 3: 
			return "Third Grade";
			break;
		       
		case 4: 
			return "Fourth Grade";
			break;
				
		case 5: 
			return "Fifth Grade";
			break;
				
		case 6: 
			return "Sixth Grade";
			break;
			
		case 7: 
			return "Seventh Grade";
			break;
				
		case 8: 
			return "Eight Grade";
			break;
				
		case 9: 
			return "Ninth Grade";
			break;
				
		case 10: 
			return "Tenth Grade";
			break;
				
		case 11: 
			return "Eleventh Grade";
			break;
				
		case 12:
			return "Twelfth Grade";
			break;
				
		case 13: 
			return "College student";
			break;
				
		case 14: 
			return "Professor";
			break;
				 
		default: 
			return "Professor";
			break;
	}
	return "exit";
}

		
