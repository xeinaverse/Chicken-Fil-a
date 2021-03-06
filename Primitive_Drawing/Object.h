#pragma once
#include <gl/glew.h>
#include "shader.hpp"
#include "texture.h"
#include<GL\glfw3.h>
#include<stdio.h>
#include<vector>

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>

using namespace std;
class Object
{
	GLuint vertexArrayID;
	GLuint vertexBufferID;
	GLuint mvpMatrixID;
	
	glm::mat4 ProjectionMatrix;
	glm::mat4 ViewMatrix;
	glm::mat4 ModelMatrix;
	glm::mat4 MVP_M;
	
	Texture * texture;
	
	float x, y, z;
	float speed;
	vector <GLfloat> verts;


public:
	Object();
	~Object();
	virtual void draw()=0;
	virtual void update() = 0;
	virtual void cleanup() = 0;
};


