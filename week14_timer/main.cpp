#include <GL/glut.h>
float angle = 0;
void timer(int t)
{
    glutTimerFunc(500, timer, t+1);
    angle += 90;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///�ƥ��x�}
        glRotated(angle, 0, 0, 1);
        glutSolidTeapot( 0.3 );
    glPopMatrix();///�٭�x�}
	glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///�]�w GLUT ����ܼҦ�
	glutCreateWindow("week14");

	glutTimerFunc(3000, timer, 0);
	glutDisplayFunc(display); ///��ܪ��禡 display()

	glutMainLoop(); ///�̫�n�� glutMainLoop(); �D�n�j��d�̫᭱
}
