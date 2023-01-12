int strlen1(char s1[]){
    int i=0;
    while(s1[i]!='\0') i++;
    return i;
}
int strstr1(char s1[], char s2[]){
	for(int i=0; i<strlen1(s1); i++){
		int c=0;
		if(s1[i]==s2[c]){
			for(int j=i; c<strlen1(s2); j++,c++) if(s1[j] != s2[c]) break;
			if(c==strlen1(s2)) return &s1[i];
		}
	}
	return 0;
}
int strspn1(char s1[], char s2[]){
	if(s1[0]==s2[0]){
		int c=0;
		for(int i=0; i<strlen1(s1); i++){
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
		for(int i=0; i<strlen1(s1); i++){
			if(s1[i] != s2[0]) c++;
			else break;
		}
		return c;
	}
}
int strcmp1(char s1[], char s2[]){
    int i=1;
    if(s1[0]==s2[0] && strlen1(s1)==strlen1(s2)){
        for(i; i<strlen1(s2); i++){
            if(s1[i]!=s2[i]) break;
        }
        if(i==strlen1(s2)) return 1;
    }
    return 0;
}
