/// week03-1_translate
#include <GL/glut.h>
void display()
{
    glPushMatrix();///�ƥ��x�}
    glTranslatef(0.5, 0.5, 0);
	glutSolidTeapot( 0.3 ); ///�o�@��i�H�e�X��ߪ�����
	glPopMatrix();///�٭�x�}

	glutSwapBuffers(); ///�洫��ܥX��
}
int main(int argc, char *argv[])
{
    	glutInit(&argc, argv);
    	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///�]�w GLUT ����ܼҦ�
	glutCreateWindow("GLUT Shapes"); ///�ؤ@�ӵ��r,�s "GLUT Shapes"
	glutDisplayFunc(display); ///��ܪ��禡 display()
	glutMainLoop(); ///�̫�n�� glutMainLoop(); �D�n�j��d�̫᭱
}
