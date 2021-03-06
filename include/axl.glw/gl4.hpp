#pragma once
#include "lib.hpp"
#include "gl.hpp"

namespace axl {
namespace glw {
namespace gl4 {
using namespace axl::glw::gl;

// GL_VERSION_4_0
AXLGLWCONSTMODIFIER GLenum GL_SAMPLE_SHADING = 0x8C36;
AXLGLWCONSTMODIFIER GLenum GL_MIN_SAMPLE_SHADING_VALUE = 0x8C37;
AXLGLWCONSTMODIFIER GLenum GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5E;
AXLGLWCONSTMODIFIER GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = 0x8E5F;
AXLGLWCONSTMODIFIER GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS = 0x8F9F;
AXLGLWCONSTMODIFIER GLenum GL_TEXTURE_CUBE_MAP_ARRAY = 0x9009;
AXLGLWCONSTMODIFIER GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = 0x900A;
AXLGLWCONSTMODIFIER GLenum GL_PROXY_TEXTURE_CUBE_MAP_ARRAY = 0x900B;
AXLGLWCONSTMODIFIER GLenum GL_SAMPLER_CUBE_MAP_ARRAY = 0x900C;
AXLGLWCONSTMODIFIER GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = 0x900D;
AXLGLWCONSTMODIFIER GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900E;
AXLGLWCONSTMODIFIER GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = 0x900F;

typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY * PFNGLBLENDEQUATIONIPROC) (GLuint buf, GLenum mode);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (APIENTRY * PFNGLBLENDFUNCIPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRY * PFNGLMINSAMPLESHADINGPROC) (GLclampf value);

AXLGLWAPI PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
AXLGLWAPI PFNGLBLENDEQUATIONIPROC glBlendEquationi;
AXLGLWAPI PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
AXLGLWAPI PFNGLBLENDFUNCIPROC glBlendFunci;
AXLGLWAPI PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
AXLGLWAPI bool V_4_0;

// GL_VERSION_4_1
AXLGLWAPI bool V_4_1;

// GL_VERSION_4_2
AXLGLWCONSTMODIFIER GLenum GL_TRANSFORM_FEEDBACK_PAUSED = 0x8E23;
AXLGLWCONSTMODIFIER GLenum GL_TRANSFORM_FEEDBACK_ACTIVE = 0x8E24;
AXLGLWCONSTMODIFIER GLenum GL_COMPRESSED_RGBA_BPTC_UNORM = 0x8E8C;
AXLGLWCONSTMODIFIER GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM = 0x8E8D;
AXLGLWCONSTMODIFIER GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT = 0x8E8E;
AXLGLWCONSTMODIFIER GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT = 0x8E8F;
AXLGLWCONSTMODIFIER GLenum GL_COPY_READ_BUFFER_BINDING = 0x8F36;
AXLGLWCONSTMODIFIER GLenum GL_COPY_WRITE_BUFFER_BINDING = 0x8F37;
AXLGLWAPI bool V_4_2;

// GL_VERSION_4_3
AXLGLWCONSTMODIFIER GLenum GL_NUM_SHADING_LANGUAGE_VERSIONS = 0x82E9;
AXLGLWCONSTMODIFIER GLenum GL_VERTEX_ATTRIB_ARRAY_LONG = 0x874E;
AXLGLWAPI bool V_4_3;

// GL_VERSION_4_4
AXLGLWCONSTMODIFIER GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = 0x8221;
AXLGLWCONSTMODIFIER GLenum GL_MAX_VERTEX_ATTRIB_STRIDE = 0x82E5;
AXLGLWCONSTMODIFIER GLenum GL_TEXTURE_BUFFER_BINDING = 0x8C2A;
AXLGLWAPI bool V_4_4;

// GL_VERSION_4_5
AXLGLWCONSTMODIFIER GLenum GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = 0x00000004;

typedef GLenum (APIENTRY * PFNGLGETGRAPHICSRESETSTATUSPROC) (void);
typedef void (APIENTRY * PFNGLGETNCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint lod, GLsizei bufSize, GLvoid *pixels);
typedef void (APIENTRY * PFNGLGETNTEXIMAGEPROC) (GLenum tex, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *pixels);
typedef void (APIENTRY * PFNGLGETNUNIFORMDVPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);

AXLGLWAPI PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus;
AXLGLWAPI PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage;
AXLGLWAPI PFNGLGETNTEXIMAGEPROC glGetnTexImage;
AXLGLWAPI PFNGLGETNUNIFORMDVPROC glGetnUniformdv;
AXLGLWAPI bool V_4_5;

// GL_VERSION_4_6
AXLGLWCONSTMODIFIER GLenum GL_CONTEXT_FLAG_NO_ERROR_BIT = 0x00000008;
AXLGLWCONSTMODIFIER GLenum GL_PARAMETER_BUFFER = 0x80EE;
AXLGLWCONSTMODIFIER GLenum GL_PARAMETER_BUFFER_BINDING = 0x80EF;
AXLGLWCONSTMODIFIER GLenum GL_TRANSFORM_FEEDBACK_OVERFLOW = 0x82EC;
AXLGLWCONSTMODIFIER GLenum GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW = 0x82ED;
AXLGLWCONSTMODIFIER GLenum GL_VERTICES_SUBMITTED = 0x82EE;
AXLGLWCONSTMODIFIER GLenum GL_PRIMITIVES_SUBMITTED = 0x82EF;
AXLGLWCONSTMODIFIER GLenum GL_VERTEX_SHADER_INVOCATIONS = 0x82F0;
AXLGLWCONSTMODIFIER GLenum GL_TESS_CONTROL_SHADER_PATCHES = 0x82F1;
AXLGLWCONSTMODIFIER GLenum GL_TESS_EVALUATION_SHADER_INVOCATIONS = 0x82F2;
AXLGLWCONSTMODIFIER GLenum GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED = 0x82F3;
AXLGLWCONSTMODIFIER GLenum GL_FRAGMENT_SHADER_INVOCATIONS = 0x82F4;
AXLGLWCONSTMODIFIER GLenum GL_COMPUTE_SHADER_INVOCATIONS = 0x82F5;
AXLGLWCONSTMODIFIER GLenum GL_CLIPPING_INPUT_PRIMITIVES = 0x82F6;
AXLGLWCONSTMODIFIER GLenum GL_CLIPPING_OUTPUT_PRIMITIVES = 0x82F7;
AXLGLWCONSTMODIFIER GLenum GL_TEXTURE_MAX_ANISOTROPY = 0x84FE;
AXLGLWCONSTMODIFIER GLenum GL_MAX_TEXTURE_MAX_ANISOTROPY = 0x84FF;
AXLGLWCONSTMODIFIER GLenum GL_POLYGON_OFFSET_CLAMP = 0x8E1B;
AXLGLWCONSTMODIFIER GLenum GL_SHADER_BINARY_FORMAT_SPIR_V = 0x9551;
AXLGLWCONSTMODIFIER GLenum GL_SPIR_V_BINARY = 0x9552;
AXLGLWCONSTMODIFIER GLenum GL_SPIR_V_EXTENSIONS = 0x9553;
AXLGLWCONSTMODIFIER GLenum GL_NUM_SPIR_V_EXTENSIONS = 0x9554;

typedef void (APIENTRY * PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) (GLenum mode, const GLvoid *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) (GLenum mode, GLenum type, const GLvoid *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (APIENTRY * PFNGLSPECIALIZESHADERPROC) (GLuint shader, const GLbyte *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
AXLGLWAPI PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount;
AXLGLWAPI PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount;
AXLGLWAPI PFNGLSPECIALIZESHADERPROC glSpecializeShader;
AXLGLWAPI bool V_4_6;

} // axl.glw.gl1
} // axl.glw
} // axl