/*
 * Author: Farxod Qarshiyev
 * Date: 23.11.2023
 * Name: Farxod
 */
void ascendingOrder(int A, int B) {
    if (A <= B) {
        std::cout << A << " ";
        ascendingOrder(A + 1, B);
    }
}

void descendingOrder(int A, int B) {
    if (A >= B) {
        std::cout << A << " ";
        descendingOrder(A - 1, B);
    }
}
