#include <stdio.h>
int main()///�ɮ׫���fopen()
{///�ɮ׫��� fout = fopen("�ɦW","�Ҧ�");
    FILE * fout = fopen("file.txt","w");
    printf("Hello World\n");
    fprintf(fout, "Hello World�b�ɮ׸�\n");
}
