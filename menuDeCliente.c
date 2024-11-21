#include <stdio.h>

int nip = 1234;
int nipuser, r1, r2, r3, r4, r5, n_nip;
int saldo = 5000;
int saldo_n;

void retiro();
void abono();
void consulta();
void pagoDeServicios();

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

int main() {
    cliente();
    return 0;
}

