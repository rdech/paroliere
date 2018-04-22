#include <stdio.h>

void paroliere(int i);

char lettere[26]={ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };char frase[12];

int main(){
	frase[1]='T';
	frase[6]='D';
	frase[8]='N';
	frase[11]='I';
	//printf("%s\n", lettere);
	paroliere(7);
}

void paroliere(int i){
	if(i>=11){
		printf("%s\n", frase[6]);
		return;
	}
	int count1, count2;
	for(count1=i; count1<11; count1++){
		if(count1==8) continue;
		for(count2=0; count2<26; count2++){
			frase[count1]=lettere[count2];
			paroliere(count1+1);
		}
	}
}
