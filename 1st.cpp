#include <stdio.h>
void create(int a);
void display(int a);
void modify();
int append(int a);
void search(int a);
void sort(int n);
int i, j, n, f, key;
struct bank
{
    char name[15];
    char bank_name[10];
    char branch_name[10];
    int emp_id;
    int mobile_no;
    char DOJ[15];
} b[5], temp;
int main()
{
    int wpch, cnt;
    printf("\n How many recordswe want:");
    scanf("%d", &n);
    cnt = n;
    do
    {
        printf(\n * ***Without Pointer Menu ****);
        printf("\n 1.create");
        printf("\n 2.append");
        printf("\n 3.modify");
        printf("\n 4.display");
        printf("\n 5.search");
        printf("\n 6.sort");
        printf("\n 7.exit");
        printf("\n Enter the choice:");
        scanf("%d", &wpch);
        switch (wpch)
        {
        case 1:
            create(n);
            break;
        case 2:
            cnt = append(n);
            n = cnt;
            break;
        case 3:
            modify();
            break;
        case 4:
            display(cnt);
            break;
        case 5:
            search(n);
            break;
        case 6:
            sort(n) break
        }
    } while (wpch != 7);
    return 0;
}
void create(int a)
{
    for (i = 0; i < a; i++)
    {
        printf
    }
}