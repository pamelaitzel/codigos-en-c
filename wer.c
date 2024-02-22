

void decimalABinario(int num) {
    if (num == 0) {
        return;
    }

    decimalABinario(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num;

    printf("Ingrese un número decimal: ");
    scanf("%d", &num);

    printf("La representación binaria de %d es: ", num);
    decimalABinario(num);
    printf("\n");

    return 0;
}
