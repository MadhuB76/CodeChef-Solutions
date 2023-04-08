// #include <stdio.h>
// typedef struct Bytexl
// {
//     int id;
// } k;
// int main()
// {
//     k *v, p;
//     p.id = 12;
//     v = &p;
//     printf("%d", v->id);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int *p, a = 10, b = 20;
//     p = &a;
//     printf("%d", ~(++*p));
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6};
//     printf("%d", sizeof(a) / sizeof(int));
//     return 0;
// }
#include <stdio.h>
void fun(int *i, int *j)
{
    *i = *i + *i;
    *j = *j / *j;
}
int main()
{
    int i = 23, j = 7;
    fun(&i, &j);
    printf("%d, %d", i, j);
    return 0;
}