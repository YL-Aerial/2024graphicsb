#include <GL/glut.h>///18�� �ϷUGLUT�~��
void display()///�ۤv�g
{
    glutSolidTeapot(0.3);///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}
int main(int argc, char *argv[])///138�� �ڭ̪�main�禡
{
    glutInit(&argc, argv);///140�� ��l��GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��

    glutCreateWindow("�ڦۤv�g��");///145�� �ص���
    glutDisplayFunc(display);///148�� �]�w�n�e�Ϫ�display���禡
    glutMainLoop();///174�� �D�n�j��
}
