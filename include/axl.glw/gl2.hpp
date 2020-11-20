#pragma once
#include "lib.hpp"
#include "gl.hpp"
#include "glext.hpp"

namespace axl {
namespace glw {
namespace gl2 {
using namespace axl::glw::gl;
using namespace axl::glw::glext;

// GL_VERSION_2_0
constexpr GLenum GL_BLEND_EQUATION_RGB = GL_BLEND_EQUATION;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
constexpr GLenum GL_CURRENT_VERTEX_ATTRIB = 0x8626;
constexpr GLenum GL_VERTEX_PROGRAM_POINT_SIZE = 0x8642;
constexpr GLenum GL_VERTEX_PROGRAM_TWO_SIDE = 0x8643;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
constexpr GLenum GL_STENCIL_BACK_FUNC = 0x8800;
constexpr GLenum GL_STENCIL_BACK_FAIL = 0x8801;
constexpr GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
constexpr GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
constexpr GLenum GL_MAX_DRAW_BUFFERS = 0x8824;
constexpr GLenum GL_DRAW_BUFFER0 = 0x8825;
constexpr GLenum GL_DRAW_BUFFER1 = 0x8826;
constexpr GLenum GL_DRAW_BUFFER2 = 0x8827;
constexpr GLenum GL_DRAW_BUFFER3 = 0x8828;
constexpr GLenum GL_DRAW_BUFFER4 = 0x8829;
constexpr GLenum GL_DRAW_BUFFER5 = 0x882A;
constexpr GLenum GL_DRAW_BUFFER6 = 0x882B;
constexpr GLenum GL_DRAW_BUFFER7 = 0x882C;
constexpr GLenum GL_DRAW_BUFFER8 = 0x882D;
constexpr GLenum GL_DRAW_BUFFER9 = 0x882E;
constexpr GLenum GL_DRAW_BUFFER10 = 0x882F;
constexpr GLenum GL_DRAW_BUFFER11 = 0x8830;
constexpr GLenum GL_DRAW_BUFFER12 = 0x8831;
constexpr GLenum GL_DRAW_BUFFER13 = 0x8832;
constexpr GLenum GL_DRAW_BUFFER14 = 0x8833;
constexpr GLenum GL_DRAW_BUFFER15 = 0x8834;
constexpr GLenum GL_BLEND_EQUATION_ALPHA = 0x883D;
constexpr GLenum GL_POINT_SPRITE = 0x8861;
constexpr GLenum GL_COORD_REPLACE = 0x8862;
constexpr GLenum GL_MAX_VERTEX_ATTRIBS = 0x8869;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
constexpr GLenum GL_MAX_TEXTURE_COORDS = 0x8871;
constexpr GLenum GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872;
constexpr GLenum GL_FRAGMENT_SHADER = 0x8B30;
constexpr GLenum GL_VERTEX_SHADER = 0x8B31;
constexpr GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = 0x8B49;
constexpr GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS = 0x8B4A;
constexpr GLenum GL_MAX_VARYING_FLOATS = 0x8B4B;
constexpr GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
constexpr GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
constexpr GLenum GL_SHADER_TYPE = 0x8B4F;
constexpr GLenum GL_FLOAT_VEC2 = 0x8B50;
constexpr GLenum GL_FLOAT_VEC3 = 0x8B51;
constexpr GLenum GL_FLOAT_VEC4 = 0x8B52;
constexpr GLenum GL_INT_VEC2 = 0x8B53;
constexpr GLenum GL_INT_VEC3 = 0x8B54;
constexpr GLenum GL_INT_VEC4 = 0x8B55;
constexpr GLenum GL_BOOL = 0x8B56;
constexpr GLenum GL_BOOL_VEC2 = 0x8B57;
constexpr GLenum GL_BOOL_VEC3 = 0x8B58;
constexpr GLenum GL_BOOL_VEC4 = 0x8B59;
constexpr GLenum GL_FLOAT_MAT2 = 0x8B5A;
constexpr GLenum GL_FLOAT_MAT3 = 0x8B5B;
constexpr GLenum GL_FLOAT_MAT4 = 0x8B5C;
constexpr GLenum GL_SAMPLER_1D = 0x8B5D;
constexpr GLenum GL_SAMPLER_2D = 0x8B5E;
constexpr GLenum GL_SAMPLER_3D = 0x8B5F;
constexpr GLenum GL_SAMPLER_CUBE = 0x8B60;
constexpr GLenum GL_SAMPLER_1D_SHADOW = 0x8B61;
constexpr GLenum GL_SAMPLER_2D_SHADOW = 0x8B62;
constexpr GLenum GL_DELETE_STATUS = 0x8B80;
constexpr GLenum GL_COMPILE_STATUS = 0x8B81;
constexpr GLenum GL_LINK_STATUS = 0x8B82;
constexpr GLenum GL_VALIDATE_STATUS = 0x8B83;
constexpr GLenum GL_INFO_LOG_LENGTH = 0x8B84;
constexpr GLenum GL_ATTACHED_SHADERS = 0x8B85;
constexpr GLenum GL_ACTIVE_UNIFORMS = 0x8B86;
constexpr GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
constexpr GLenum GL_SHADER_SOURCE_LENGTH = 0x8B88;
constexpr GLenum GL_ACTIVE_ATTRIBUTES = 0x8B89;
constexpr GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
constexpr GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = 0x8B8B;
constexpr GLenum GL_SHADING_LANGUAGE_VERSION = 0x8B8C;
constexpr GLenum GL_CURRENT_PROGRAM = 0x8B8D;
constexpr GLenum GL_POINT_SPRITE_COORD_ORIGIN = 0x8CA0;
constexpr GLenum GL_LOWER_LEFT = 0x8CA1;
constexpr GLenum GL_UPPER_LEFT = 0x8CA2;
constexpr GLenum GL_STENCIL_BACK_REF = 0x8CA3;
constexpr GLenum GL_STENCIL_BACK_VALUE_MASK = 0x8CA4;
constexpr GLenum GL_STENCIL_BACK_WRITEMASK = 0x8CA5;

typedef void (APIENTRY * PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRY * PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLbyte* name);
typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY * PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef GLuint (APIENTRY * PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (APIENTRY * PFNGLCREATESHADERPROC) (GLenum type);
typedef void (APIENTRY * PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY * PFNGLDELETESHADERPROC) (GLuint shader);
typedef void (APIENTRY * PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRY * PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRY * PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum* bufs);
typedef void (APIENTRY * PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRY * PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLbyte* name);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLbyte* name);
typedef void (APIENTRY * PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
typedef GLint (APIENTRY * PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLbyte* name);
typedef void (APIENTRY * PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei* length, GLbyte* infoLog);
typedef void (APIENTRY * PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint* param);
typedef void (APIENTRY * PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei* length, GLbyte* infoLog);
typedef void (APIENTRY * PFNGLGETSHADERSOURCEPROC) (GLuint obj, GLsizei maxLength, GLsizei* length, GLbyte* source);
typedef void (APIENTRY * PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint* param);
typedef GLint (APIENTRY * PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLbyte* name);
typedef void (APIENTRY * PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat* params);
typedef void (APIENTRY * PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void** pointer);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBDVPROC) (GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean (APIENTRY * PFNGLISSHADERPROC) (GLuint shader);
typedef void (APIENTRY * PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (APIENTRY * PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLbyte *const* string, const GLint* length);
typedef void (APIENTRY * PFNGLSTENCILFUNCSEPARATEPROC) (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
typedef void (APIENTRY * PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (APIENTRY * PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (APIENTRY * PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (APIENTRY * PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (APIENTRY * PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRY * PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void (APIENTRY * PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRY * PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRY * PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRY * PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRY * PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY * PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DPROC) (GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DVPROC) (GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SPROC) (GLuint index, GLshort x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SVPROC) (GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DPROC) (GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DVPROC) (GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SPROC) (GLuint index, GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SVPROC) (GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DVPROC) (GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SVPROC) (GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NBVPROC) (GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NIVPROC) (GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NSVPROC) (GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4BVPROC) (GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DVPROC) (GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4IVPROC) (GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SVPROC) (GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UBVPROC) (GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UIVPROC) (GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4USVPROC) (GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);

AXLGLWAPI PFNGLATTACHSHADERPROC glAttachShader;
AXLGLWAPI PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
AXLGLWAPI PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
AXLGLWAPI PFNGLCOMPILESHADERPROC glCompileShader;
AXLGLWAPI PFNGLCREATEPROGRAMPROC glCreateProgram;
AXLGLWAPI PFNGLCREATESHADERPROC glCreateShader;
AXLGLWAPI PFNGLDELETEPROGRAMPROC glDeleteProgram;
AXLGLWAPI PFNGLDELETESHADERPROC glDeleteShader;
AXLGLWAPI PFNGLDETACHSHADERPROC glDetachShader;
AXLGLWAPI PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
AXLGLWAPI PFNGLDRAWBUFFERSPROC glDrawBuffers;
AXLGLWAPI PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
AXLGLWAPI PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
AXLGLWAPI PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
AXLGLWAPI PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
AXLGLWAPI PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
AXLGLWAPI PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
AXLGLWAPI PFNGLGETPROGRAMIVPROC glGetProgramiv;
AXLGLWAPI PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
AXLGLWAPI PFNGLGETSHADERSOURCEPROC glGetShaderSource;
AXLGLWAPI PFNGLGETSHADERIVPROC glGetShaderiv;
AXLGLWAPI PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
AXLGLWAPI PFNGLGETUNIFORMFVPROC glGetUniformfv;
AXLGLWAPI PFNGLGETUNIFORMIVPROC glGetUniformiv;
AXLGLWAPI PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
AXLGLWAPI PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
AXLGLWAPI PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
AXLGLWAPI PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
AXLGLWAPI PFNGLISPROGRAMPROC glIsProgram;
AXLGLWAPI PFNGLISSHADERPROC glIsShader;
AXLGLWAPI PFNGLLINKPROGRAMPROC glLinkProgram;
AXLGLWAPI PFNGLSHADERSOURCEPROC glShaderSource;
AXLGLWAPI PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
AXLGLWAPI PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
AXLGLWAPI PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
AXLGLWAPI PFNGLUNIFORM1FPROC glUniform1f;
AXLGLWAPI PFNGLUNIFORM1FVPROC glUniform1fv;
AXLGLWAPI PFNGLUNIFORM1IPROC glUniform1i;
AXLGLWAPI PFNGLUNIFORM1IVPROC glUniform1iv;
AXLGLWAPI PFNGLUNIFORM2FPROC glUniform2f;
AXLGLWAPI PFNGLUNIFORM2FVPROC glUniform2fv;
AXLGLWAPI PFNGLUNIFORM2IPROC glUniform2i;
AXLGLWAPI PFNGLUNIFORM2IVPROC glUniform2iv;
AXLGLWAPI PFNGLUNIFORM3FPROC glUniform3f;
AXLGLWAPI PFNGLUNIFORM3FVPROC glUniform3fv;
AXLGLWAPI PFNGLUNIFORM3IPROC glUniform3i;
AXLGLWAPI PFNGLUNIFORM3IVPROC glUniform3iv;
AXLGLWAPI PFNGLUNIFORM4FPROC glUniform4f;
AXLGLWAPI PFNGLUNIFORM4FVPROC glUniform4fv;
AXLGLWAPI PFNGLUNIFORM4IPROC glUniform4i;
AXLGLWAPI PFNGLUNIFORM4IVPROC glUniform4iv;
AXLGLWAPI PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
AXLGLWAPI PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
AXLGLWAPI PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
AXLGLWAPI PFNGLUSEPROGRAMPROC glUseProgram;
AXLGLWAPI PFNGLVALIDATEPROGRAMPROC glValidateProgram;
AXLGLWAPI PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
AXLGLWAPI PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
AXLGLWAPI PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
AXLGLWAPI PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
AXLGLWAPI PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
AXLGLWAPI PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
AXLGLWAPI PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
AXLGLWAPI PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
AXLGLWAPI PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
AXLGLWAPI PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
AXLGLWAPI PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
AXLGLWAPI PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
AXLGLWAPI PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
AXLGLWAPI PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
AXLGLWAPI PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
AXLGLWAPI PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
AXLGLWAPI PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
AXLGLWAPI PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
AXLGLWAPI PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
AXLGLWAPI PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
AXLGLWAPI PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
AXLGLWAPI PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
AXLGLWAPI PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
AXLGLWAPI PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
AXLGLWAPI PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
AXLGLWAPI PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
AXLGLWAPI PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
AXLGLWAPI PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
AXLGLWAPI PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
AXLGLWAPI PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
AXLGLWAPI PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
AXLGLWAPI PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
AXLGLWAPI PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
AXLGLWAPI PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
AXLGLWAPI PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
AXLGLWAPI PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
AXLGLWAPI PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
AXLGLWAPI bool V_2_0;

// GL_VERSION_2_1 
constexpr GLenum GL_CURRENT_RASTER_SECONDARY_COLOR = 0x845F;
constexpr GLenum GL_PIXEL_PACK_BUFFER = 0x88EB;
constexpr GLenum GL_PIXEL_UNPACK_BUFFER = 0x88EC;
constexpr GLenum GL_PIXEL_PACK_BUFFER_BINDING = 0x88ED;
constexpr GLenum GL_PIXEL_UNPACK_BUFFER_BINDING = 0x88EF;
constexpr GLenum GL_FLOAT_MAT2x3 = 0x8B65;
constexpr GLenum GL_FLOAT_MAT2x4 = 0x8B66;
constexpr GLenum GL_FLOAT_MAT3x2 = 0x8B67;
constexpr GLenum GL_FLOAT_MAT3x4 = 0x8B68;
constexpr GLenum GL_FLOAT_MAT4x2 = 0x8B69;
constexpr GLenum GL_FLOAT_MAT4x3 = 0x8B6A;
constexpr GLenum GL_SRGB = 0x8C40;
constexpr GLenum GL_SRGB8 = 0x8C41;
constexpr GLenum GL_SRGB_ALPHA = 0x8C42;
constexpr GLenum GL_SRGB8_ALPHA8 = 0x8C43;
constexpr GLenum GL_SLUMINANCE_ALPHA = 0x8C44;
constexpr GLenum GL_SLUMINANCE8_ALPHA8 = 0x8C45;
constexpr GLenum GL_SLUMINANCE = 0x8C46;
constexpr GLenum GL_SLUMINANCE8 = 0x8C47;
constexpr GLenum GL_COMPRESSED_SRGB = 0x8C48;
constexpr GLenum GL_COMPRESSED_SRGB_ALPHA = 0x8C49;
constexpr GLenum GL_COMPRESSED_SLUMINANCE = 0x8C4A;
constexpr GLenum GL_COMPRESSED_SLUMINANCE_ALPHA = 0x8C4B;

typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

AXLGLWAPI PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
AXLGLWAPI PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
AXLGLWAPI PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
AXLGLWAPI PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
AXLGLWAPI PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
AXLGLWAPI PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;
AXLGLWAPI bool V_2_1;

} // axl.glw.gl2
} // axl.glw
} // axl