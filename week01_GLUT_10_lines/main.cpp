#include <GL/glut.h>///18行 使愈GLUT外掛
void display()///自己寫
{
    glutSolidTeapot(0.3);///自己寫
    glutSwapBuffers();///自己寫
}
int main(int argc, char *argv[])///138行 我們的main函式
{
    glutInit(&argc, argv);///140行 初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行

    glutCreateWindow("我自己寫的");///145行 建視窗
    glutDisplayFunc(display);///148行 設定要畫圖的display的函式
    glutMainLoop();///174行 主要迴圈
}
