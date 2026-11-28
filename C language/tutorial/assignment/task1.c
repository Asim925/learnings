#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Dot
{
    int type;
    float x;
    float y;
};

struct Line
{
    int type;
    float x1;
    float y1;
    float x2;
    float y2;
};

struct Triangle
{
    int type;
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
};

struct Square
{
    int type;
    float x;
    float y;
    float side;
};

struct Rectangle
{
    int type;
    float x;
    float y;
    float width;
    float height;
};

float calculateProperty(void *shapePtr, int propertyType)
{
    int shapeType = *(int *)shapePtr;

    switch (shapeType)
    {
    case 0:
    {
        struct Dot *d = (struct Dot *)shapePtr;
        if (propertyType == 1)
        {
            return 0.0;
        }
        else if (propertyType == 2)
        {
            return 0.0;
        }
        else if (propertyType == 3)
        {
            return sqrt(d->x * d->x + d->y * d->y);
        }
        break;
    }

    case 1:
    {
        struct Line *l = (struct Line *)shapePtr;
        if (propertyType == 1)
        {
            return 0.0;
        }
        else if (propertyType == 2)
        {
            float dx = l->x2 - l->x1;
            float dy = l->y2 - l->y1;
            return sqrt(dx * dx + dy * dy);
        }
        else if (propertyType == 3)
        {
            return sqrt(l->x1 * l->x1 + l->y1 * l->y1);
        }
        break;
    }

    case 2:
    {
        struct Triangle *t = (struct Triangle *)shapePtr;
        if (propertyType == 1)
        {
            float area = 0.5 * fabs(t->x1 * (t->y2 - t->y3) + t->x2 * (t->y3 - t->y1) + t->x3 * (t->y1 - t->y2));
            return area;
        }
        else if (propertyType == 2)
        {
            float s1 = sqrt(pow(t->x2 - t->x1, 2) + pow(t->y2 - t->y1, 2));
            float s2 = sqrt(pow(t->x3 - t->x2, 2) + pow(t->y3 - t->y2, 2));
            float s3 = sqrt(pow(t->x1 - t->x3, 2) + pow(t->y1 - t->y3, 2));
            return s1 + s2 + s3;
        }
        else if (propertyType == 3)
        {
            return sqrt(t->x1 * t->x1 + t->y1 * t->y1);
        }
        break;
    }

    case 3:
    {
        struct Square *s = (struct Square *)shapePtr;
        if (propertyType == 1)
        {
            return s->side * s->side;
        }
        else if (propertyType == 2)
        {
            return 4 * s->side;
        }
        else if (propertyType == 3)
        {
            return sqrt(s->x * s->x + s->y * s->y);
        }
        break;
    }

    case 4:
    {
        struct Rectangle *r = (struct Rectangle *)shapePtr;
        if (propertyType == 1)
        {
            return r->width * r->height;
        }
        else if (propertyType == 2)
        {
            return 2 * (r->width + r->height);
        }
        else if (propertyType == 3)
        {
            return sqrt(r->x * r->x + r->y * r->y);
        }
        break;
    }
    }

    return 0.0;
}

int main()
{
    void *shapes[5];

    struct Dot *d = (struct Dot *)malloc(sizeof(struct Dot));
    d->type = 0;
    d->x = 3.0;
    d->y = 4.0;
    shapes[0] = d;

    struct Line *l = (struct Line *)malloc(sizeof(struct Line));
    l->type = 1;
    l->x1 = 0.0;
    l->y1 = 0.0;
    l->x2 = 3.0;
    l->y2 = 4.0;
    shapes[1] = l;

    struct Triangle *t = (struct Triangle *)malloc(sizeof(struct Triangle));
    t->type = 2;
    t->x1 = 0.0;
    t->y1 = 0.0;
    t->x2 = 4.0;
    t->y2 = 0.0;
    t->x3 = 0.0;
    t->y3 = 3.0;
    shapes[2] = t;

    struct Square *s = (struct Square *)malloc(sizeof(struct Square));
    s->type = 3;
    s->x = 2.0;
    s->y = 2.0;
    s->side = 5.0;
    shapes[3] = s;

    struct Rectangle *r = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    r->type = 4;
    r->x = 1.0;
    r->y = 1.0;
    r->width = 4.0;
    r->height = 6.0;
    shapes[4] = r;

    for (int i = 0; i < 5; i++)
    {
        printf("Shape %d:\n", i + 1);
        printf("Area: %.2f\n", calculateProperty(shapes[i], 1));
        printf("Perimeter/Length: %.2f\n", calculateProperty(shapes[i], 2));
        printf("Distance from Origin: %.2f\n\n", calculateProperty(shapes[i], 3));
    }

    for (int i = 0; i < 5; i++)
    {
        free(shapes[i]);
    }

    return 0;
}