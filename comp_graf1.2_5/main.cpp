/*
            GRAFICAR LOS SEIS CUADRADOS USAN UN BUCLE FOR
*/
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>
//float x = -0.9;
//float y = 0;
void cuadrado(float, float);
void display (void)
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    cuadrado(-0.9,0);

}

void cuadrado(float x, float y)
{
    glBegin(GL_POLYGON);
        glColor3d(1,0,0);
        glVertex2d(x,y);
        glVertex2d(x+0.3,y);
        glVertex2d(x+0.3,y+0.3);
        glVertex2d(x,y+0.3);
    glEnd();
    //glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Computación Gráfica 1.2");

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
