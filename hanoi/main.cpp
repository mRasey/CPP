#include <stdio.h>
//用三个堆栈保存每根柱子上的盘子号
int stack[3][1000] = {{0}};
int s[3] = {0};
void move(int n, int from, int via, int to)
{
    if(n==1)
    {
        stack[to-1][++s[to-1]] = stack[from-1][s[from-1]--];
        printf("%d(%d) -> %d(%d)\n", from, stack[to-1][s[to-1]], to, stack[to-1][s[to-1]]);
        return;
    }
    move(n-1, from, to, via);
    move(1, from, via, to);
    move(n-1, via, from, to);
}

int main()
{
    int n;
    int i;
    for(i = 0; i < 1000; i++){
        stack[0][i] = i;
    }
    scanf("%d", &n);
    s[0] = n;
    move(n, 1, 2, 3); /* 移动n个圆盘,1为起点,3为终点,2是过渡 */
    return 0;
}