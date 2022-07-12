#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(2.0);

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);

glVertex2f(-21.0f,-16.0f);
glVertex2f(21.0f,-16.0f);
glVertex2f(26.0f,-6.0f);
glVertex2f(26.0f,6.0f);
glVertex2f(21.0f,16.0f);
glVertex2f(-21.0f,16.0f);
glVertex2f(-26.0f,6.0f);
glVertex2f(-26.0f,-6.0f);
glEnd();
// Draw a Red 1x1 Square centered at origin
glColor3f(1.0f,1.0f,0.0f);
glBegin(GL_POLYGON);

glVertex2f(-20.0f,-15.0f);
glVertex2f(20.0f,-15.0f);
glVertex2f(25.0f,-5.0f);
glVertex2f(25.0f,5.0f);
glVertex2f(20.0f,15.0f);
glVertex2f(-20.0f,15.0f);
glVertex2f(-25.0f,5.0f);
glVertex2f(-25.0f,-5.0f);
glEnd();


//1st right
glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(0.0f,0.0f);
glVertex2f(2.0f,0.0f);
glVertex2f(2.0f,7.0f);
glVertex2f(0.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(2.0f,0.0f);
glVertex2f(3.0f,0.0f);
glVertex2f(3.0f,10.0f);
glVertex2f(2.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(3.0f,0.0f);
glVertex2f(5.0f,0.0f);
glVertex2f(5.0f,3.0f);
glVertex2f(3.0f,4.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(5.0f,0.0f);
glVertex2f(12.0f,0.0f);
glVertex2f(12.0f,3.0f);
glVertex2f(5.0f,3.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(5.0f,3.0f);
glVertex2f(7.0f,3.0f);
glVertex2f(7.0f,5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(7.0f,3.0f);
glVertex2f(12.0f,3.0f);
glVertex2f(10.0f,7.0f);
glVertex2f(7.0f,5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(7.0f,5.0f);
glVertex2f(10.0f,7.0f);
glVertex2f(9.0f,7.0f);
glVertex2f(8.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(8.0f,7.0f);
glVertex2f(10.0f,7.0f);
glVertex2f(5.0f,13.0f);
glEnd();

//2nd left

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(0.0f,0.0f);
glVertex2f(-2.0f,0.0f);
glVertex2f(-2.0f,7.0f);
glVertex2f(0.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-2.0f,0.0f);
glVertex2f(-3.0f,0.0f);
glVertex2f(-3.0f,10.0f);
glVertex2f(-2.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-3.0f,0.0f);
glVertex2f(-5.0f,0.0f);
glVertex2f(-5.0f,3.0f);
glVertex2f(-3.0f,4.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-5.0f,0.0f);
glVertex2f(-12.0f,0.0f);
glVertex2f(-12.0f,3.0f);
glVertex2f(-5.0f,3.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(-5.0f,3.0f);
glVertex2f(-7.0f,3.0f);
glVertex2f(-7.0f,5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-7.0f,3.0f);
glVertex2f(-12.0f,3.0f);
glVertex2f(-10.0f,7.0f);
glVertex2f(-7.0f,5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-7.0f,5.0f);
glVertex2f(-10.0f,7.0f);
glVertex2f(-9.0f,7.0f);
glVertex2f(-8.0f,7.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(-8.0f,7.0f);
glVertex2f(-10.0f,7.0f);
glVertex2f(-5.0f,13.0f);
glEnd();

//4th Right

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,-5.0f);
glVertex2f(3.0f,-5.0f);
glVertex2f(3.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(0.0f,5.0f);
glVertex2f(0.0f,-12.0f);
glVertex2f(3.0f,-5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(3.0f,0.0f);
glVertex2f(3.0f,-5.0f);
glVertex2f(5.0f,-4.0f);
glVertex2f(5.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(5.0f,0.0f);
glVertex2f(5.0f,-4.0f);
glVertex2f(8.0f,-7.0f);
glVertex2f(8.0f,0.0f);
glEnd();



glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(8.0f,0.0f);
glVertex2f(8.0f,-2.0f);
glVertex2f(12.0f,-2.0f);
glVertex2f(12.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(8.0f,-2.0f);
glVertex2f(8.0f,-5.0f);
glVertex2f(11.0f,-7.0f);
glVertex2f(12.0f,-2.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(8.0f,-5.0f);
glVertex2f(8.0f,-12.0f);
glVertex2f(11.0f,-7.0f);
glEnd();

//3rd left

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-0.0f,0.0f);
glVertex2f(-0.0f,-5.0f);
glVertex2f(-3.0f,-5.0f);
glVertex2f(-3.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(-0.0f,5.0f);
glVertex2f(-0.0f,-12.0f);
glVertex2f(-3.0f,-5.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-3.0f,0.0f);
glVertex2f(-3.0f,-5.0f);
glVertex2f(-5.0f,-4.0f);
glVertex2f(-5.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-5.0f,0.0f);
glVertex2f(-5.0f,-4.0f);
glVertex2f(-8.0f,-7.0f);
glVertex2f(-8.0f,0.0f);
glEnd();



glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-8.0f,0.0f);
glVertex2f(-8.0f,-2.0f);
glVertex2f(-12.0f,-2.0f);
glVertex2f(-12.0f,0.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_POLYGON);
glVertex2f(-8.0f,-2.0f);
glVertex2f(-8.0f,-5.0f);
glVertex2f(-11.0f,-7.0f);
glVertex2f(-12.0f,-2.0f);
glEnd();

glColor3f(0.0f,0.0f,0.0f);
glBegin(GL_TRIANGLES);
glVertex2f(-8.0f,-5.0f);
glVertex2f(-8.0f,-12.0f);
glVertex2f(-11.0f,-7.0f);
glEnd();

glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Draw Square"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-40.0,40.0,-40.0,40.0);
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

