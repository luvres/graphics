#include <GL/glut.h>

void redesenha();

int main(int argc, char *argv[])
{
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(400,400);	/* Antes do glutCreateWIndow */
   glutInitWindowPosition(1,1);
   glutCreateWindow("Ponto");
   gluOrtho2D(0,399,399,0);     /* Apos CreateWindow */
   glutDisplayFunc(redesenha);  /* Esta funcao e necessaria, caso
				   contrario o opengl nao consegue
				   criar a janela */
   glutMainLoop();
}

void redesenha()
{
   glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_POINTS);
   glVertex2f(200.0,200.0);
   glEnd();
   glFlush();
}
