///week03-3_translate_mouse
#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0, Z=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    /*glPushMatrix();///�ƥ��x�}
        glTranslatef( X, Y, Z );
        glutSolidTeapot( 0.3 ); ///�o�@��i�H�e�X��ߪ�����
	glPopMatrix();///�٭�x�}*/
    glBegin(GL_POLYGON);


    glEnd();
	glutSwapBuffers(); ///�洫��ܥX��
}
void mouse( int button, int state, int x, int y )
{
    X = (x-150)/150.0;
    Y = -(y-150)/150.0;
    if(state==GLUT_DOWN)printf("   glVertex2f(%.2f, %.2f);\n", X, Y);
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w GLUT ����ܼҦ�
	glutCreateWindow("week03"); ///�ؤ@�ӵ��r,�s "week03"

	glutMouseFunc(mouse);
	glutDisplayFunc(display); ///��ܪ��禡 display()
	glutMainLoop(); ///�̫�n�� glutMainLoop(); �D�n�j��d�̫᭱
}
