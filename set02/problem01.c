#include <stdio.h>
    void input(float *base,float *height)
    {
        printf("ENTER THE BASE OF THE TRIANGLE(in cms)");
        scanf("%f",base);
        printf("ENTER THE HEIGHT OF THE TRIANGLE(in cms)");
        scanf("%f",height);
    }
    void find_area(float base,float height,float *area)
    {
        *area=0.5*base*height;
    }
    void output(float base,float height,float area)
    {
        printf("THE AREA OF THE TRIANGLE WHOSE BASE IS %f AND WHOSE HEIGHT IS %f IS %f ",base,height,area);
    }
    int main()
    {
        float base,height,area;
        input(&base,&height);
        find_area(base,height,&area);
        output(base,height,area);
        return 0;
    }

    