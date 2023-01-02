int strstr1(char s1[], char s2[]){
	for(int i=0; i<strlen(s1); i++){
		int c=0;
		if(s1[i]==s2[c]){
			for(int j=i; c<strlen(s2); j++,c++) if(s1[j] != s2[c]) break;
			if(c==strlen(s2)) return &s1[i];
		}
	}
	return 0;
}
int strspn1(char s1[], char s2[]){
	if(s1[0]==s2[0]){
		int c=0;
		for(int i=0; i<strlen(s1); i++){
			if(s1[i]==s2[i]) c++;
			else break;
		}
		return c;
	}
	return 0;
}
int strcspn1(char s1[], char s2[]){
	if(s1[0]==s2[0]) return 0;
	else{
		int c=0;
		for(int i=0; i<strlen(s1); i++){
			if(s1[i] != s2[0]) c++;
			else break;
		}
		return c;
	}
}
