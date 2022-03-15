#ifndef SORT_H
#define SORT_H
#define sort(x, n) \
    _Generic((x),\
        float*: Fsort,\
        int*: Isort\
    )(x, n)
void Fsort(float list[], int size);
void Isort(int list[], int size);
#endif