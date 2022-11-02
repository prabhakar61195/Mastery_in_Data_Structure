#include <stdio.h>

struct Rectangle {
    int length,breadth;
};
void initilise(struct Rectangle *r,int l,int b) {
    r->length=l;
    r->breadth=b;
}
int area(struct Rectangle r) {
    return r.length*r.breadth;
}

int peri(struct Rectangle r) {
    return 2*(r.length+r.breadth);
}

int main() {

    struct Rectangle r = {0,0};
    int len,bre;
    scanf("%d %d",&len,&bre);
    initilise(&r,len,bre);
    int ar = area(r);
    int perimeter = peri(r);
    printf("area=%d\nperimeter=%d\n", ar, perimeter);
    return 0;
}

//in c++ no need to write struct keyword inside any function

