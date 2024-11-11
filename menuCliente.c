#include <stdio.h>
//preguntar si se puede usar
int nip=1234;
	int nipuser,r1,r2,r3,r4,r5,n_nip;
	int saldo=5000;
	int saldo_n;
void retiro();
void abono();
void consulta();
void pagoDeServicios();

int cliente()
{
	printf("\nIntroduzca el nip");
	scanf("%d",&nipuser);
	if(nip==nipuser)
	{
	Nip:
	Inicio:
	system("cls");	
	printf("Bienvenido");
	printf("\n1. Retiro");
	printf("\n2. Abono");
	printf("\n3. Consulta de saldo");
	printf("\n4. Pago de servicios");
	printf("\n5. Salir");
	printf("\n que operacion desea realizar");
	scanf("%d",&r1);
	switch(r1)
	{//inicio de los menus
case 1: {//inicio del menu retiro
	retiro();
case 2: {//inicio del caso 2
	abono();
case 3:{
	consulta();
	case 4:{
		pagoDeServicios();
	case 5:{
		system("cls");
		printf("Gracias por utilizar");
		break;
	}
default:printf("Opcion NO VALIDA");		
}//fin del switch principal
}
else printf("Acceso denegado");
Fin:
return 0;
}//fin del programa


void retiro(){
	system ("cls");
printf("\nMenu Retiro");
printf("\n1.100");
printf("\n2.500");
printf("\n3.1000");
printf("\n4.3000");
printf("\n5.Otra cantidad");
printf("\n6.Salir");
printf("\n.Que operacion desea realizar");
scanf("%d",&r2);
switch (r2)
{//inicio de los retiros
case 1:{
saldo_n=saldo-100;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar otra operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
break;
}
case 2:{
saldo_n=saldo-500;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
}
case 3:{
saldo_n=saldo-1000;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
}
case 4:{
saldo_n=saldo-3000;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
}
case 5:{
	int c_r;
	printf("teclee la cantiadd a retirar");
	scanf("%d",&c_r);
	int x;
	x=c_r%100;
    if(x==0)
    {
    	if(c_r<=saldo)
    {	
    	saldo_n=saldo-c_r;
    	saldo=saldo_n;
    	printf("Su nuevo saldo es:%d",saldo_n);
    	printf("\n Desea realizar otra operacion");
    	scanf("%d",&r3);
    	if(r3==1)
    	goto Inicio;
    	else
    	goto Fin;
		}
		else
		printf("saldo insuficiente");
		break;
		}
		else 
		printf("Cantidad no valida");
		break;
}
case 6:{
	printf("Gracias por utilizar el cajero");
	break;
}
default: printf("Opcion no valida-menu retiro");
}//fin de switch de menu retiro
break;
}

void abono(){
	system ("cls");
printf("\nMenu abono");
printf("\n1.500");
printf("\n2.1000");
printf("\n3.2000");
printf("\n4.3000");
printf("\n5. otra cantidad");
printf("\n6. Salir");
printf("\n. que operacion desea realizar");
scanf("%d",&r4);
switch (r4)
{//inicio de caso retiro
case 1: {
saldo_n=saldo+500;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar otra operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
break;
}
case 2: {
saldo_n=saldo+1000;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
break;
}
case 3: {
saldo_n=saldo+2000;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
break;
}
case 4: {
saldo_n=saldo+3000;
saldo=saldo_n;
printf("su nuevo saldo es: %d",saldo_n);
printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
break;
}
case 5:{
	Inicio1:
	int c_r;
	printf("teclee la cantiadd a abonar");
	scanf("%d",&c_r);
	int x;
	x=c_r%100;
    if(x==0)
    {
    	saldo_n=saldo+c_r;
    	saldo=saldo_n;
    	printf("Su nuevo saldo es:%d",saldo_n);
    	printf("\n Desea realizar otra operacion");
    	scanf("%d",&r3);
    	if(r3==1)
    	goto Inicio1;
    	else
    	goto Fin;
		}
    	else{
		printf("Cantidad no valida para abonar");
		printf("\n. Desea volver a abonar");
		scanf("%d",&r3);
    	if(r3==1)
    	goto Inicio1;
    	else
    	goto Fin;
	
	}
		

}



}

}//Fin del caso 2

void consulta(){
	printf("Su saldo es: %d",saldo);
	printf("\nDesea realizar una nueva operacion");
scanf("%d",&r3);
if(r3==1)
goto Inicio;
else
goto Fin;
}

void pagoDeServicios(){
	system("cls");
		printf("\n Pago de servicios");
		printf("\n 1. Pago CFE");
		printf("\n 2. Pago Telmex");
		printf("\n 3. Pago Telcel");
		printf("\n Que desea realizar");
		scanf("%d",&r5);
		switch(r5)
		{
			case 1:{
				Regresar:
				printf("teclee la cantida a pagar");
				int cp;
				scanf("%d",&cp);
				if(cp<=saldo)
				{
				printf("Su pago ha sido exitoso");
				saldo_n=saldo-cp;
				saldo=saldo_n;
				printf("\n Su nuevo saldo es:%d",saldo_n);
				printf("\n Desea realizar otra operacion");
				scanf("%d",&r3);
				if(r3==1)
				goto Inicio;
				else
				goto Fin;
			    }
			    else
			    {
			    	printf("Cantidad no valida saldo insuficiente");
			    	printf("\n Desea volver a ingresar la cantidad");
			    	scanf("&d",&r3);
			    	if(r3==1)
			    	goto Regresar;
			    	else 
			    	goto Fin;
			    }
				}
				case 2:{
				Regresar1:
				printf("teclee la cantida a pagar");
				int cp;
				scanf("%d",&cp);
				if(cp<=saldo)
				{
				printf("Su pago ha sido exitoso");
				saldo_n=saldo-cp;
				saldo=saldo_n;
				printf("\n Su nuevo saldo es:%d",saldo_n);
				printf("\n Desea realizar otra operacion");
				scanf("%d",&r3);
				if(r3==1)
				goto Inicio;
				else
				goto Fin;
			    }
			    else
			    {
			    	printf("Cantidad no valida saldo insuficiente");
			    	printf("\n Desea volver a ingresar la cantidad");
			    	scanf("&d",&r3);
			    	if(r3==1)
			    	goto Regresar1;
			    	else 
			    	goto Fin;
			    }
				}
				
				case 3:{
				Regresar2:
				printf("teclee la cantida a pagar");
				int cp;
				scanf("%d",&cp);
				if(cp<=saldo)
				{
				printf("Su pago ha sido exitoso");
				saldo_n=saldo-cp;
				saldo=saldo_n;
				printf("\n Su nuevo saldo es:%d",saldo_n);
				printf("\n Desea realizar otra operacion");
				scanf("%d",&r3);
				if(r3==1)
				goto Inicio;
				else
				goto Fin;
			    }
			    else
			    {
			    	printf("Cantidad no valida saldo insuficiente");
			    	printf("\n Desea volver a ingresar la cantidad");
			    	scanf("&d",&r3);
			    	if(r3==1)
			    	goto Regresar2;
			    	else 
			    	goto Fin;
				}
		 }
			default:printf("Opcion de pago de servicios invalida");
		}
		break;
	}
}
