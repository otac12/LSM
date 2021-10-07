

bool verificacionoracion(char *Oracion){
	printf("\ndato recibido : %s",Oracion);
	printf("\ntamaño de tu oracion : %d", strlen(Oracion));	
	int i,c=0;
	for(i=0; i<strlen(Oracion); i++){
		printf("\n%c :",Oracion[i]);
		if(Oracion[i]=="\n"){
		   c++;
		};
	};
	
	if(c>0){
			return true;
		}else{
			printf("ok no");
			return false;
		};

}

