#include <GL/glut.h>

void dibujar() {
	glLoadIdentity();
	gluOrtho2D(0, 100, 0, 100);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
		glColor3ub(255, 255, 0);
		glVertex2d(35, 10);
		glVertex2d(65, 10);
		glVertex2d(65, 55);
		glVertex2d(35, 55);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3ub(185, 122, 87);
	glVertex2d(45, 10);
	glVertex2d(55, 10);
	glVertex2d(55, 35);
	glVertex2d(45, 35);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 0,0);
	glVertex2d(25, 55);
	glVertex2d(75, 55);
	glVertex2d(50, 90);
	glEnd();

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(600, 400);
	glutInitWindowPosition(300, 100);
	glutCreateWindow("Computación Gráfica y Visual");
	glutDisplayFunc(dibujar);
	glutMainLoop();
	return 0;
}