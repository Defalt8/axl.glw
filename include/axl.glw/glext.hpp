#pragma once
#include "lib.hpp"
#include "gl.hpp"

namespace axl {
namespace glw {
namespace glext {
using namespace axl::glw::gl;

// GL_ARB_arrays_of_arrays
AXLGLWAPI bool arb_arrays_of_arrays;

// GL_ARB_base_instance
typedef void (APIENTRY * PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount, GLuint baseinstance);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLuint baseinstance);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount, GLint basevertex, GLuint baseinstance);
AXLGLWAPI PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance;
AXLGLWAPI PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance;
AXLGLWAPI PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance;
AXLGLWAPI bool arb_base_instance;

// GL_ARB_blend_func_extended
constexpr GLenum GL_SRC1_COLOR = 0x88F9;
constexpr GLenum GL_ONE_MINUS_SRC1_COLOR = 0x88FA;
constexpr GLenum GL_ONE_MINUS_SRC1_ALPHA = 0x88FB;
constexpr GLenum GL_MAX_DUAL_SOURCE_DRAW_BUFFERS = 0x88FC;
typedef void (APIENTRY * PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLubyte * name);
typedef GLint (APIENTRY * PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLubyte * name);
AXLGLWAPI PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
AXLGLWAPI PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;
AXLGLWAPI bool arb_blend_func_extended;

// GL_ARB_buffer_storage
constexpr GLenum GL_MAP_READ_BIT = 0x0001;
constexpr GLenum GL_MAP_WRITE_BIT = 0x0002;
constexpr GLenum GL_MAP_PERSISTENT_BIT = 0x00000040;
constexpr GLenum GL_MAP_COHERENT_BIT = 0x00000080;
constexpr GLenum GL_DYNAMIC_STORAGE_BIT = 0x0100;
constexpr GLenum GL_CLIENT_STORAGE_BIT = 0x0200;
constexpr GLenum GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT = 0x00004000;
constexpr GLenum GL_BUFFER_IMMUTABLE_STORAGE = 0x821F;
constexpr GLenum GL_BUFFER_STORAGE_FLAGS = 0x8220;
typedef void (APIENTRY * PFNGLBUFFERSTORAGEPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
AXLGLWAPI PFNGLBUFFERSTORAGEPROC glBufferStorage;
AXLGLWAPI bool arb_buffer_storage;

// GL_ARB_clear_buffer_object
typedef void (APIENTRY * PFNGLCLEARBUFFERDATAPROC) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (APIENTRY * PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
typedef void (APIENTRY * PFNGLCLEARNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
typedef void (APIENTRY * PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
AXLGLWAPI PFNGLCLEARBUFFERDATAPROC glClearBufferData;
AXLGLWAPI PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData;
AXLGLWAPI PFNGLCLEARNAMEDBUFFERDATAEXTPROC glClearNamedBufferDataEXT;
AXLGLWAPI PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glClearNamedBufferSubDataEXT;
AXLGLWAPI bool arb_clear_buffer_object;

// GL_ARB_ES2_compatibility
constexpr GLenum GL_FIXED = 0x140C;
constexpr GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
constexpr GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
constexpr GLenum GL_RGB565 = 0x8D62;
constexpr GLenum GL_LOW_FLOAT = 0x8DF0;
constexpr GLenum GL_MEDIUM_FLOAT = 0x8DF1;
constexpr GLenum GL_HIGH_FLOAT = 0x8DF2;
constexpr GLenum GL_LOW_INT = 0x8DF3;
constexpr GLenum GL_MEDIUM_INT = 0x8DF4;
constexpr GLenum GL_HIGH_INT = 0x8DF5;
constexpr GLenum GL_SHADER_BINARY_FORMATS = 0x8DF8;
constexpr GLenum GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9;
constexpr GLenum GL_SHADER_COMPILER = 0x8DFA;
constexpr GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
constexpr GLenum GL_MAX_VARYING_VECTORS = 0x8DFC;
constexpr GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
typedef int GLfixed;
typedef void (APIENTRY * PFNGLCLEARDEPTHFPROC) (GLclampf d);
typedef void (APIENTRY * PFNGLDEPTHRANGEFPROC) (GLclampf n, GLclampf f);
typedef void (APIENTRY * PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint* range, GLint *precision);
typedef void (APIENTRY * PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (APIENTRY * PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint* shaders, GLenum binaryformat, const void*binary, GLsizei length);
AXLGLWAPI PFNGLCLEARDEPTHFPROC glClearDepthf;
AXLGLWAPI PFNGLDEPTHRANGEFPROC glDepthRangef;
AXLGLWAPI PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
AXLGLWAPI PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
AXLGLWAPI PFNGLSHADERBINARYPROC glShaderBinary;
AXLGLWAPI bool arb_ES2_compatibility;

// GL_ARB_ES3_compatibility
constexpr GLenum GL_TEXTURE_IMMUTABLE_LEVELS = 0x82DF;
constexpr GLenum GL_PRIMITIVE_RESTART_FIXED_INDEX = 0x8D69;
constexpr GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE = 0x8D6A;
constexpr GLenum GL_MAX_ELEMENT_INDEX = 0x8D6B;
constexpr GLenum GL_COMPRESSED_R11_EAC = 0x9270;
constexpr GLenum GL_COMPRESSED_SIGNED_R11_EAC = 0x9271;
constexpr GLenum GL_COMPRESSED_RG11_EAC = 0x9272;
constexpr GLenum GL_COMPRESSED_SIGNED_RG11_EAC = 0x9273;
constexpr GLenum GL_COMPRESSED_RGB8_ETC2 = 0x9274;
constexpr GLenum GL_COMPRESSED_SRGB8_ETC2 = 0x9275;
constexpr GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9276;
constexpr GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = 0x9277;
constexpr GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = 0x9278;
constexpr GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = 0x9279;
AXLGLWAPI bool arb_ES3_compatibility;

// GL_ARB_ES3_1_compatibility
typedef void (APIENTRY * PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers);
AXLGLWAPI PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion;
AXLGLWAPI bool arb_ES3_1_compatibility;

// GL_ARB_ES3_2_compatibility
constexpr GLenum GL_PRIMITIVE_BOUNDING_BOX_ARB = 0x92BE;
constexpr GLenum GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB = 0x9381;
constexpr GLenum GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB = 0x9382;
typedef void (APIENTRY * PFNGLPRIMITIVEBOUNDINGBOXARBPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
AXLGLWAPI PFNGLPRIMITIVEBOUNDINGBOXARBPROC glPrimitiveBoundingBoxARB;
AXLGLWAPI bool arb_ES3_2_compatibility;

// GL_ARB_imaging
constexpr GLenum GL_CONSTANT_COLOR = 0x8001;
constexpr GLenum GL_ONE_MINUS_CONSTANT_COLOR = 0x8002;
constexpr GLenum GL_CONSTANT_ALPHA = 0x8003;
constexpr GLenum GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004;
constexpr GLenum GL_BLEND_COLOR = 0x8005;
constexpr GLenum GL_FUNC_ADD = 0x8006;
constexpr GLenum GL_MIN = 0x8007;
constexpr GLenum GL_MAX = 0x8008;
constexpr GLenum GL_BLEND_EQUATION = 0x8009;
constexpr GLenum GL_FUNC_SUBTRACT = 0x800A;
constexpr GLenum GL_FUNC_REVERSE_SUBTRACT = 0x800B;
constexpr GLenum GL_CONVOLUTION_1D = 0x8010;
constexpr GLenum GL_CONVOLUTION_2D = 0x8011;
constexpr GLenum GL_SEPARABLE_2D = 0x8012;
constexpr GLenum GL_CONVOLUTION_BORDER_MODE = 0x8013;
constexpr GLenum GL_CONVOLUTION_FILTER_SCALE = 0x8014;
constexpr GLenum GL_CONVOLUTION_FILTER_BIAS = 0x8015;
constexpr GLenum GL_REDUCE = 0x8016;
constexpr GLenum GL_CONVOLUTION_FORMAT = 0x8017;
constexpr GLenum GL_CONVOLUTION_WIDTH = 0x8018;
constexpr GLenum GL_CONVOLUTION_HEIGHT = 0x8019;
constexpr GLenum GL_MAX_CONVOLUTION_WIDTH = 0x801A;
constexpr GLenum GL_MAX_CONVOLUTION_HEIGHT = 0x801B;
constexpr GLenum GL_POST_CONVOLUTION_RED_SCALE = 0x801C;
constexpr GLenum GL_POST_CONVOLUTION_GREEN_SCALE = 0x801D;
constexpr GLenum GL_POST_CONVOLUTION_BLUE_SCALE = 0x801E;
constexpr GLenum GL_POST_CONVOLUTION_ALPHA_SCALE = 0x801F;
constexpr GLenum GL_POST_CONVOLUTION_RED_BIAS = 0x8020;
constexpr GLenum GL_POST_CONVOLUTION_GREEN_BIAS = 0x8021;
constexpr GLenum GL_POST_CONVOLUTION_BLUE_BIAS = 0x8022;
constexpr GLenum GL_POST_CONVOLUTION_ALPHA_BIAS = 0x8023;
constexpr GLenum GL_HISTOGRAM = 0x8024;
constexpr GLenum GL_PROXY_HISTOGRAM = 0x8025;
constexpr GLenum GL_HISTOGRAM_WIDTH = 0x8026;
constexpr GLenum GL_HISTOGRAM_FORMAT = 0x8027;
constexpr GLenum GL_HISTOGRAM_RED_SIZE = 0x8028;
constexpr GLenum GL_HISTOGRAM_GREEN_SIZE = 0x8029;
constexpr GLenum GL_HISTOGRAM_BLUE_SIZE = 0x802A;
constexpr GLenum GL_HISTOGRAM_ALPHA_SIZE = 0x802B;
constexpr GLenum GL_HISTOGRAM_LUMINANCE_SIZE = 0x802C;
constexpr GLenum GL_HISTOGRAM_SINK = 0x802D;
constexpr GLenum GL_MINMAX = 0x802E;
constexpr GLenum GL_MINMAX_FORMAT = 0x802F;
constexpr GLenum GL_MINMAX_SINK = 0x8030;
constexpr GLenum GL_TABLE_TOO_LARGE = 0x8031;
constexpr GLenum GL_COLOR_MATRIX = 0x80B1;
constexpr GLenum GL_COLOR_MATRIX_STACK_DEPTH = 0x80B2;
constexpr GLenum GL_MAX_COLOR_MATRIX_STACK_DEPTH = 0x80B3;
constexpr GLenum GL_POST_COLOR_MATRIX_RED_SCALE = 0x80B4;
constexpr GLenum GL_POST_COLOR_MATRIX_GREEN_SCALE = 0x80B5;
constexpr GLenum GL_POST_COLOR_MATRIX_BLUE_SCALE = 0x80B6;
constexpr GLenum GL_POST_COLOR_MATRIX_ALPHA_SCALE = 0x80B7;
constexpr GLenum GL_POST_COLOR_MATRIX_RED_BIAS = 0x80B8;
constexpr GLenum GL_POST_COLOR_MATRIX_GREEN_BIAS = 0x80B9;
constexpr GLenum GL_POST_COLOR_MATRIX_BLUE_BIAS = 0x80BA;
constexpr GLenum GL_POST_COLOR_MATRIX_ALPHA_BIAS = 0x80BB;
constexpr GLenum GL_COLOR_TABLE = 0x80D0;
constexpr GLenum GL_POST_CONVOLUTION_COLOR_TABLE = 0x80D1;
constexpr GLenum GL_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D2;
constexpr GLenum GL_PROXY_COLOR_TABLE = 0x80D3;
constexpr GLenum GL_PROXY_POST_CONVOLUTION_COLOR_TABLE = 0x80D4;
constexpr GLenum GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE = 0x80D5;
constexpr GLenum GL_COLOR_TABLE_SCALE = 0x80D6;
constexpr GLenum GL_COLOR_TABLE_BIAS = 0x80D7;
constexpr GLenum GL_COLOR_TABLE_FORMAT = 0x80D8;
constexpr GLenum GL_COLOR_TABLE_WIDTH = 0x80D9;
constexpr GLenum GL_COLOR_TABLE_RED_SIZE = 0x80DA;
constexpr GLenum GL_COLOR_TABLE_GREEN_SIZE = 0x80DB;
constexpr GLenum GL_COLOR_TABLE_BLUE_SIZE = 0x80DC;
constexpr GLenum GL_COLOR_TABLE_ALPHA_SIZE = 0x80DD;
constexpr GLenum GL_COLOR_TABLE_LUMINANCE_SIZE = 0x80DE;
constexpr GLenum GL_COLOR_TABLE_INTENSITY_SIZE = 0x80DF;
constexpr GLenum GL_IGNORE_BORDER = 0x8150;
constexpr GLenum GL_CONSTANT_BORDER = 0x8151;
constexpr GLenum GL_WRAP_BORDER = 0x8152;
constexpr GLenum GL_REPLICATE_BORDER = 0x8153;
constexpr GLenum GL_CONVOLUTION_BORDER_COLOR = 0x8154;

typedef void (APIENTRY * PFNGLCOLORSUBTABLEPROC) (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data);
typedef void (APIENTRY * PFNGLCOLORTABLEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table);
typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER1DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image);
typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER2DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIPROC) (GLenum target, GLenum pname, GLint params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLCOPYCOLORSUBTABLEPROC) (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCOLORTABLEPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER1DPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER2DPROC) (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPROC) (GLenum target, GLenum format, GLenum type, void *table);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONFILTERPROC) (GLenum target, GLenum format, GLenum type, void *image);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPROC) (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETMINMAXPROC) (GLenum target, GLboolean reset, GLenum format, GLenum types, void *values);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETSEPARABLEFILTERPROC) (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span);
typedef void (APIENTRY * PFNGLHISTOGRAMPROC) (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLMINMAXPROC) (GLenum target, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLRESETHISTOGRAMPROC) (GLenum target);
typedef void (APIENTRY * PFNGLRESETMINMAXPROC) (GLenum target);
typedef void (APIENTRY * PFNGLSEPARABLEFILTER2DPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column);

AXLGLWAPI PFNGLCOLORSUBTABLEPROC glColorSubTable;
AXLGLWAPI PFNGLCOLORTABLEPROC glColorTable;
AXLGLWAPI PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv;
AXLGLWAPI PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv;
AXLGLWAPI PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D;
AXLGLWAPI PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D;
AXLGLWAPI PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf;
AXLGLWAPI PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv;
AXLGLWAPI PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri;
AXLGLWAPI PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv;
AXLGLWAPI PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable;
AXLGLWAPI PFNGLCOPYCOLORTABLEPROC glCopyColorTable;
AXLGLWAPI PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D;
AXLGLWAPI PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D;
AXLGLWAPI PFNGLGETCOLORTABLEPROC glGetColorTable;
AXLGLWAPI PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv;
AXLGLWAPI PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv;
AXLGLWAPI PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter;
AXLGLWAPI PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv;
AXLGLWAPI PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv;
AXLGLWAPI PFNGLGETHISTOGRAMPROC glGetHistogram;
AXLGLWAPI PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv;
AXLGLWAPI PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv;
AXLGLWAPI PFNGLGETMINMAXPROC glGetMinmax;
AXLGLWAPI PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv;
AXLGLWAPI PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv;
AXLGLWAPI PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter;
AXLGLWAPI PFNGLHISTOGRAMPROC glHistogram;
AXLGLWAPI PFNGLMINMAXPROC glMinmax;
AXLGLWAPI PFNGLRESETHISTOGRAMPROC glResetHistogram;
AXLGLWAPI PFNGLRESETMINMAXPROC glResetMinmax;
AXLGLWAPI PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D;
AXLGLWAPI bool arb_imaging;

// GL_ARB_shadow
constexpr GLenum GL_TEXTURE_COMPARE_MODE_ARB = 0x884C;
constexpr GLenum GL_TEXTURE_COMPARE_FUNC_ARB = 0x884D;
constexpr GLenum GL_COMPARE_R_TO_TEXTURE_ARB = 0x884E;
AXLGLWAPI bool arb_shadow;

// GL_ARB_sync
constexpr GLenum GL_SYNC_FLUSH_COMMANDS_BIT = 0x00000001;
constexpr GLenum GL_MAX_SERVER_WAIT_TIMEOUT = 0x9111;
constexpr GLenum GL_OBJECT_TYPE = 0x9112;
constexpr GLenum GL_SYNC_CONDITION = 0x9113;
constexpr GLenum GL_SYNC_STATUS = 0x9114;
constexpr GLenum GL_SYNC_FLAGS = 0x9115;
constexpr GLenum GL_SYNC_FENCE = 0x9116;
constexpr GLenum GL_SYNC_GPU_COMMANDS_COMPLETE = 0x9117;
constexpr GLenum GL_UNSIGNALED = 0x9118;
constexpr GLenum GL_SIGNALED = 0x9119;
constexpr GLenum GL_ALREADY_SIGNALED = 0x911A;
constexpr GLenum GL_TIMEOUT_EXPIRED = 0x911B;
constexpr GLenum GL_CONDITION_SATISFIED = 0x911C;
constexpr GLenum GL_WAIT_FAILED = 0x911D;
constexpr unsigned long long GL_TIMEOUT_IGNORED = 0xFFFFFFFFFFFFFFFFull;
typedef GLenum (APIENTRY * PFNGLCLIENTWAITSYNCPROC) (GLsync gl_sync,GLbitfield flags,GLuint64 timeout);
typedef void (APIENTRY * PFNGLDELETESYNCPROC) (GLsync gl_sync);
typedef GLsync (APIENTRY * PFNGLFENCESYNCPROC) (GLenum condition,GLbitfield flags);
typedef void (APIENTRY * PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64* params);
typedef void (APIENTRY * PFNGLGETSYNCIVPROC) (GLsync gl_sync,GLenum pname,GLsizei bufSize,GLsizei* length, GLint *values);
typedef GLboolean (APIENTRY * PFNGLISSYNCPROC) (GLsync gl_sync);
typedef void (APIENTRY * PFNGLWAITSYNCPROC) (GLsync gl_sync,GLbitfield flags,GLuint64 timeout);
AXLGLWAPI PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
AXLGLWAPI PFNGLDELETESYNCPROC glDeleteSync;
AXLGLWAPI PFNGLFENCESYNCPROC glFenceSync;
AXLGLWAPI PFNGLGETINTEGER64VPROC glGetInteger64v;
AXLGLWAPI PFNGLGETSYNCIVPROC glGetSynciv;
AXLGLWAPI PFNGLISSYNCPROC glIsSync;
AXLGLWAPI PFNGLWAITSYNCPROC glWaitSync;
AXLGLWAPI bool arb_sync;

// GL_ARB_tessellation_shader
constexpr GLenum GL_PATCHES = 0xE;
constexpr GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER = 0x84F0;
constexpr GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER = 0x84F1;
constexpr GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = 0x886C;
constexpr GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = 0x886D;
constexpr GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E1E;
constexpr GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E1F;
constexpr GLenum GL_PATCH_VERTICES = 0x8E72;
constexpr GLenum GL_PATCH_DEFAULT_INNER_LEVEL = 0x8E73;
constexpr GLenum GL_PATCH_DEFAULT_OUTER_LEVEL = 0x8E74;
constexpr GLenum GL_TESS_CONTROL_OUTPUT_VERTICES = 0x8E75;
constexpr GLenum GL_TESS_GEN_MODE = 0x8E76;
constexpr GLenum GL_TESS_GEN_SPACING = 0x8E77;
constexpr GLenum GL_TESS_GEN_VERTEX_ORDER = 0x8E78;
constexpr GLenum GL_TESS_GEN_POINT_MODE = 0x8E79;
constexpr GLenum GL_ISOLINES = 0x8E7A;
constexpr GLenum GL_FRACTIONAL_ODD = 0x8E7B;
constexpr GLenum GL_FRACTIONAL_EVEN = 0x8E7C;
constexpr GLenum GL_MAX_PATCH_VERTICES = 0x8E7D;
constexpr GLenum GL_MAX_TESS_GEN_LEVEL = 0x8E7E;
constexpr GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = 0x8E7F;
constexpr GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = 0x8E80;
constexpr GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = 0x8E81;
constexpr GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = 0x8E82;
constexpr GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = 0x8E83;
constexpr GLenum GL_MAX_TESS_PATCH_COMPONENTS = 0x8E84;
constexpr GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = 0x8E85;
constexpr GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = 0x8E86;
constexpr GLenum GL_TESS_EVALUATION_SHADER = 0x8E87;
constexpr GLenum GL_TESS_CONTROL_SHADER = 0x8E88;
constexpr GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = 0x8E89;
constexpr GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = 0x8E8A;
typedef void (APIENTRY * PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat* values);
typedef void (APIENTRY * PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
AXLGLWAPI PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
AXLGLWAPI PFNGLPATCHPARAMETERIPROC glPatchParameteri;
AXLGLWAPI bool arb_tessellation_shader;

} // namespace axl.glw.glext
} // namespace axl.glw
} // namespace axl
