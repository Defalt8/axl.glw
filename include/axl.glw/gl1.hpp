#pragma once
#include "lib.hpp"
#include "gl.hpp"

namespace axl {
namespace glw {
namespace gl1 {
using namespace gl;

// GL_VERSION_1_2
constexpr GLenum GL_SMOOTH_POINT_SIZE_RANGE = 0x0B12;
constexpr GLenum GL_SMOOTH_POINT_SIZE_GRANULARITY = 0x0B13;
constexpr GLenum GL_SMOOTH_LINE_WIDTH_RANGE = 0x0B22;
constexpr GLenum GL_SMOOTH_LINE_WIDTH_GRANULARITY = 0x0B23;
constexpr GLenum GL_UNSIGNED_BYTE_3_3_2 = 0x8032;
constexpr GLenum GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033;
constexpr GLenum GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034;
constexpr GLenum GL_UNSIGNED_INT_8_8_8_8 = 0x8035;
constexpr GLenum GL_UNSIGNED_INT_10_10_10_2 = 0x8036;
constexpr GLenum GL_RESCALE_NORMAL = 0x803A;
constexpr GLenum GL_TEXTURE_BINDING_3D = 0x806A;
constexpr GLenum GL_PACK_SKIP_IMAGES = 0x806B;
constexpr GLenum GL_PACK_IMAGE_HEIGHT = 0x806C;
constexpr GLenum GL_UNPACK_SKIP_IMAGES = 0x806D;
constexpr GLenum GL_UNPACK_IMAGE_HEIGHT = 0x806E;
constexpr GLenum GL_TEXTURE_3D = 0x806F;
constexpr GLenum GL_PROXY_TEXTURE_3D = 0x8070;
constexpr GLenum GL_TEXTURE_DEPTH = 0x8071;
constexpr GLenum GL_TEXTURE_WRAP_R = 0x8072;
constexpr GLenum GL_MAX_3D_TEXTURE_SIZE = 0x8073;
constexpr GLenum GL_BGR = 0x80E0;
constexpr GLenum GL_BGRA = 0x80E1;
constexpr GLenum GL_MAX_ELEMENTS_VERTICES = 0x80E8;
constexpr GLenum GL_MAX_ELEMENTS_INDICES = 0x80E9;
constexpr GLenum GL_CLAMP_TO_EDGE = 0x812F;
constexpr GLenum GL_TEXTURE_MIN_LOD = 0x813A;
constexpr GLenum GL_TEXTURE_MAX_LOD = 0x813B;
constexpr GLenum GL_TEXTURE_BASE_LEVEL = 0x813C;
constexpr GLenum GL_TEXTURE_MAX_LEVEL = 0x813D;
constexpr GLenum GL_LIGHT_MODEL_COLOR_CONTROL = 0x81F8;
constexpr GLenum GL_SINGLE_COLOR = 0x81F9;
constexpr GLenum GL_SEPARATE_SPECULAR_COLOR = 0x81FA;
constexpr GLenum GL_UNSIGNED_BYTE_2_3_3_REV = 0x8362;
constexpr GLenum GL_UNSIGNED_SHORT_5_6_5 = 0x8363;
constexpr GLenum GL_UNSIGNED_SHORT_5_6_5_REV = 0x8364;
constexpr GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV = 0x8365;
constexpr GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV = 0x8366;
constexpr GLenum GL_UNSIGNED_INT_8_8_8_8_REV = 0x8367;
constexpr GLenum GL_ALIASED_POINT_SIZE_RANGE = 0x846D;
constexpr GLenum GL_ALIASED_LINE_WIDTH_RANGE = 0x846E;

typedef void (APIENTRY * PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
typedef void (APIENTRY * PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (APIENTRY * PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);

AXLGLWAPI PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
AXLGLWAPI PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
AXLGLWAPI PFNGLTEXIMAGE3DPROC glTexImage3D;
AXLGLWAPI PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;
AXLGLWAPI bool V_1_2;

// GL_VERSION_1_3
constexpr GLenum GL_MULTISAMPLE = 0x809D;
constexpr GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
constexpr GLenum GL_SAMPLE_ALPHA_TO_ONE = 0x809F;
constexpr GLenum GL_SAMPLE_COVERAGE = 0x80A0;
constexpr GLenum GL_SAMPLE_BUFFERS = 0x80A8;
constexpr GLenum GL_SAMPLES = 0x80A9;
constexpr GLenum GL_SAMPLE_COVERAGE_VALUE = 0x80AA;
constexpr GLenum GL_SAMPLE_COVERAGE_INVERT = 0x80AB;
constexpr GLenum GL_CLAMP_TO_BORDER = 0x812D;
constexpr GLenum GL_TEXTURE0 = 0x84C0;
constexpr GLenum GL_TEXTURE1 = 0x84C1;
constexpr GLenum GL_TEXTURE2 = 0x84C2;
constexpr GLenum GL_TEXTURE3 = 0x84C3;
constexpr GLenum GL_TEXTURE4 = 0x84C4;
constexpr GLenum GL_TEXTURE5 = 0x84C5;
constexpr GLenum GL_TEXTURE6 = 0x84C6;
constexpr GLenum GL_TEXTURE7 = 0x84C7;
constexpr GLenum GL_TEXTURE8 = 0x84C8;
constexpr GLenum GL_TEXTURE9 = 0x84C9;
constexpr GLenum GL_TEXTURE10 = 0x84CA;
constexpr GLenum GL_TEXTURE11 = 0x84CB;
constexpr GLenum GL_TEXTURE12 = 0x84CC;
constexpr GLenum GL_TEXTURE13 = 0x84CD;
constexpr GLenum GL_TEXTURE14 = 0x84CE;
constexpr GLenum GL_TEXTURE15 = 0x84CF;
constexpr GLenum GL_TEXTURE16 = 0x84D0;
constexpr GLenum GL_TEXTURE17 = 0x84D1;
constexpr GLenum GL_TEXTURE18 = 0x84D2;
constexpr GLenum GL_TEXTURE19 = 0x84D3;
constexpr GLenum GL_TEXTURE20 = 0x84D4;
constexpr GLenum GL_TEXTURE21 = 0x84D5;
constexpr GLenum GL_TEXTURE22 = 0x84D6;
constexpr GLenum GL_TEXTURE23 = 0x84D7;
constexpr GLenum GL_TEXTURE24 = 0x84D8;
constexpr GLenum GL_TEXTURE25 = 0x84D9;
constexpr GLenum GL_TEXTURE26 = 0x84DA;
constexpr GLenum GL_TEXTURE27 = 0x84DB;
constexpr GLenum GL_TEXTURE28 = 0x84DC;
constexpr GLenum GL_TEXTURE29 = 0x84DD;
constexpr GLenum GL_TEXTURE30 = 0x84DE;
constexpr GLenum GL_TEXTURE31 = 0x84DF;
constexpr GLenum GL_ACTIVE_TEXTURE = 0x84E0;
constexpr GLenum GL_CLIENT_ACTIVE_TEXTURE = 0x84E1;
constexpr GLenum GL_MAX_TEXTURE_UNITS = 0x84E2;
constexpr GLenum GL_TRANSPOSE_MODELVIEW_MATRIX = 0x84E3;
constexpr GLenum GL_TRANSPOSE_PROJECTION_MATRIX = 0x84E4;
constexpr GLenum GL_TRANSPOSE_TEXTURE_MATRIX = 0x84E5;
constexpr GLenum GL_TRANSPOSE_COLOR_MATRIX = 0x84E6;
constexpr GLenum GL_SUBTRACT = 0x84E7;
constexpr GLenum GL_COMPRESSED_ALPHA = 0x84E9;
constexpr GLenum GL_COMPRESSED_LUMINANCE = 0x84EA;
constexpr GLenum GL_COMPRESSED_LUMINANCE_ALPHA = 0x84EB;
constexpr GLenum GL_COMPRESSED_INTENSITY = 0x84EC;
constexpr GLenum GL_COMPRESSED_RGB = 0x84ED;
constexpr GLenum GL_COMPRESSED_RGBA = 0x84EE;
constexpr GLenum GL_TEXTURE_COMPRESSION_HINT = 0x84EF;
constexpr GLenum GL_NORMAL_MAP = 0x8511;
constexpr GLenum GL_REFLECTION_MAP = 0x8512;
constexpr GLenum GL_TEXTURE_CUBE_MAP = 0x8513;
constexpr GLenum GL_TEXTURE_BINDING_CUBE_MAP = 0x8514;
constexpr GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
constexpr GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
constexpr GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
constexpr GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
constexpr GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
constexpr GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
constexpr GLenum GL_PROXY_TEXTURE_CUBE_MAP = 0x851B;
constexpr GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
constexpr GLenum GL_COMBINE = 0x8570;
constexpr GLenum GL_COMBINE_RGB = 0x8571;
constexpr GLenum GL_COMBINE_ALPHA = 0x8572;
constexpr GLenum GL_RGB_SCALE = 0x8573;
constexpr GLenum GL_ADD_SIGNED = 0x8574;
constexpr GLenum GL_INTERPOLATE = 0x8575;
constexpr GLenum GL_CONSTANT = 0x8576;
constexpr GLenum GL_PRIMARY_COLOR = 0x8577;
constexpr GLenum GL_PREVIOUS = 0x8578;
constexpr GLenum GL_SOURCE0_RGB = 0x8580;
constexpr GLenum GL_SOURCE1_RGB = 0x8581;
constexpr GLenum GL_SOURCE2_RGB = 0x8582;
constexpr GLenum GL_SOURCE0_ALPHA = 0x8588;
constexpr GLenum GL_SOURCE1_ALPHA = 0x8589;
constexpr GLenum GL_SOURCE2_ALPHA = 0x858A;
constexpr GLenum GL_OPERAND0_RGB = 0x8590;
constexpr GLenum GL_OPERAND1_RGB = 0x8591;
constexpr GLenum GL_OPERAND2_RGB = 0x8592;
constexpr GLenum GL_OPERAND0_ALPHA = 0x8598;
constexpr GLenum GL_OPERAND1_ALPHA = 0x8599;
constexpr GLenum GL_OPERAND2_ALPHA = 0x859A;
constexpr GLenum GL_TEXTURE_COMPRESSED_IMAGE_SIZE = 0x86A0;
constexpr GLenum GL_TEXTURE_COMPRESSED = 0x86A1;
constexpr GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
constexpr GLenum GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3;
constexpr GLenum GL_DOT3_RGB = 0x86AE;
constexpr GLenum GL_DOT3_RGBA = 0x86AF;
constexpr GLenum GL_MULTISAMPLE_BIT = 0x20000000;

typedef void (APIENTRY * PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (APIENTRY * PFNGLCLIENTACTIVETEXTUREPROC) (GLenum texture);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (APIENTRY * PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint lod, void *img);
typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXDPROC) (const GLdouble m[16]);
typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXFPROC) (const GLfloat m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXDPROC) (const GLdouble m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXFPROC) (const GLfloat m[16]);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DPROC) (GLenum target, GLdouble s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DVPROC) (GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FPROC) (GLenum target, GLfloat s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FVPROC) (GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IPROC) (GLenum target, GLint s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IVPROC) (GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SPROC) (GLenum target, GLshort s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SVPROC) (GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DPROC) (GLenum target, GLdouble s, GLdouble t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DVPROC) (GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FPROC) (GLenum target, GLfloat s, GLfloat t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FVPROC) (GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IPROC) (GLenum target, GLint s, GLint t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IVPROC) (GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SPROC) (GLenum target, GLshort s, GLshort t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SVPROC) (GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DVPROC) (GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FVPROC) (GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IPROC) (GLenum target, GLint s, GLint t, GLint r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IVPROC) (GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SPROC) (GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SVPROC) (GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DPROC) (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DVPROC) (GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FPROC) (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FVPROC) (GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IPROC) (GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IVPROC) (GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SPROC) (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SVPROC) (GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLSAMPLECOVERAGEPROC) (GLclampf value, GLboolean invert);

AXLGLWAPI PFNGLACTIVETEXTUREPROC glActiveTexture;
AXLGLWAPI PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
AXLGLWAPI PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
AXLGLWAPI PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
AXLGLWAPI PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
AXLGLWAPI PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
AXLGLWAPI PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
AXLGLWAPI PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
AXLGLWAPI PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
AXLGLWAPI PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;
AXLGLWAPI PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;
AXLGLWAPI PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;
AXLGLWAPI PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;
AXLGLWAPI PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;
AXLGLWAPI PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;
AXLGLWAPI PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;
AXLGLWAPI PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;
AXLGLWAPI PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;
AXLGLWAPI PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;
AXLGLWAPI PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;
AXLGLWAPI PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;
AXLGLWAPI PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;
AXLGLWAPI PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;
AXLGLWAPI PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;
AXLGLWAPI PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;
AXLGLWAPI PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;
AXLGLWAPI PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;
AXLGLWAPI PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;
AXLGLWAPI PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;
AXLGLWAPI PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;
AXLGLWAPI PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;
AXLGLWAPI PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;
AXLGLWAPI PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;
AXLGLWAPI PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;
AXLGLWAPI PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;
AXLGLWAPI PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;
AXLGLWAPI PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;
AXLGLWAPI PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;
AXLGLWAPI PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;
AXLGLWAPI PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
AXLGLWAPI PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;
AXLGLWAPI PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;
AXLGLWAPI PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;
AXLGLWAPI PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;
AXLGLWAPI PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;
AXLGLWAPI PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
AXLGLWAPI bool V_1_3;

// GL_VERSION_1_4
constexpr GLenum GL_BLEND_DST_RGB = 0x80C8;
constexpr GLenum GL_BLEND_SRC_RGB = 0x80C9;
constexpr GLenum GL_BLEND_DST_ALPHA = 0x80CA;
constexpr GLenum GL_BLEND_SRC_ALPHA = 0x80CB;
constexpr GLenum GL_POINT_SIZE_MIN = 0x8126;
constexpr GLenum GL_POINT_SIZE_MAX = 0x8127;
constexpr GLenum GL_POINT_FADE_THRESHOLD_SIZE = 0x8128;
constexpr GLenum GL_POINT_DISTANCE_ATTENUATION = 0x8129;
constexpr GLenum GL_GENERATE_MIPMAP = 0x8191;
constexpr GLenum GL_GENERATE_MIPMAP_HINT = 0x8192;
constexpr GLenum GL_DEPTH_COMPONENT16 = 0x81A5;
constexpr GLenum GL_DEPTH_COMPONENT24 = 0x81A6;
constexpr GLenum GL_DEPTH_COMPONENT32 = 0x81A7;
constexpr GLenum GL_MIRRORED_REPEAT = 0x8370;
constexpr GLenum GL_FOG_COORDINATE_SOURCE = 0x8450;
constexpr GLenum GL_FOG_COORDINATE = 0x8451;
constexpr GLenum GL_FRAGMENT_DEPTH = 0x8452;
constexpr GLenum GL_CURRENT_FOG_COORDINATE = 0x8453;
constexpr GLenum GL_FOG_COORDINATE_ARRAY_TYPE = 0x8454;
constexpr GLenum GL_FOG_COORDINATE_ARRAY_STRIDE = 0x8455;
constexpr GLenum GL_FOG_COORDINATE_ARRAY_POINTER = 0x8456;
constexpr GLenum GL_FOG_COORDINATE_ARRAY = 0x8457;
constexpr GLenum GL_COLOR_SUM = 0x8458;
constexpr GLenum GL_CURRENT_SECONDARY_COLOR = 0x8459;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY_SIZE = 0x845A;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY_TYPE = 0x845B;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY_STRIDE = 0x845C;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY_POINTER = 0x845D;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY = 0x845E;
constexpr GLenum GL_MAX_TEXTURE_LOD_BIAS = 0x84FD;
constexpr GLenum GL_TEXTURE_FILTER_CONTROL = 0x8500;
constexpr GLenum GL_TEXTURE_LOD_BIAS = 0x8501;
constexpr GLenum GL_INCR_WRAP = 0x8507;
constexpr GLenum GL_DECR_WRAP = 0x8508;
constexpr GLenum GL_TEXTURE_DEPTH_SIZE = 0x884A;
constexpr GLenum GL_DEPTH_TEXTURE_MODE = 0x884B;
constexpr GLenum GL_TEXTURE_COMPARE_MODE = 0x884C;
constexpr GLenum GL_TEXTURE_COMPARE_FUNC = 0x884D;
constexpr GLenum GL_COMPARE_R_TO_TEXTURE = 0x884E;

typedef void (APIENTRY * PFNGLBLENDCOLORPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (APIENTRY * PFNGLBLENDEQUATIONPROC) (GLenum mode);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (APIENTRY * PFNGLFOGCOORDPOINTERPROC) (GLenum type, GLsizei stride, const void *pointer);
typedef void (APIENTRY * PFNGLFOGCOORDDPROC) (GLdouble coord);
typedef void (APIENTRY * PFNGLFOGCOORDDVPROC) (const GLdouble *coord);
typedef void (APIENTRY * PFNGLFOGCOORDFPROC) (GLfloat coord);
typedef void (APIENTRY * PFNGLFOGCOORDFVPROC) (const GLfloat *coord);
typedef void (APIENTRY * PFNGLMULTIDRAWARRAYSPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const* indices, GLsizei drawcount);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFVPROC) (GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLPOINTPARAMETERIPROC) (GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERIVPROC) (GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BPROC) (GLbyte red, GLbyte green, GLbyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BVPROC) (const GLbyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DPROC) (GLdouble red, GLdouble green, GLdouble blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DVPROC) (const GLdouble *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FPROC) (GLfloat red, GLfloat green, GLfloat blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FVPROC) (const GLfloat *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IPROC) (GLint red, GLint green, GLint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IVPROC) (const GLint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SPROC) (GLshort red, GLshort green, GLshort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SVPROC) (const GLshort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBPROC) (GLubyte red, GLubyte green, GLubyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBVPROC) (const GLubyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIPROC) (GLuint red, GLuint green, GLuint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIVPROC) (const GLuint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USPROC) (GLushort red, GLushort green, GLushort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USVPROC) (const GLushort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLORPOINTERPROC) (GLint size, GLenum type, GLsizei stride, const void *pointer);
typedef void (APIENTRY * PFNGLWINDOWPOS2DPROC) (GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLWINDOWPOS2DVPROC) (const GLdouble *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2FPROC) (GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLWINDOWPOS2FVPROC) (const GLfloat *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2IPROC) (GLint x, GLint y);
typedef void (APIENTRY * PFNGLWINDOWPOS2IVPROC) (const GLint *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2SPROC) (GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLWINDOWPOS2SVPROC) (const GLshort *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3DPROC) (GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLWINDOWPOS3DVPROC) (const GLdouble *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3FPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLWINDOWPOS3FVPROC) (const GLfloat *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3IPROC) (GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLWINDOWPOS3IVPROC) (const GLint *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3SPROC) (GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLWINDOWPOS3SVPROC) (const GLshort *p);

AXLGLWAPI PFNGLBLENDCOLORPROC glBlendColor;
AXLGLWAPI PFNGLBLENDEQUATIONPROC glBlendEquation;
AXLGLWAPI PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
AXLGLWAPI PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
AXLGLWAPI PFNGLFOGCOORDDPROC glFogCoordd;
AXLGLWAPI PFNGLFOGCOORDDVPROC glFogCoorddv;
AXLGLWAPI PFNGLFOGCOORDFPROC glFogCoordf;
AXLGLWAPI PFNGLFOGCOORDFVPROC glFogCoordfv;
AXLGLWAPI PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
AXLGLWAPI PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
AXLGLWAPI PFNGLPOINTPARAMETERFPROC glPointParameterf;
AXLGLWAPI PFNGLPOINTPARAMETERFVPROC	 glPointParameterfv;
AXLGLWAPI PFNGLPOINTPARAMETERIPROC glPointParameteri;
AXLGLWAPI PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
AXLGLWAPI PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;
AXLGLWAPI PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;
AXLGLWAPI PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;
AXLGLWAPI PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;
AXLGLWAPI PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;
AXLGLWAPI PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;
AXLGLWAPI PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;
AXLGLWAPI PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;
AXLGLWAPI PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;
AXLGLWAPI PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;
AXLGLWAPI PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;
AXLGLWAPI PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;
AXLGLWAPI PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;
AXLGLWAPI PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;
AXLGLWAPI PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;
AXLGLWAPI PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;
AXLGLWAPI PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
AXLGLWAPI PFNGLWINDOWPOS2DPROC glWindowPos2d;
AXLGLWAPI PFNGLWINDOWPOS2DVPROC glWindowPos2dv;
AXLGLWAPI PFNGLWINDOWPOS2FPROC glWindowPos2f;
AXLGLWAPI PFNGLWINDOWPOS2FVPROC glWindowPos2fv;
AXLGLWAPI PFNGLWINDOWPOS2IPROC glWindowPos2i;
AXLGLWAPI PFNGLWINDOWPOS2IVPROC glWindowPos2iv;
AXLGLWAPI PFNGLWINDOWPOS2SPROC glWindowPos2s;
AXLGLWAPI PFNGLWINDOWPOS2SVPROC glWindowPos2sv;
AXLGLWAPI PFNGLWINDOWPOS3DPROC glWindowPos3d;
AXLGLWAPI PFNGLWINDOWPOS3DVPROC glWindowPos3dv;
AXLGLWAPI PFNGLWINDOWPOS3FPROC glWindowPos3f;
AXLGLWAPI PFNGLWINDOWPOS3FVPROC glWindowPos3fv;
AXLGLWAPI PFNGLWINDOWPOS3IPROC glWindowPos3i;
AXLGLWAPI PFNGLWINDOWPOS3IVPROC glWindowPos3iv;
AXLGLWAPI PFNGLWINDOWPOS3SPROC glWindowPos3s;
AXLGLWAPI PFNGLWINDOWPOS3SVPROC glWindowPos3sv;
AXLGLWAPI bool V_1_4;

// GL_VERSION_1_5
constexpr GLenum GL_BUFFER_SIZE = 0x8764;
constexpr GLenum GL_BUFFER_USAGE = 0x8765;
constexpr GLenum GL_QUERY_COUNTER_BITS = 0x8864;
constexpr GLenum GL_CURRENT_QUERY = 0x8865;
constexpr GLenum GL_QUERY_RESULT = 0x8866;
constexpr GLenum GL_QUERY_RESULT_AVAILABLE = 0x8867;
constexpr GLenum GL_ARRAY_BUFFER = 0x8892;
constexpr GLenum GL_ELEMENT_ARRAY_BUFFER = 0x8893;
constexpr GLenum GL_ARRAY_BUFFER_BINDING = 0x8894;
constexpr GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
constexpr GLenum GL_VERTEX_ARRAY_BUFFER_BINDING = 0x8896;
constexpr GLenum GL_NORMAL_ARRAY_BUFFER_BINDING = 0x8897;
constexpr GLenum GL_COLOR_ARRAY_BUFFER_BINDING = 0x8898;
constexpr GLenum GL_INDEX_ARRAY_BUFFER_BINDING = 0x8899;
constexpr GLenum GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING = 0x889A;
constexpr GLenum GL_EDGE_FLAG_ARRAY_BUFFER_BINDING = 0x889B;
constexpr GLenum GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING = 0x889C;
constexpr GLenum GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING = 0x889D;
constexpr GLenum GL_WEIGHT_ARRAY_BUFFER_BINDING = 0x889E;
constexpr GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
constexpr GLenum GL_READ_ONLY = 0x88B8;
constexpr GLenum GL_WRITE_ONLY = 0x88B9;
constexpr GLenum GL_READ_WRITE = 0x88BA;
constexpr GLenum GL_BUFFER_ACCESS = 0x88BB;
constexpr GLenum GL_BUFFER_MAPPED = 0x88BC;
constexpr GLenum GL_BUFFER_MAP_POINTER = 0x88BD;
constexpr GLenum GL_STREAM_DRAW = 0x88E0;
constexpr GLenum GL_STREAM_READ = 0x88E1;
constexpr GLenum GL_STREAM_COPY = 0x88E2;
constexpr GLenum GL_STATIC_DRAW = 0x88E4;
constexpr GLenum GL_STATIC_READ = 0x88E5;
constexpr GLenum GL_STATIC_COPY = 0x88E6;
constexpr GLenum GL_DYNAMIC_DRAW = 0x88E8;
constexpr GLenum GL_DYNAMIC_READ = 0x88E9;
constexpr GLenum GL_DYNAMIC_COPY = 0x88EA;
constexpr GLenum GL_SAMPLES_PASSED = 0x8914;
constexpr GLenum GL_CURRENT_FOG_COORD = GL_CURRENT_FOG_COORDINATE;
constexpr GLenum GL_FOG_COORD = GL_FOG_COORDINATE;
constexpr GLenum GL_FOG_COORD_ARRAY = GL_FOG_COORDINATE_ARRAY;
constexpr GLenum GL_FOG_COORD_ARRAY_BUFFER_BINDING = GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING;
constexpr GLenum GL_FOG_COORD_ARRAY_POINTER = GL_FOG_COORDINATE_ARRAY_POINTER;
constexpr GLenum GL_FOG_COORD_ARRAY_STRIDE = GL_FOG_COORDINATE_ARRAY_STRIDE;
constexpr GLenum GL_FOG_COORD_ARRAY_TYPE = GL_FOG_COORDINATE_ARRAY_TYPE;
constexpr GLenum GL_FOG_COORD_SRC = GL_FOG_COORDINATE_SOURCE;
constexpr GLenum GL_SRC0_ALPHA = GL_SOURCE0_ALPHA;
constexpr GLenum GL_SRC0_RGB = GL_SOURCE0_RGB;
constexpr GLenum GL_SRC1_ALPHA = GL_SOURCE1_ALPHA;
constexpr GLenum GL_SRC1_RGB = GL_SOURCE1_RGB;
constexpr GLenum GL_SRC2_ALPHA = GL_SOURCE2_ALPHA;
constexpr GLenum GL_SRC2_RGB = GL_SOURCE2_RGB;

typedef void (APIENTRY * PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void (APIENTRY * PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void* data, GLenum usage);
typedef void (APIENTRY * PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
typedef void (APIENTRY * PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint* buffers);
typedef void (APIENTRY * PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLENDQUERYPROC) (GLenum target);
typedef void (APIENTRY * PFNGLGENBUFFERSPROC) (GLsizei n, GLuint* buffers);
typedef void (APIENTRY * PFNGLGENQUERIESPROC) (GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void** params);
typedef void (APIENTRY * PFNGLGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, void* data);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISBUFFERPROC) (GLuint buffer);
typedef GLboolean (APIENTRY * PFNGLISQUERYPROC) (GLuint id);
typedef void* (APIENTRY * PFNGLMAPBUFFERPROC) (GLenum target, GLenum access);
typedef GLboolean (APIENTRY * PFNGLUNMAPBUFFERPROC) (GLenum target);

AXLGLWAPI PFNGLBEGINQUERYPROC glBeginQuery;
AXLGLWAPI PFNGLBINDBUFFERPROC glBindBuffer;
AXLGLWAPI PFNGLBUFFERDATAPROC glBufferData;
AXLGLWAPI PFNGLBUFFERSUBDATAPROC glBufferSubData;
AXLGLWAPI PFNGLDELETEBUFFERSPROC glDeleteBuffers;
AXLGLWAPI PFNGLDELETEQUERIESPROC glDeleteQueries;
AXLGLWAPI PFNGLENDQUERYPROC glEndQuery;
AXLGLWAPI PFNGLGENBUFFERSPROC glGenBuffers;
AXLGLWAPI PFNGLGENQUERIESPROC glGenQueries;
AXLGLWAPI PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
AXLGLWAPI PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
AXLGLWAPI PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
AXLGLWAPI PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
AXLGLWAPI PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
AXLGLWAPI PFNGLGETQUERYIVPROC glGetQueryiv;
AXLGLWAPI PFNGLISBUFFERPROC	glIsBuffer;
AXLGLWAPI PFNGLISQUERYPROC glIsQuery;
AXLGLWAPI PFNGLMAPBUFFERPROC glMapBuffer;
AXLGLWAPI PFNGLUNMAPBUFFERPROC glUnmapBuffer;
AXLGLWAPI bool V_1_5;

} // axl.glw.gl1
} // axl.glw
} // axl