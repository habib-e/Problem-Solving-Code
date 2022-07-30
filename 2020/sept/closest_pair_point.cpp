#include<bits/stdc++.h>
using namespace std;
struct pnt
{
    int x, y;
};
int cmp_x(const void* a, const void* b)
{
    pnt *p1 = (pnt *)a, *p2 = (pnt *)b;
    return (p1->x - p2->x);
}
int cmp_y(const void* a, const void* b)
{
    pnt *p1 = (pnt *)a, *p2 = (pnt *)b;
    return (p1->y - p2->y);
}
float distance(pnt p1, pnt p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
float small_distance(pnt P[], int n)
{
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (distance(P[i], P[j]) < min)
                min = distance(P[i], P[j]);
        }
    }
    return min;
}
float stripClosest(pnt strip[], int size, float d)
{
    float min = d;
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size && (strip[j].y - strip[i].y) < min; ++j)
        {
            if (distance(strip[i],strip[j]) < min)
                min = distance(strip[i], strip[j]);
        }
    }
    return min;
}
float closestUtil(pnt Px[], pnt Py[], int n)
{
    if (n <= 3)
        return small_distance(Px, n);
    int mid = n / 2;
    pnt midpnt = Px[mid];
    pnt Pyl[mid + 1];
    pnt Pyr[n - mid - 1];
    int li = 0, ri = 0;
    for (int i = 0; i < n; i++)
    {
        if (Py[i].x <= midpnt.x)
            Pyl[li++] = Py[i];
        else
            Pyr[ri++] = Py[i];
    }
    float dl = closestUtil(Px, Pyl, mid);
    float dr = closestUtil(Px + mid, Pyr, n-mid);
    float d = min(dl, dr);
    pnt strip[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(Py[i].x - midpnt.x) < d)
            strip[j] = Py[i], j++;
    }
    return min(d, stripClosest(strip, j, d));
}
float closest(pnt P[], int n)
{
    pnt Px[n];
    pnt Py[n];
    for (int i = 0; i < n; i++)
    {
        Px[i] = P[i];
        Py[i] = P[i];
    }
    qsort(Px, n, sizeof(pnt), cmp_x);
    qsort(Py, n, sizeof(pnt), cmp_y);
    return closestUtil(Px, Py, n);
}

/*
 * Main
 */
int main()
{
    pnt P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}};
    int n = sizeof(P) / sizeof(P[0]);
    cout << "The smallest distance is : " << closest(P, n);
    return 0;
}
