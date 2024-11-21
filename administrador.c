#include <stdio.h>
#include <string.h>

//Firmar

void agregarUsuario();
void verUsuario();
void verAdmin();

//Variables Global
FILE *archivoUsuario,*archivoTelefono,*administrador, *archivo1,*archivoContraseña;
char nombre[30],telefono[20];
char nombreL[30],telefonoL[20];

int main(){

	int opc;
	

	
	do{
		printf("Menu de la Agenda\n");
		printf("1-Agregar Usuario\n");
		printf("2-Ver Usuarios\n");
		printf("3-administrador\n");
		printf("4-cliente\n");
		printf("5-contactar programadores\n");
		printf("6-Salir\n");
		printf("Digite opcion:");
		scanf("%d",&opc);
		switch(opc){
			case 1: 
				agregarUsuario(); 
				break;
			case 2:
				verUsuario();
				break;
				
			case 3:
                
				break;
			case 4:
				
				break;
			case 5:
    
    printf("Se selecciono 'Contactar Programadores'\n");
    printf("\tBanca SAT S.A de C.V\n\n");

    printf("\tPrograma Realizado por:\n\n");
    printf("- Espinoza Tello Joan Manuel\n");
    printf("- Hernandez Herrera Santiago\n");
    printf("- Torres Marin David Emiliano\n");
    printf("\n");
    
    
    printf("\tCorreos Electronicos de Contacto:\n\n");
    printf("joanmet89@gmail.com\n");
    printf("santyherre10@gmail.com\n");
    printf("david.torres.marin.16@gmail.com\n");
    printf("\n");

    
    printf("\tNo te pierdas de nestras promociones exlusivas por ser cliente\n\n");
    printf("1.Cashback en tus compras diarias:\n");
    printf("- Obten el 5%% de devolucion al pagar con tu\n");
    printf("  tarjeta en supermercados, restaurantes\n");
    printf("  y tiendas online.\n");
    printf("- Promocion valida hasta el 31 de diciembre de 2024.\n");
    printf("\n");
    
    printf("2. Viajes y experiencias inolvidables:\n");
    printf("- Gana 2 boletos de avion gratis por cada\n");
    printf("  $15,000 MXN gastados acumulados con tu\n");
    printf("  tarjeta Platinum.\n");
    printf("- Participa hasta el 15 de enero de 2025.\n");
	printf("\n");

    printf("Gracias por confiar en Banca SAT\n");
				break;
			case 6:
				printf("Saliendo del programa...\n");
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opc != 6);
	return 0;
}



void agregarUsuario(){
				archivoUsuario=fopen("usuarios.txt","a+");
				archivoTelefono=fopen("telefonos.txt","a+");
				printf("Ingresar el nombre:\n");
				fflush(stdin);
				//gets(nombre);
				scanf("%s",nombre);
				printf("Ingrese el numero de telefono:\n");
				scanf("%s",telefono);
				fprintf(archivoUsuario,"%s\n",nombre);
				fprintf(archivoTelefono,"%s\n",telefono);
				fclose(archivoUsuario);
				fclose(archivoTelefono);
}

void verUsuario(){
	            archivoUsuario=fopen("usuarios.txt","a+");
				archivoTelefono=fopen("telefonos.txt","a+");
				printf("Usuarios registrados\n");
				
				while(feof(archivoUsuario)==0){
					fscanf(archivoUsuario,"%s",nombreL);
					printf("Nombre usuario: %s\n",nombreL);
					fscanf(archivoTelefono,"%s",telefonoL);
					printf("Telefono de %s: %s\n",nombreL,telefonoL);
					
					if(strcmp(nombreL,"juan") == 0){
						printf("cadenas iguales");
					}
				
				}
				
				fclose(archivoUsuario);
				fclose(archivoTelefono);
				fclose(archivoContraseña);
				fclose(archivo1);
}
