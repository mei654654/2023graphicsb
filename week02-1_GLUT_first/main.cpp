#include <GL/glut.h>  //step01-1 �ϥ� GL/glut.h
void display()
{
    glColor3f(1,1,0); ///step01-2 ��m ����
	glutSolidTeapot( 0.5 ); /// �e�X��ߪ�����

    glColor3f(0,1,0); ///step01-2 ��m ���
	glutSolidTeapot( 0.3 ); /// �e�X��ߪ�����
	glutSwapBuffers(); ///�洫��ܥX��
}
int main(int argc, char *argv[])
{ ///�o�� main() �O����F�`�� main()
    glutInit(&argc, argv);  /// �n�}�l GLUT ���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    ///�n�]�w GLUT ����ܼҦ� ...
    glutCreateWindow("week02"); ///�n�ؤ@�ӵ��r,�s "..."
    glutDisplayFunc(display); /// �n��ܪ��禡 display()
	glutMainLoop(); ///�̫�n�� glutMainLoop(); �D�n�j��d�̫᭱
}
