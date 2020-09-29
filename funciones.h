#ifndef FUNCTIONES_H
#define FUNCTIONES_H

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    if (b > 0){
        return b;
    }
    if (a < 0)
    {
        return a;
    }
    return a - b;
}

#endif