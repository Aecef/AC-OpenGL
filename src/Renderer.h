#pragma once

#include <GL/glew.h>

#include "IndexBuffer.h"
#include "VertexArray.h"
#include "Shader.h"

#define ASSERT(x) if (!(x)) __debugbreak();
#ifdef DEBUG
#define GLCALL(x) GLClearError();\
        x;\
        ASSERT(GLLogCall(#x, __FILE__, __LINE__));
#else
    #define GLCALL(x) x
#endif // DEBUG


void GLClearError();

bool GLLogCall(const char* function, const char* file, int line);

class Renderer
{

public:
    void Draw(const VertexArray& va, const IndexBuffer& ib, const Shader& shader );
    void Clear() const;
private:
};
