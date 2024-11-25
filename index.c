#include<stdio.h>
#include<string.h>
int nip = 1234;
int nipuser, r1, r2, r3, r4, r5, n_nip;
int saldo = 5000;
int saldo_n;

void retiro();
void abono();
void consulta();
void pagoDeServicios();

typedef struct {
    char nombre[30];
    char telefono[20];
    int saldo;
} Cliente;

void agregarCliente();
void modificarCliente();
void eliminarCliente();
void mostrarMenuAdministrador();
int main(){
	int opcd;
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
				main3();
				break;
				case 2:
					main1();
					break;
					case 3:
						main2();
						break;
						case 4:
							break;
		}
	}while(opcd !=4);
	return 0;
}


int cliente() {
    printf("\nIntroduzca el nip: ");
    scanf("%d", &nipuser);
    if (nip == nipuser) {
        while (1) {
            printf("\nBienvenido");
            printf("\n1. Retiro");
            printf("\n2. Abono");
            printf("\n3. Consulta de saldo");
            printf("\n4. Pago de servicios");
            printf("\n5. Salir");
            printf("\n¿Qué operación desea realizar? ");
            scanf("%d", &r1);
            switch (r1) {
                case 1:
                    retiro();
                    break;
                case 2:
                    abono();
                    break;
                case 3:
                    consulta();
                    break;
                case 4:
                    pagoDeServicios();
                    break;
                case 5:
                    printf("Gracias por utilizar\n");
                    return 0;
                default:
                    printf("Opción NO VÁLIDA\n");
            }
        }
    } else {
        printf("Acceso denegado\n");
    }
    return 0;
}

void retiro() {
    printf("\nMenu Retiro");
    printf("\n1. 100");
    printf("\n2. 500");
    printf("\n3. 1000");
    printf("\n4. 3000");
    printf("\n5. Otra cantidad");
    printf("\n6. Salir");
    printf("\n¿Qué operación desea realizar? ");
    scanf("%d", &r2);
    switch (r2) {
        case 1:
            saldo_n = saldo - 100;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 2:
            saldo_n = saldo - 500;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 3:
            saldo_n = saldo - 1000;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 4:
            saldo_n = saldo - 3000;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 5: {
            int c_r;
            printf("Teclee la cantidad a retirar: ");
            scanf("%d", &c_r);
            if (c_r % 100 == 0 && c_r <= saldo) {
                saldo_n = saldo - c_r;
                saldo = saldo_n;
                printf("Su nuevo saldo es: %d\n", saldo_n);
            } else {
                printf("Cantidad no válida o saldo insuficiente\n");
            }
            break;
        }
        case 6:
            printf("Gracias por utilizar el cajero\n");
            break;
        default:
            printf("Opción no válida - menú retiro\n");
    }
}

void abono() {
    printf("\nMenu Abono");
    printf("\n1. 500");
    printf("\n2. 1000");
    printf("\n3. 2000");
    printf("\n4. 3000");
    printf("\n5. Otra cantidad");
    printf("\n6. Salir");
    printf("\n¿Qué operación desea realizar? ");
    scanf("%d", &r4);
    switch (r4) {
        case 1:
            saldo_n = saldo + 500;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 2:
            saldo_n = saldo + 1000;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 3:
            saldo_n = saldo + 2000;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 4:
            saldo_n = saldo + 3000;
            saldo = saldo_n;
            printf("Su nuevo saldo es: %d\n", saldo_n);
            break;
        case 5: {
            int c_r;
            printf("Teclee la cantidad a abonar: ");
            scanf("%d", &c_r);
            if (c_r % 100 == 0) {
                saldo_n = saldo + c_r;
                saldo = saldo_n;
                printf("Su nuevo saldo es: %d\n", saldo_n);
            } else {
                printf("Cantidad no válida para abonar\n");
            }
            break;
        }
        case 6:
            printf("Gracias por utilizar el cajero\n");
            break;
        default:
            printf("Opción no válida - menú abono\n");
    }
}

void consulta() {
    printf("Su saldo es: %d\n", saldo);
}

void pagoDeServicios() {
    printf("\nPago de servicios");
    printf("\n1. Pago CFE");
    printf("\n2. Pago Telmex");
    printf("\n3. Pago Telcel");
    printf("\n¿Qué desea realizar? ");
    scanf("%d", &r5);
    int cp;
    switch (r5) {
        case 1:
        case 2:
        case 3:
            printf("Teclee la cantidad a pagar: ");
            scanf("%d", &cp);
            if (cp <= saldo) {
                saldo_n = saldo - cp;
                saldo = saldo_n;
                printf("Su pago ha sido exitoso\n");
                printf("Su nuevo saldo es: %d\n", saldo_n);
            } else {
                printf("Cantidad no válida o saldo insuficiente\n");
            }
            break;
        default:
            printf("Opción de pago de servicios inválida\n");
    }
}

int main1() {
    cliente();
    return 0;
}


int main2() {
    
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
    printf("- Obtén el 5%% de devolucion al pagar con tu\n");
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
    return 0;
}


int main3() {
    int opcion;

    do {
        printf("\nMenu Principal\n");
        printf("1. Administrador\n");
        printf("2. Salir\n");
        printf("Digite opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                mostrarMenuAdministrador();
                break;
            case 2:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(opcion != 2);

    return 0;
}

void mostrarMenuAdministrador() {
    int opcion;

    do {
        printf("\nMenu Administrador\n");
        printf("1. Añadir Cliente\n");
        printf("2. Modificar Cliente\n");
        printf("3. Eliminar Cliente\n");
        printf("4. Salir\n");
        printf("Digite opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                agregarCliente();
                break;
            case 2:
                modificarCliente();
                break;
            case 3:
                eliminarCliente();
                break;
            case 4:
                printf("Saliendo del menú de administrador...\n");
                break;
            default:
                printf("Opcion invalida\n");
        }
    } while(opcion != 4);
}

void agregarCliente() {
    FILE *archivo = fopen("clientes.txt", "a");
    Cliente cliente;

    if (archivo == NULL) {
        printf("No se puede abrir el archivo de clientes.\n");
        return;
    }

    printf("Ingresar nombre del cliente: ");
    scanf("%s", cliente.nombre);
    printf("Ingresar telefono del cliente: ");
    scanf("%s", cliente.telefono);
    cliente.saldo = 0; // Nuevo cliente empieza con saldo cero

    fprintf(archivo, "%s %s %d\n", cliente.nombre, cliente.telefono, cliente.saldo);
    fclose(archivo);

    printf("Cliente agregado exitosamente.\n");
}

void modificarCliente() { 
char nombre[30]; 
Cliente cliente; 
FILE *archivo = fopen("clientes.txt", "r"); 
FILE *temp = fopen("temp.txt", "w"); 
int encontrado = 0; 
if (archivo == NULL || temp == NULL) { 
printf("No se puede abrir el archivo de clientes.\n"); 
return; } 
printf("Ingresar nombre del cliente a modificar: "); 
scanf("%s", nombre); 
while (fscanf(archivo, "%s %s %d", cliente.nombre, cliente.telefono, &cliente.saldo) != EOF) { 
if (strcmp(cliente.nombre, nombre) == 0) { 
printf("Ingresar nuevo nombre del cliente: "); 
scanf("%s", cliente.nombre); 
printf("Ingresar nuevo telefono del cliente: "); 
scanf("%s", cliente.telefono); 
encontrado = 1; 
} 
fprintf(temp, "%s %s %d\n", cliente.nombre, cliente.telefono, cliente.saldo); 
} 
fclose(archivo); 
fclose(temp); 
remove("clientes.txt"); 
rename("temp.txt", "clientes.txt"); 
if (encontrado) { 
printf("Cliente modificado exitosamente.\n"); } 
else { 
printf("Cliente no encontrado.\n"); 
 } 
}

void eliminarCliente() {
    char nombre[30];
    FILE *archivo = fopen("clientes.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    Cliente cliente;
    int encontrado = 0;

    if (archivo == NULL || temp == NULL) {
        printf("No se puede abrir el archivo de clientes.\n");
        return;
    }

    printf("Ingresar nombre del cliente: ");
    scanf("%s", nombre);

    while (fscanf(archivo, "%s %s %d", cliente.nombre, cliente.telefono, &cliente.saldo) != EOF) {
        if (strcmp(cliente.nombre, nombre) != 0) {
            fprintf(temp, "%s %s %d\n", cliente.nombre, cliente.telefono, cliente.saldo);
        } else {
            encontrado = 1;
        }
    }

    fclose(archivo);
    fclose(temp);

    remove("clientes.txt");
    rename("temp.txt", "clientes.txt");

    if (encontrado) {
        printf("Cliente eliminado exitosamente.\n");
    } else {
        printf("Cliente no encontrado.\n");
    }
}



