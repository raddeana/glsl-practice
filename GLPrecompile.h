/**
 *  GLPrecompile.h
 *  @author chenxiangyu
 */
#ifndef GLPrecompile_hpp
#define GLPrecompile_hpp
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include <string>
#include <vector>
#include <map>
 
#ifdef __ANDROID__
 
#include <GLES/gl.h>
#include <GLES2/gl2.h>
#include <GLES3/gl3.h>
 
#elif defined(__IOS__)
 
#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>
 
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>
 
#include <OpenGLES/ES3/gl.h>
#include <OpenGLES/ES3/glext.h>
 
#endif
 
#endif /* GLPrecompile_hpp */
