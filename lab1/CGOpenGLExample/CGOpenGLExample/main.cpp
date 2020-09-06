#include <GL\freeglut.h>

float WinWid = 400.0;
float WinHeight = 400.0;
void draw() //zurah funct
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
	glVertex2f(100, 100); // цэгийн координат(2 хэмжээст)
	glEnd();
	glFlush(); //Only for GLUT_SINGLE
}
void initialize()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-WinWid / 2, WinWid / 2, -WinHeight / 2, WinHeight / 2, -200.0, 200.0);
}
int main(int argc, char** argv)
{
	//initialization
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //static window, color
	glutInitWindowSize(WinWid, WinHeight); //setWindowSize
	glutInitWindowPosition(50, 100);
	glutCreateWindow("DrawWindow");
	//registration
	glutDisplayFunc(draw); //zurah funct(butsaah utga ni void bn)
	initialize(); // void torliin funct
	glutMainLoop(); //programiig haatal delgetsend zursan heveer nm
	return 0;
}