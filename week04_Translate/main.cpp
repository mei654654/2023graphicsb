#include <GL/glut.h>
float angle = 0;///�����ܼ�
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}

        glRotated(angle, 0, 1, 0);
        glutSolidTeapot( 0.3 );
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
