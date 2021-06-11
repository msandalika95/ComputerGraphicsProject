#include <GL/glut.h>
#include <GL/gl.h>
#include <windows.h>
#include <math.h>
#include <string.h>


static int window; //returnmenu, returnsubmenu, returnsubmenucolor1, returnsubmenucolor2, returnsubmenucolor3, returnsubmenucolor4, value = 0;
static int returnmenu;
static int returnsubmenu;
static int returnsubmenucolor1;
static int returnsubmenucolor2;
static int returnsubmenucolor3;
static int returnsubmenucolor4;
static int value = 0;

void menu(int id){
if (id == 0)
{
	glutDestroyWindow(window);
	exit(0);
}

else
{
	value = id;
}
glutPostRedisplay();
}

void createMenu(void){
returnsubmenucolor1 = glutCreateMenu(menu);
returnmenu = glutCreateMenu(menu); //function to call menu function and return value
glutAddMenuEntry("Clear", 1);
glutAddMenuEntry("Quit", 0);
glutAddMenuEntry("Red", 11);
glutAddMenuEntry("White", 12);
glutAddMenuEntry("Yellow", 13);
glutAddMenuEntry("blue", 14);

void colorMenu(int id)
{
    int r,g,b;
if (id==14)
{
r=g=0;
b=1;
glutPostRedisplay();
}
if(id ==11)
{
r=0.8;
b=g=0;
glutPostRedisplay();
}
if(id==8)
{
 g=1;
r=b=0;
glutPostRedisplay();
}
if (id==9)
{
r=b=g=0;
glutPostRedisplay();
}
if(id==10)
{
b=0;
r=g=1;
 glutPostRedisplay();
}
if(id==11)
{
b=r=g=.7;
 glutPostRedisplay();
}
}




//glutAddMenuEntry("Blue", 15);
glutAttachMenu(GLUT_RIGHT_BUTTON);
}

GLfloat xradius = 3.5,
angle_mod = 45 ;
GLfloat yradius=2;


void myInit(void)
{
glClearColor(0.5, 0.5, 0.5, 0.0);

}

const GLfloat DEG2RAD = 3.14159/180;

void drawEllipse(void)
{
GLint i;
GLfloat xradius=3.5;
GLfloat yradius=2;
glColor3f(1.0 ,0.0 ,0.5);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse2(void)
{
GLint i;
GLfloat xradius=1.6;
GLfloat yradius=1;
glColor3f(0.0 ,1.0 ,0.0);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+50)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse1(void)
{
GLint i;
GLfloat xradius=2.8;
GLfloat yradius=1.5;
glColor3f(0.0 ,150.0 ,128.0);

glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse3(void)
{
GLint i;
GLfloat xradius=1.8;
GLfloat yradius=0.6;
glColor3f(0.0 ,1.0 ,0.0);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+50)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse4(void)
{
GLint i;
GLfloat xradius=1.8;
GLfloat yradius=0.6;
glColor3f(1.0 ,1.0 ,0.0);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse5(void)
{
GLint i;
GLfloat xradius=2.8;
GLfloat yradius=1.5;
glColor3f(1.0 ,1.0 ,0.0);

glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse6(void)
{
GLint i;
GLfloat xradius=1.1;
GLfloat yradius=0.8;
glColor3f(1.0 ,1.0 ,0.0);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawEllipse7(void)
{
GLint i;
GLfloat xradius=0.9;
GLfloat yradius=0.6;
glColor3f(1.0 ,0.0 ,0.5);
glBegin(GL_POLYGON);

for (i=0; i < 360; i=i+10)
{
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}


void drawBorder(void)
{
GLint i;
GLfloat xradius=3.5;
GLfloat yradius=2;

glColor3f(225.0 ,225.0 ,225.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder1(void)
{
GLint i;
GLfloat xradius=2.8;
GLfloat yradius=1.5;

glColor3f(225.0 ,225.0 ,225.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder2(void)
{
GLint i;
GLfloat xradius=1.6;
GLfloat yradius=1;

glColor3f(0.0 ,0.0 ,0.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+50)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder3(void)
{
GLint i;
GLfloat xradius=1.8;
GLfloat yradius=0.6;

glColor3f(0.0 ,0.0 ,0.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+50)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder4(void)
{
GLint i;
GLfloat xradius=1.8;
GLfloat yradius=0.6;

glColor3f(1.0 ,1.0 ,1.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder5(void)
{
GLint i;
GLfloat xradius=2.8;
GLfloat yradius=1.5;

glColor3f(225.0 ,225.0 ,225.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder6(void)
{
GLint i;
GLfloat xradius=1.1;
GLfloat yradius=0.8;

glColor3f(225.0 ,225.0 ,225.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}

void drawBorder7(void)
{
GLint i;
GLfloat xradius=0.9;
GLfloat yradius=0.6;

glColor3f(225.0 ,225.0 ,225.0);

glBegin(GL_LINE_LOOP);

for (i=0; i < 360; i=i+10)
{
//convert degrees into radians
float degInRad = i*DEG2RAD;
glVertex2f ( cos (degInRad) *xradius, sin (degInRad) *yradius);
}

glEnd();
}


void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0 , 1.0 ,0.6);
glLineWidth(3.0);
glBegin(GL_LINES);
glVertex2f(5.0,6.0);
glVertex2f(5.0,17.0);
glEnd();

glColor3f(0.0 , 1.0 ,0.6);
glLineWidth(3.0);
glBegin(GL_LINES);
glVertex2f(12.0,13.0);
glVertex2f(12.0,17.0);
glEnd();

glColor3f(0.0 , 1.0 ,0.6);
glLineWidth(3.0);
glBegin(GL_LINES);
glVertex2f(9.0,16.0);
glVertex2f(9.0,17.0);
glEnd();

//center petal
glPushMatrix() ;
glTranslatef(5,5,0) ;
glRotatef(90,0,0,1) ;
drawEllipse() ;
drawBorder();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(5,5,0) ;
glRotatef(90,0,0,1) ;
drawEllipse5() ;
drawBorder5();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(12,10,0) ;
glRotatef(90,0,0,1) ;
drawEllipse1() ;
drawBorder1();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(12,10,0) ;
glRotatef(90,0,0,1) ;
drawEllipse4() ;
drawBorder4();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(9,15,0) ;
glRotatef(90,0,0,1) ;
drawEllipse6() ;
drawBorder6();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(9,15,0) ;
glRotatef(90,0,0,1) ;
drawEllipse7() ;
drawBorder7();
glPopMatrix() ;

//right petal
glPushMatrix() ;
glTranslatef(3.7+angle_mod/100,5.6,0);
glRotatef(20+angle_mod,0,0,1) ;
drawEllipse() ;
drawBorder();
glPopMatrix() ;


glPushMatrix() ;
glTranslatef(10.5+angle_mod/100,10.5,0);
glRotatef(20+angle_mod,0,0,1) ;
drawEllipse1() ;
drawBorder1();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(3.7+angle_mod/100,11.5,0);
glRotatef(20+angle_mod,0,0,1) ;
drawEllipse2() ;
drawBorder2();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(8.3+angle_mod/100,15,0);
glRotatef(20+angle_mod,0,0,1) ;
drawEllipse6() ;
drawBorder6();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(3.7+angle_mod/100,15.6,0);
glRotatef(20+angle_mod,0,0,1) ;
drawEllipse2() ;
drawBorder2();
glPopMatrix() ;


//left petal
glPushMatrix() ;
glTranslatef(6.4-angle_mod/100,5.6,0) ;
glRotatef(160-angle_mod,0,0,1) ;
drawEllipse() ;
drawBorder();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(6.4-angle_mod/100,12,0) ;
glRotatef(160-angle_mod,0,0,1) ;
drawEllipse2() ;
drawBorder2();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(13.5-angle_mod/100,10.5,0) ;
glRotatef(160-angle_mod,0,0,1) ;
drawEllipse1() ;
drawBorder1();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(13.4-angle_mod/100,15.0,0) ;
glRotatef(160-angle_mod,0,0,1) ;
drawEllipse3() ;
drawBorder3();
glPopMatrix() ;

glPushMatrix() ;
glTranslatef(9.6-angle_mod/100,15.1,0) ;
glRotatef(160-angle_mod,0,0,1) ;
drawEllipse6() ;
drawBorder6();
glPopMatrix() ;

glFlush();
glutPostRedisplay();


}


void idle(void)
{
xradius += 0.00001 ;
if( xradius >= 4 )
{ xradius = 4 ; }

yradius += 0.00001 ;
if( yradius >= 2 )
{ yradius = 2 ; }



angle_mod -= 0.001 ;
if( angle_mod <= 0 )
{ angle_mod = 0 ; }

glutPostRedisplay();
}




int main(int argc,char** argv)
{
int submenu;

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
glutInitWindowSize(500, 500);
glutInitWindowPosition(100, 100);
glutCreateWindow("TuliP");
createMenu();
myInit();
glutDisplayFunc(display);//CHANGED
//submenu = glutCreateMenu();
glutAddSubMenu("color", submenu);
gluOrtho2D (17.0, 0.0, 17.0, 0.0);
glutIdleFunc(idle);
glutMainLoop();
return 1;
}
