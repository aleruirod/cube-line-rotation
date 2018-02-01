#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "glew-2.1.0/include/GL/glew.h"
#include "glslprogram.h"
#include "glm/glm.hpp"
using glm::mat4;

class SceneBasic : public Scene
{
private:
    int width, height;
    GLuint vboHandles[2];
    GLuint vaoHandle;
    float angle;
    mat4 rotationMatrix;
    GLSLProgram prog;

    mat4 model;
    mat4 view;
    mat4 projection;

    void readData(const char* fname);
    void CreateVBO();

    float positionData[108];
    float colorData[108];

    float arr[6];
public:
    SceneBasic();
    void setMatrices();

    void initScene();
    void render();
    void resize(int, int);
    void update( float t );

    void updateView(float eX, float eY, float eZ, float directX, float directY, float directZ);

    void rotateModel(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi);

    void resetModel();




    void printActiveUniforms(GLuint programHandle);
    void printActiveAttribs(GLuint programHandle);
};

#endif // SCENEBASIC_H
