#include <stdio.h>
#include "sort.h"
int main() {
    float flist1[1]={0.};
    float flist2[2]={0.3, 0.};
    float flist3[3]={0., 0.9, 0.6};
    Fsort(flist1, 1);
    Fsort(flist2, 2);
    Fsort(flist3, 3);
    for( int i = 0; i<1;i++)printf("%f\n", flist1[i]);
    puts("\n");
    for( int i = 0; i<2;i++)printf("%f\n", flist2[i]);
    puts("\n");
    for( int i = 0; i<3;i++)printf("%f\n", flist3[i]);
    puts("\n\n");
    int ilist1[1] = {0};
    int ilist2[2] = {6, 5};
    int ilist3[3] = {9, 6, 7};
    Isort(ilist1, 1);
    Isort(ilist2, 2);
    Isort(ilist3, 3);
    for( int i = 0; i<1;i++)printf("%d\n", ilist1[i]);
    puts("\n");
    for( int i = 0; i<2;i++)printf("%d\n", ilist2[i]);
    puts("\n");
    for( int i = 0; i<3;i++)printf("%d\n", ilist3[i]);
}