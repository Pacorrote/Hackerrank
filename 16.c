char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
	return document[n-1][m-1][k-1];
}

char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) { 
	return document[m-1][k-1];
}

char*** kth_paragraph(char**** document, int k) {
	return document[k-1];
}
char* get_word(char*text,char**w){
	(*w)=NULL;
	int c_num=0;
	while(*text!=' ' && *text!='.' && *text!='\n' && *text!='\0'){
		c_num++;
		*w=realloc(*w,sizeof(char)*(c_num+1));
		(*w)[c_num-1]=*text;
		text++;
	}
	(*w)[c_num]='\0';
	return text;
}

char* get_sentence(char*text,char***s){
	(*s)=NULL;
	int w_num=0;
	while(*text!='.' && *text!='\n' && *text!='\0'){
		w_num++;
		*s=realloc(*s,sizeof(char *)*w_num);
		text = get_word(text,*s+w_num-1);
		if(*text==' ')text++;
	}
	return text;
}

char* get_paragraph(char*text,char****p){
	(*p)=NULL;
	int s_num=0;
	while(*text!='\n' && *text!='\0'){
		s_num++;
		*p=realloc(*p,sizeof(char **)*s_num);
		text = get_sentence(text,*p+s_num-1);
		if(*text=='.')text++;
	}
	return text;
}
char**** get_document(char*text){
	char****d=NULL;
	int p_num=0;
	while(*text!='\0'){
		p_num++;
		d=realloc(d,sizeof(char ***)*p_num);
		text = get_paragraph(text,d+p_num-1);
		if(*text=='\n')text++;
	}
	return d;
}
