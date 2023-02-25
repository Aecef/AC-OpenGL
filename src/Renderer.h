#pragma once

#include <GL/glew.h>

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
