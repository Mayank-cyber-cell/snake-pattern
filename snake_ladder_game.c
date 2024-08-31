#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int deepak(int d)
{
    if (d == 25)
    {
        d = 8;
        return d;
    }
    else if (d == 32)
    {
        d = 22;
        return d;
    }
    else if (d == 50)
    {
        d = 45;
        return d;
    }
    else if (d == 70)
    {
        d = 38;
        return d;
    }
    else if (d == 80)
    {
        d = 23;
        return d;
    }
    else if (d == 91)
    {
        d = 84;
        return d;
    }
    else if (d == 99)
    {
        d = 11;
        return d;
    }
    else if (d == 2)
    {
        d = 66;
        return d;
    }
    else if (d == 7)
    {
        d = 37;
        return d;
    }
    else if (d == 29)
    {
        d = 31;
        return d;
    }
    else if (d == 43)
    {
        d = 55;
        return d;
    }
    else if (d == 60)
    {
        d = 74;
        return d;
    }
    else if (d == 73)
    {
        d = 95;
        return d;
    }
    else
    {
        return d;
    }
}
int mayank(int m)
{
    if (m == 25)
    {
        m = 8;
        return m;
    }
    else if (m == 32)
    {
        m = 22;
        return m;
    }
    else if (m == 50)
    {
        m = 45;
        return m;
    }
    else if (m == 70)
    {
        m = 38;
        return m;
    }
    else if (m == 80)
    {
        m = 23;
        return m;
    }
    else if (m == 91)
    {
        m = 84;
        return m;
    }
    else if (m == 99)
    {
        m = 11;
        return m;
    }
    else if (m == 2)
    {
        m = 66;
        return m;
    }
    else if (m == 7)
    {
        m = 37;
        return m;
    }
    else if (m == 29)
    {
        m = 31;
        return m;
    }
    else if (m == 43)
    {
        m = 55;
        return m;
    }
    else if (m == 60)
    {
        m = 74;
        return m;
    }
    else if (m == 73)
    {
        m = 95;
        return m;
    }
    else
    {
        return m;
    }
}
int prince(int p)
{
    if (p == 25)
    {
        p = 8;
        return p;
    }
    else if (p == 32)
    {
        p = 22;
        return p;
    }
    else if (p == 50)
    {
        p = 45;
        return p;
    }
    else if (p == 70)
    {
        p = 38;
        return p;
    }
    else if (p == 80)
    {
        p = 23;
        return p;
    }
    else if (p == 91)
    {
        p = 84;
        return p;
    }
    else if (p == 99)
    {
        p = 11;
        return p;
    }
    else if (p == 2)
    {
        p = 66;
        return p;
    }
    else if (p == 7)
    {
        p = 37;
        return p;
    }
    else if (p == 29)
    {
        p = 31;
        return p;
    }
    else if (p == 43)
    {
        p = 55;
        return p;
    }
    else if (p == 60)
    {
        p = 74;
        return p;
    }
    else if (p == 73)
    {
        p = 95;
        return p;
    }
    else
    {
        return p;
    }
}
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int d = 0, m = 0, p = 0, r, s, t, m1, d1, p1;
    printf("deepak press 1 to start: ");
    scanf("%d", &d1);
    if (d1 == 1)
    {
        r = rand() % 6 + 1;
    }
    d = r + d;
    d = deepak(d);
    printf("deepak you have rolled %d and your current position is %d\n", r, d);
    printf("mayank press 1 to start: ");
    scanf("%d", &m1);
    if (m1 == 1)
    {
        s = rand() % 6 + 1;
    }
    m = s + m;
    m = mayank(m);
    printf("mayank you have rolled %d and your current position is %d\n", s, m);
    printf("prince press 1 to start: ");
    scanf("%d", &p1);
    if (p1 == 1)
    {
        t = rand() % 6 + 1;
    }
    p = t + p;
    p = prince(p);
    while (1)
    {
        while (1)
        {
            printf("prince you have rolled %d and your current position is %d\n", t, p);
            printf("deepak press 1 to roll the dice: ");
            scanf("%d", &d1);
            if (d1 == 1)
            {
                r = rand() % 6 + 1;
                d += r;
            }
            d = deepak(d);
            if (d > 100)
            {
                d -= r;
                d = deepak(d);
                break;
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            printf("deepak you have rolled %d and your current position is %d\n", r, d);
            printf("mayank press 1 to roll the dice: ");
            scanf("%d", &m1);
            if (m1 == 1)
            {
                s = rand() % 6 + 1;
                m += s;
            }
            m = mayank(m);
            if (m > 100)
            {
                m -= s;
                m = mayank(m);
                break;
            }
            else
            {
                break;
            }
        }
        while (1)
        {
            printf("mayank you have rolled %d and your current position is %d\n", s, m);
            printf("prince press 1 to roll the dice: ");
            scanf("%d", &p1);
            if (p1 == 1)
            {
                t = rand() % 6 + 1;
                p += t;
            }
            p = prince(p);
            if (p > 100)
            {
                p -= t;
                p = prince(p);
                break;
            }
            else
            {
                break;
            }
        }
        if (m == 100)
        {
            printf("mayank wins!!!");
            break;
        }
        else if (d == 100)
        {
            printf("deepak wins!!!");
            break;
        }
        else if (p == 100)
        {
            printf("prince wins!!!");
            break;
        }
    }
    return 0;
}