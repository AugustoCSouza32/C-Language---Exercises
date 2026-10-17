int conditional (int a, int b) {

    if (a > b) {
        return 1;
    }
    else if (a < b) {
        return 0;
    }
}

int main() {

    conditional(5, 10);

    if (conditional(5, 10) == 1) {
        printf("a is greater than b\n");
    }
    else if (conditional(5, 10) == 0) {
        printf("a is less than b\n");
    }
    return 0;
}