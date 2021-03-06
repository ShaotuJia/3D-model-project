#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapes3d.h"

class Rectangle3D : public Shapes3D {

private:

    GLfloat length, width, height, thickness;
    GLfloat offsetX,offsetY;

public:
    Rectangle3D(GLfloat x, GLfloat y, GLfloat z, GLfloat length, GLfloat width, GLfloat height);
    Rectangle3D(GLfloat x, GLfloat y, GLfloat z, GLfloat length, GLfloat width, GLfloat height, GLfloat thickness);
    Rectangle3D(GLfloat x, GLfloat y, GLfloat z, GLfloat length, GLfloat width, GLfloat height,GLfloat offsetX,GLfloat offsetY);


    ~Rectangle3D();
    void draw();
    void extrude();
    void offset();
   // const GLfloat *constData() const { return r_data.constData(); }
   // int count() const { return r_count; }
   // int vertexCount() const { return r_count / 6; }
    //QVector<GLfloat> r_data;

};

#endif // RECTANGLE_H
