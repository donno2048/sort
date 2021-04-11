#define iSwap(X, Y) {\
              X ^= Y;\
              Y ^= X;\
              X ^= Y;}
#define fSwap(X, Y) {\
              X += Y;\
           Y = X - Y;\
              X -= Y;}
int power(int x, int y){
    int temp = x;
    for (int i = 1; i < y; i++) temp *= x;
    return temp;
}
void Fsort(float list[], int size) {
    // setting initial gap
    int gap = 0, k = 2, j, x, i;
    while ((size - 1) >> ++gap);
    gap = power(2, gap) - size;
    // creating list with this gap
    float List[gap + size], min = list[0]; /// diff #1
    for (i = 1; i < size; i++) if (list[i] < min) min = list[i];
    for (i = 0; i < gap; i++) List[i] = min;
    size += gap;
    for (i = gap; i < size; i++) List[i] = list[i - gap];
    // proccess
    while (k <= size) {
        j = k / 2;
        while (j) {
            for (i = 0; i < size; i++) {
                x = i ^ j;
                if ((x > i) && ((!(i & k) && (List[i] > List[x])) || ((i & k) && (List[i] < List[x])))) fSwap(List[i], List[x]) /// diff #2
            }
            j /= 2;
        }
        k *= 2;
    }
    // set the initial list back
    for (i = gap; i < size; i++) list[i - gap] = List[i];
}
void Isort(int list[], int size) {
    // setting initial gap
    int gap = 0, k = 2, j, x, i;
    while ((size - 1) >> ++gap);
    gap = power(2, gap) - size;
    // creating list with this gap
    int List[gap + size], min = list[0]; /// diff #1
    for (i = 1; i < size; i++) if (list[i] < min) min = list[i];
    for (i = 0; i < gap; i++) List[i] = min;
    size += gap;
    for (i = gap; i < size; i++) List[i] = list[i - gap];
    // proccess
    while (k <= size) {
        j = k / 2;
        while (j) {
            for (i = 0; i < size; i++) {
                x = i ^ j;
                if ((x > i) && ((!(i & k) && (List[i] > List[x])) || ((i & k) && (List[i] < List[x])))) iSwap(List[i], List[x]) /// diff #2
            }
            j /= 2;
        }
        k *= 2;
    }
    // set the initial list back
    for (i = gap; i < size; i++) list[i - gap] = List[i];
}