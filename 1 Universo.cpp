#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int Binario(int);

int main() {
		int op,n,m,h;
	
	do{
	printf("\n\n1. Escoger numero\n2. Random\n0 para salir:   ");
	scanf("%d",&op);
	switch(op){
		case 1:
			scanf("%d",&n);
			FILE *ar;
			ar=fopen("Universo.txt","a");
			printf("e,");
			fprintf(ar,"\n\nModo Manual");
			fprintf(ar,"\ne,");
			fclose(ar);			
				for(h=1;h<=n;h++){
				Binario(h);}

			break;
		case 2:
			m=rand()%1001;// 1001 porque no debe pasar de 1000, 
			printf("\n%d\n\n",m);
			FILE *arch;
			arch=fopen("Universo.txt","a");
			printf("e,");
			fprintf(arch,"\n\nModo Automatico");
			fprintf(arch,"\ne,");
			fclose(arch);
			for(h=1;h<=m;h++){
			Binario(h);}
			break;
		default:
			break;
		}}
	while(op!=0);
	return 0;
}


int Binario(int l){
	int a[l];//l es el numero de celdas que quiero, coincide con:  2^l -1 en binario... 111 es 7 = 2^3 -1
	int k,i,z,p,j;//k serian los numeros en binario de 0 a powah, i es 0 al inicio para llevar una cuenta,
	int powah=pow(2,l)-1;//powah es mi limite en lo que cabe dentro del arreglo de l espacios, en uno de 3 cabe hasta 7 en binario.
// z es el cociente, p y j es para el for que va a imprimir el binario.
for(k=0;k<=powah;k++){
z=k;
i=0;//se inicializa aqui

		while(z>0){
			if(z%2==0){
				a[i]=0;
				i++;}
			else{
				a[i]=1;
				i++;
				}
			z=z/2;
			}
	FILE *arc;
	arc=fopen("Universo.txt","a");
	for(p=1;p<=l-i;p++){
	printf("0");
	fputc('0',arc);
	}
	for(j=i-1;j>=0;j--){
	printf("%d",a[j]);
	fprintf(arc,"%d",a[j]);}
printf(",");
fprintf(arc,",");
fclose(arc);
}
}

