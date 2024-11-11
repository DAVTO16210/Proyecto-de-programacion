#include<stdio.h>
int cliente();

int main(){
	int opcp;
	printf("Bienvenido a banca sat\n");
	printf("Que desea relizar\n");
	printf("1-Administrador\n");
	printf("2-Cliente\n");
	printf("3-Contactar programadores\n");
	printf("4-Salir\n");
	scanf("%d",opcd);
	do{
		switch (opcd){
			case 1:
				break;
				case 2:
					cliente();
					break;
					case 3:
						break;
						case 4:
							break;
		}
	}while(opcd !=4);
	return 0;
}
