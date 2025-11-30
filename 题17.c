#include <stdio.h>


void drawShape(int length, char edgeChar, int shapeType);

int main() {
    int length, shapeType;
    char edgeChar;

    printf("请输入垂直边长度、边缘字符、图形类别(1-长方形, 2-三角形): ");
    scanf_s("%d %c %d", &length, &edgeChar,1, &shapeType);


    drawShape(length, edgeChar, shapeType);

    return 0;
}


void drawShape(int length, char edgeChar, int shapeType) {
    int i, j;

    if (shapeType == 1) {
        
        for (i = 1; i <= length; i++) {
            for (j = 1; j <= length * 2; j++) {  
                if (i == 1 || i == length || j == 1 || j == length * 2) {
                    printf("%c", edgeChar);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else if (shapeType == 2) {
       
        for (i = 1; i <= length; i++) {
            for (j = 1; j <= i; j++) {
                printf("%c", edgeChar);
            }
            printf("\n");
        }
    }
}