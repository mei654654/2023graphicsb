#include <GL/glut.h>
float angle = 0;///�����ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glTranslatef(0.5, 0, 0);///����k�䪺
        glRotated(angle, 0, 1, 0);///���त��
        glColor3f(0, 0, 1);///�Ŧ⪺
        glutSolidTeapot( 0.3 );///����
    glPopMatrix();///�٭�x�}

    glPushMatrix();///�ƥ��x�}
        glRotated(angle, 0, 1, 0);///���त��
        glTranslatef(0.5, 0, 0);///����k�䪺
        glColor3f(1, 1, 0);///���⪺
        glTranslatef(0, 0.5, 0);
        glutSolidTeapot( 0.3 );///����
    glPopMatrix();///�٭�x�}

    glutSwapBuffers();
	angle++; ///����++
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w GLUT ����ܼҦ�
	glutCreateWindow("week04");

	glutDisplayFunc(display); ///��ܪ��禡 display()
	glutIdleFunc(display);
	glutMainLoop(); ///�̫�n�� glutMainLoop(); �D�n�j��d�̫᭱
}
