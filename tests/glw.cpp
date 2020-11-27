#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Assert.hpp"
#include "lib.hpp"
#include <axl.glw/glw.hpp>
#include <axl.glw/gl.hpp>
#include <axl.glw/glext.hpp>
#include <axl.glw/gl1.hpp>
#include <axl.glw/gl2.hpp>
#include <axl.glw/gl3.hpp>
#include <axl.glw/gl4.hpp>

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl;
	using namespace axl::glw;
	using namespace axl::glw::gl;
	using namespace axl::glw::glext;
	using namespace axl::glw::gl1;
	using namespace axl::glw::gl2;
	using namespace axl::glw::gl3;
	using namespace axl::glw::gl4;
	printf("axl.glw - version %u.%u.%u  %s %s\n", axl::glw::lib::VERSION.major, axl::glw::lib::VERSION.minor, axl::glw::lib::VERSION.patch, cstrLibType(axl::glw::lib::LIBRARY_TYPE), cstrBuildType(axl::glw::lib::BUILD_TYPE));
	if(verbose) puts("----------------------------------------");
	atexit(axl::glw::cleanup);
	{
		InitError error;
		Assertv(!glGetString(GL_VERSION), verbose);
		Assertv(MAJOR_GL_VERSION == -1, verbose);
		Assertv(MINOR_GL_VERSION == -1, verbose);
		Assertv(NUM_GL_EXTENSIONS == -1, verbose);
		Assertv((error = axl::glw::init(false)) == IERR_NO_CONTEXT, verbose);
		Assertv(!glGetString(GL_VERSION), verbose);
		Assertv(!glGetString(GL_EXTENSIONS), verbose);
		Assertv(MAJOR_GL_VERSION == -1, verbose);
		Assertv(MINOR_GL_VERSION == -1, verbose);
		Assertv(NUM_GL_EXTENSIONS == -1, verbose);
		Assertv((error = axl::glw::init()) == IERR_NONE, verbose);
		Assertv(glGetString(GL_VERSION), verbose);
		Assertv(glGetString(GL_EXTENSIONS), verbose);
		Assertv(MAJOR_GL_VERSION > 0, verbose);
		Assertv(MINOR_GL_VERSION >= 0, verbose);
		Assertv(NUM_GL_EXTENSIONS >= 0, verbose);
		GLint num_ext = 0;
		const char* ext = (const char*)glGetString(GL_EXTENSIONS);
		if(MAJOR_GL_VERSION >= 3)
		{
			glGetIntegerv(GL_NUM_EXTENSIONS, &num_ext);
		}
		else
		{
			if(ext)
			{
				int exit_loop = 0, empty = 1;
				for(int i=0; i<0xffffff; ++i)
				{
					switch(ext[i])
					{
						case '\0':
							exit_loop = 1;
							if(!empty) ++num_ext;
							break;
						case ' ':
							++num_ext;
							break;
						default:
							if(empty) empty = 0;
							continue;
					}
					if(exit_loop) break;
				}
			}
		}
		Assertv(num_ext == NUM_GL_EXTENSIONS, verbose);
		if(verbose) printf("GL_1_2: %hhd\n", V_1_2);
		if(V_1_2)
		{
			Assertv(glCopyTexSubImage3D , verbose);
			Assertv(glDrawRangeElements , verbose);
			Assertv(glTexImage3D , verbose);
			Assertv(glTexSubImage3D , verbose);
		}
		if(verbose) printf("GL_1_3: %hhd\n", V_1_3);
		if(V_1_3)
		{
			Assertv(glActiveTexture , verbose);
			Assertv(glClientActiveTexture , verbose);
			Assertv(glCompressedTexImage1D , verbose);
			Assertv(glCompressedTexImage2D , verbose);
			Assertv(glCompressedTexImage3D , verbose);
			Assertv(glCompressedTexSubImage1D , verbose);
			Assertv(glCompressedTexSubImage2D , verbose);
			Assertv(glCompressedTexSubImage3D , verbose);
			Assertv(glGetCompressedTexImage , verbose);
			Assertv(glLoadTransposeMatrixd , verbose);
			Assertv(glLoadTransposeMatrixf , verbose);
			Assertv(glMultTransposeMatrixd , verbose);
			Assertv(glMultTransposeMatrixf , verbose);
			Assertv(glMultiTexCoord1d , verbose);
			Assertv(glMultiTexCoord1dv , verbose);
			Assertv(glMultiTexCoord1f , verbose);
			Assertv(glMultiTexCoord1fv , verbose);
			Assertv(glMultiTexCoord1i , verbose);
			Assertv(glMultiTexCoord1iv , verbose);
			Assertv(glMultiTexCoord1s , verbose);
			Assertv(glMultiTexCoord1sv , verbose);
			Assertv(glMultiTexCoord2d , verbose);
			Assertv(glMultiTexCoord2dv , verbose);
			Assertv(glMultiTexCoord2f , verbose);
			Assertv(glMultiTexCoord2fv , verbose);
			Assertv(glMultiTexCoord2i , verbose);
			Assertv(glMultiTexCoord2iv , verbose);
			Assertv(glMultiTexCoord2s , verbose);
			Assertv(glMultiTexCoord2sv , verbose);
			Assertv(glMultiTexCoord3d , verbose);
			Assertv(glMultiTexCoord3dv , verbose);
			Assertv(glMultiTexCoord3f , verbose);
			Assertv(glMultiTexCoord3fv , verbose);
			Assertv(glMultiTexCoord3i , verbose);
			Assertv(glMultiTexCoord3iv , verbose);
			Assertv(glMultiTexCoord3s , verbose);
			Assertv(glMultiTexCoord3sv , verbose);
			Assertv(glMultiTexCoord4d , verbose);
			Assertv(glMultiTexCoord4dv , verbose);
			Assertv(glMultiTexCoord4f , verbose);
			Assertv(glMultiTexCoord4fv , verbose);
			Assertv(glMultiTexCoord4i , verbose);
			Assertv(glMultiTexCoord4iv , verbose);
			Assertv(glMultiTexCoord4s , verbose);
			Assertv(glMultiTexCoord4sv , verbose);
			Assertv(glSampleCoverage , verbose);
		}
		if(verbose) printf("GL_1_4: %hhd\n", V_1_4);
		if(V_1_4)
		{
			Assertv(glBlendColor , verbose);
			Assertv(glBlendEquation , verbose);
			Assertv(glBlendFuncSeparate , verbose);
			Assertv(glFogCoordPointer , verbose);
			Assertv(glFogCoordd , verbose);
			Assertv(glFogCoorddv , verbose);
			Assertv(glFogCoordf , verbose);
			Assertv(glFogCoordfv , verbose);
			Assertv(glMultiDrawArrays , verbose);
			Assertv(glMultiDrawElements , verbose);
			Assertv(glPointParameterf , verbose);
			Assertv(glPointParameterfv , verbose);
			Assertv(glPointParameteri , verbose);
			Assertv(glPointParameteriv , verbose);
			Assertv(glSecondaryColor3b , verbose);
			Assertv(glSecondaryColor3bv , verbose);
			Assertv(glSecondaryColor3d , verbose);
			Assertv(glSecondaryColor3dv , verbose);
			Assertv(glSecondaryColor3f , verbose);
			Assertv(glSecondaryColor3fv , verbose);
			Assertv(glSecondaryColor3i , verbose);
			Assertv(glSecondaryColor3iv , verbose);
			Assertv(glSecondaryColor3s , verbose);
			Assertv(glSecondaryColor3sv , verbose);
			Assertv(glSecondaryColor3ub , verbose);
			Assertv(glSecondaryColor3ubv , verbose);
			Assertv(glSecondaryColor3ui , verbose);
			Assertv(glSecondaryColor3uiv , verbose);
			Assertv(glSecondaryColor3us , verbose);
			Assertv(glSecondaryColor3usv , verbose);
			Assertv(glSecondaryColorPointer , verbose);
			Assertv(glWindowPos2d , verbose);
			Assertv(glWindowPos2dv , verbose);
			Assertv(glWindowPos2f , verbose);
			Assertv(glWindowPos2fv , verbose);
			Assertv(glWindowPos2i , verbose);
			Assertv(glWindowPos2iv , verbose);
			Assertv(glWindowPos2s , verbose);
			Assertv(glWindowPos2sv , verbose);
			Assertv(glWindowPos3d , verbose);
			Assertv(glWindowPos3dv , verbose);
			Assertv(glWindowPos3f , verbose);
			Assertv(glWindowPos3fv , verbose);
			Assertv(glWindowPos3i , verbose);
			Assertv(glWindowPos3iv , verbose);
			Assertv(glWindowPos3s , verbose);
			Assertv(glWindowPos3sv , verbose);
		}
		if(verbose) printf("GL_1_5: %hhd\n", V_1_5);
		if(V_1_5)
		{
			Assertv(glBeginQuery , verbose);
			Assertv(glBindBuffer , verbose);
			Assertv(glBufferData , verbose);
			Assertv(glBufferSubData , verbose);
			Assertv(glDeleteBuffers , verbose);
			Assertv(glDeleteQueries , verbose);
			Assertv(glEndQuery , verbose);
			Assertv(glGenBuffers , verbose);
			Assertv(glGenQueries , verbose);
			Assertv(glGetBufferParameteriv , verbose);
			Assertv(glGetBufferPointerv , verbose);
			Assertv(glGetBufferSubData , verbose);
			Assertv(glGetQueryObjectiv , verbose);
			Assertv(glGetQueryObjectuiv , verbose);
			Assertv(glGetQueryiv , verbose);
			Assertv(glIsBuffer , verbose);
			Assertv(glIsQuery , verbose);
			Assertv(glMapBuffer , verbose);
			Assertv(glUnmapBuffer , verbose);
		}
		if(verbose) printf("GL_2_0: %hhd\n", V_2_0);
		if(V_2_0)
		{
			Assertv(glAttachShader , verbose);
			Assertv(glBindAttribLocation , verbose);
			Assertv(glBlendEquationSeparate , verbose);
			Assertv(glCompileShader , verbose);
			Assertv(glCreateProgram , verbose);
			Assertv(glCreateShader , verbose);
			Assertv(glDeleteProgram , verbose);
			Assertv(glDeleteShader , verbose);
			Assertv(glDetachShader , verbose);
			Assertv(glDisableVertexAttribArray , verbose);
			Assertv(glDrawBuffers , verbose);
			Assertv(glEnableVertexAttribArray , verbose);
			Assertv(glGetActiveAttrib , verbose);
			Assertv(glGetActiveUniform , verbose);
			Assertv(glGetAttachedShaders , verbose);
			Assertv(glGetAttribLocation , verbose);
			Assertv(glGetProgramInfoLog , verbose);
			Assertv(glGetProgramiv , verbose);
			Assertv(glGetShaderInfoLog , verbose);
			Assertv(glGetShaderSource , verbose);
			Assertv(glGetShaderiv , verbose);
			Assertv(glGetUniformLocation , verbose);
			Assertv(glGetUniformfv , verbose);
			Assertv(glGetUniformiv , verbose);
			Assertv(glGetVertexAttribPointerv , verbose);
			Assertv(glGetVertexAttribdv , verbose);
			Assertv(glGetVertexAttribfv , verbose);
			Assertv(glGetVertexAttribiv , verbose);
			Assertv(glIsProgram , verbose);
			Assertv(glIsShader , verbose);
			Assertv(glLinkProgram , verbose);
			Assertv(glShaderSource , verbose);
			Assertv(glStencilFuncSeparate , verbose);
			Assertv(glStencilMaskSeparate , verbose);
			Assertv(glStencilOpSeparate , verbose);
			Assertv(glUniform1f , verbose);
			Assertv(glUniform1fv , verbose);
			Assertv(glUniform1i , verbose);
			Assertv(glUniform1iv , verbose);
			Assertv(glUniform2f , verbose);
			Assertv(glUniform2fv , verbose);
			Assertv(glUniform2i , verbose);
			Assertv(glUniform2iv , verbose);
			Assertv(glUniform3f , verbose);
			Assertv(glUniform3fv , verbose);
			Assertv(glUniform3i , verbose);
			Assertv(glUniform3iv , verbose);
			Assertv(glUniform4f , verbose);
			Assertv(glUniform4fv , verbose);
			Assertv(glUniform4i , verbose);
			Assertv(glUniform4iv , verbose);
			Assertv(glUniformMatrix2fv , verbose);
			Assertv(glUniformMatrix3fv , verbose);
			Assertv(glUniformMatrix4fv , verbose);
			Assertv(glUseProgram , verbose);
			Assertv(glValidateProgram , verbose);
			Assertv(glVertexAttrib1d , verbose);
			Assertv(glVertexAttrib1dv , verbose);
			Assertv(glVertexAttrib1f , verbose);
			Assertv(glVertexAttrib1fv , verbose);
			Assertv(glVertexAttrib1s , verbose);
			Assertv(glVertexAttrib1sv , verbose);
			Assertv(glVertexAttrib2d , verbose);
			Assertv(glVertexAttrib2dv , verbose);
			Assertv(glVertexAttrib2f , verbose);
			Assertv(glVertexAttrib2fv , verbose);
			Assertv(glVertexAttrib2s , verbose);
			Assertv(glVertexAttrib2sv , verbose);
			Assertv(glVertexAttrib3d , verbose);
			Assertv(glVertexAttrib3dv , verbose);
			Assertv(glVertexAttrib3f , verbose);
			Assertv(glVertexAttrib3fv , verbose);
			Assertv(glVertexAttrib3s , verbose);
			Assertv(glVertexAttrib3sv , verbose);
			Assertv(glVertexAttrib4Nbv , verbose);
			Assertv(glVertexAttrib4Niv , verbose);
			Assertv(glVertexAttrib4Nsv , verbose);
			Assertv(glVertexAttrib4Nub , verbose);
			Assertv(glVertexAttrib4Nubv , verbose);
			Assertv(glVertexAttrib4Nuiv , verbose);
			Assertv(glVertexAttrib4Nusv , verbose);
			Assertv(glVertexAttrib4bv , verbose);
			Assertv(glVertexAttrib4d , verbose);
			Assertv(glVertexAttrib4dv , verbose);
			Assertv(glVertexAttrib4f , verbose);
			Assertv(glVertexAttrib4fv , verbose);
			Assertv(glVertexAttrib4iv , verbose);
			Assertv(glVertexAttrib4s , verbose);
			Assertv(glVertexAttrib4sv , verbose);
			Assertv(glVertexAttrib4ubv , verbose);
			Assertv(glVertexAttrib4uiv , verbose);
			Assertv(glVertexAttrib4usv , verbose);
			Assertv(glVertexAttribPointer , verbose);
		}
		if(verbose) printf("GL_2_1: %hhd\n", V_2_1);
		if(V_2_1)
		{
			Assertv(glUniformMatrix2x3fv , verbose);
			Assertv(glUniformMatrix2x4fv , verbose);
			Assertv(glUniformMatrix3x2fv , verbose);
			Assertv(glUniformMatrix3x4fv , verbose);
			Assertv(glUniformMatrix4x2fv , verbose);
			Assertv(glUniformMatrix4x3fv , verbose);
		}
		if(verbose) printf("GL_3_0: %hhd\n", V_3_0);
		if(V_3_0)
		{
			Assertv(glBeginConditionalRender , verbose);
			Assertv(glBeginTransformFeedback , verbose);
			Assertv(glBindFragDataLocation , verbose);
			Assertv(glClampColor , verbose);
			Assertv(glClearBufferfi , verbose);
			Assertv(glClearBufferfv , verbose);
			Assertv(glClearBufferiv , verbose);
			Assertv(glClearBufferuiv , verbose);
			Assertv(glColorMaski , verbose);
			Assertv(glDisablei , verbose);
			Assertv(glEnablei , verbose);
			Assertv(glEndConditionalRender , verbose);
			Assertv(glEndTransformFeedback , verbose);
			Assertv(glGetBooleani_v , verbose);
			Assertv(glGetFragDataLocation , verbose);
			Assertv(glGetStringi , verbose);
			Assertv(glGetTexParameterIiv , verbose);
			Assertv(glGetTexParameterIuiv , verbose);
			Assertv(glGetTransformFeedbackVarying , verbose);
			Assertv(glGetUniformuiv , verbose);
			Assertv(glGetVertexAttribIiv , verbose);
			Assertv(glGetVertexAttribIuiv , verbose);
			Assertv(glIsEnabledi , verbose);
			Assertv(glTexParameterIiv , verbose);
			Assertv(glTexParameterIuiv , verbose);
			Assertv(glTransformFeedbackVaryings , verbose);
			Assertv(glUniform1ui , verbose);
			Assertv(glUniform1uiv , verbose);
			Assertv(glUniform2ui , verbose);
			Assertv(glUniform2uiv , verbose);
			Assertv(glUniform3ui , verbose);
			Assertv(glUniform3uiv , verbose);
			Assertv(glUniform4ui , verbose);
			Assertv(glUniform4uiv , verbose);
			Assertv(glVertexAttribI1i , verbose);
			Assertv(glVertexAttribI1iv , verbose);
			Assertv(glVertexAttribI1ui , verbose);
			Assertv(glVertexAttribI1uiv , verbose);
			Assertv(glVertexAttribI2i , verbose);
			Assertv(glVertexAttribI2iv , verbose);
			Assertv(glVertexAttribI2ui , verbose);
			Assertv(glVertexAttribI2uiv , verbose);
			Assertv(glVertexAttribI3i , verbose);
			Assertv(glVertexAttribI3iv , verbose);
			Assertv(glVertexAttribI3ui , verbose);
			Assertv(glVertexAttribI3uiv , verbose);
			Assertv(glVertexAttribI4bv , verbose);
			Assertv(glVertexAttribI4i , verbose);
			Assertv(glVertexAttribI4iv , verbose);
			Assertv(glVertexAttribI4sv , verbose);
			Assertv(glVertexAttribI4ubv , verbose);
			Assertv(glVertexAttribI4ui , verbose);
			Assertv(glVertexAttribI4uiv , verbose);
			Assertv(glVertexAttribI4usv , verbose);
			Assertv(glVertexAttribIPointer , verbose);
		}
		if(verbose) printf("GL_3_1: %hhd\n", V_3_1);
		if(V_3_1)
		{
			Assertv(glDrawArraysInstanced , verbose);
			Assertv(glDrawElementsInstanced , verbose);
			Assertv(glPrimitiveRestartIndex , verbose);
			Assertv(glTexBuffer , verbose);
		}
		if(verbose) printf("GL_3_2: %hhd\n", V_3_2);
		if(V_3_2)
		{
			Assertv(glFramebufferTexture , verbose);
			Assertv(glGetBufferParameteri64v , verbose);
			Assertv(glGetInteger64i_v , verbose);
		}
		if(verbose) printf("GL_3_3: %hhd\n", V_3_3);
		if(V_3_3)
		{
			Assertv(glVertexAttribDivisor , verbose);
		}
		if(verbose) printf("GL_4_0: %hhd\n", V_4_0);
		if(V_4_0)
		{
			Assertv(glBlendEquationSeparatei , verbose);
			Assertv(glBlendEquationi , verbose);
			Assertv(glBlendFuncSeparatei , verbose);
			Assertv(glBlendFunci , verbose);
			Assertv(glMinSampleShading , verbose);
		}
		if(verbose) printf("GL_4_1: %hhd\n", V_4_1);
		if(verbose) printf("GL_4_2: %hhd\n", V_4_2);
		if(verbose) printf("GL_4_3: %hhd\n", V_4_3);
		if(verbose) printf("GL_4_4: %hhd\n", V_4_4);
		if(verbose) printf("GL_4_5: %hhd\n", V_4_5);
		if(V_4_5)
		{
			Assertv(glGetGraphicsResetStatus , verbose);
			Assertv(glGetnCompressedTexImage , verbose);
			Assertv(glGetnTexImage , verbose);
			Assertv(glGetnUniformdv , verbose);
		}
		if(verbose) printf("GL_4_6: %hhd\n", V_4_6);
		if(V_4_6)
		{
			Assertv(glMultiDrawArraysIndirectCount , verbose);
			Assertv(glMultiDrawElementsIndirectCount , verbose);
			Assertv(glSpecializeShader , verbose);
		}
		// glext
		if(verbose) printf("GL_arb_arrays_of_arrays: %hhd\n", GL_ARB_arrays_of_arrays);
		if(verbose) printf("GL_arb_base_instance: %hhd\n", GL_ARB_base_instance);
		if(GL_ARB_base_instance)
		{
			Assertv(glDrawArraysInstancedBaseInstance , verbose);
			Assertv(glDrawElementsInstancedBaseInstance , verbose);
			Assertv(glDrawElementsInstancedBaseVertexBaseInstance , verbose);
		}
		if(verbose) printf("GL_arb_blend_func_extended: %hhd\n", GL_ARB_blend_func_extended);
		if(GL_ARB_blend_func_extended)
		{	
			Assertv(glBindFragDataLocationIndexed , verbose);
			Assertv(glGetFragDataIndex , verbose);
		}
		if(verbose) printf("GL_arb_buffer_storage: %hhd\n", GL_ARB_buffer_storage);
		if(GL_ARB_buffer_storage)
		{	
			Assertv(glBufferStorage , verbose);
		}
		if(verbose) printf("GL_arb_clear_buffer_object: %hhd\n", GL_ARB_clear_buffer_object);
		if(GL_ARB_clear_buffer_object)
		{	
			Assertv(glClearBufferData , verbose);
			Assertv(glClearBufferSubData , verbose);
			Assertv(glClearNamedBufferDataEXT , verbose);
			Assertv(glClearNamedBufferSubDataEXT , verbose);
		}
		if(verbose) printf("GL_arb_ES2_compatibility: %hhd\n", GL_ARB_ES2_compatibility);
		if(GL_ARB_ES2_compatibility)
		{	
			Assertv(glClearDepthf , verbose);
			Assertv(glDepthRangef , verbose);
			Assertv(glGetShaderPrecisionFormat , verbose);
			Assertv(glReleaseShaderCompiler , verbose);
			Assertv(glShaderBinary , verbose);
		}
		if(verbose) printf("GL_arb_ES3_compatibility: %hhd\n", GL_ARB_ES3_compatibility);
		if(verbose) printf("GL_arb_ES3_1_compatibility: %hhd\n", GL_ARB_ES3_1_compatibility);
		if(GL_ARB_ES3_1_compatibility)
		{	
			Assertv(glMemoryBarrierByRegion , verbose);
		}
		if(verbose) printf("GL_arb_ES3_2_compatibility: %hhd\n", GL_ARB_ES3_2_compatibility);
		if(GL_ARB_ES3_2_compatibility)
		{	
			Assertv(glPrimitiveBoundingBoxARB , verbose);
		}
		if(verbose) printf("GL_arb_imaging: %hhd\n", GL_ARB_imaging);
		if(GL_ARB_imaging)
		{	
			Assertv(glColorSubTable , verbose);
			Assertv(glColorTable , verbose);
			Assertv(glColorTableParameterfv , verbose);
			Assertv(glColorTableParameteriv , verbose);
			Assertv(glConvolutionFilter1D , verbose);
			Assertv(glConvolutionFilter2D , verbose);
			Assertv(glConvolutionParameterf , verbose);
			Assertv(glConvolutionParameterfv , verbose);
			Assertv(glConvolutionParameteri , verbose);
			Assertv(glConvolutionParameteriv , verbose);
			Assertv(glCopyColorSubTable , verbose);
			Assertv(glCopyColorTable , verbose);
			Assertv(glCopyConvolutionFilter1D , verbose);
			Assertv(glCopyConvolutionFilter2D , verbose);
			Assertv(glGetColorTable , verbose);
			Assertv(glGetColorTableParameterfv , verbose);
			Assertv(glGetColorTableParameteriv , verbose);
			Assertv(glGetConvolutionFilter , verbose);
			Assertv(glGetConvolutionParameterfv , verbose);
			Assertv(glGetConvolutionParameteriv , verbose);
			Assertv(glGetHistogram , verbose);
			Assertv(glGetHistogramParameterfv , verbose);
			Assertv(glGetHistogramParameteriv , verbose);
			Assertv(glGetMinmax , verbose);
			Assertv(glGetMinmaxParameterfv , verbose);
			Assertv(glGetMinmaxParameteriv , verbose);
			Assertv(glGetSeparableFilter , verbose);
			Assertv(glHistogram , verbose);
			Assertv(glMinmax , verbose);
			Assertv(glResetHistogram , verbose);
			Assertv(glResetMinmax , verbose);
			Assertv(glSeparableFilter2D , verbose);
		}
		if(verbose) printf("GL_arb_sync: %hhd\n", GL_ARB_sync);
		if(GL_ARB_sync)
		{	
			Assertv(glClientWaitSync , verbose);
			Assertv(glDeleteSync , verbose);
			Assertv(glFenceSync , verbose);
			Assertv(glGetInteger64v , verbose);
			Assertv(glGetSynciv , verbose);
			Assertv(glIsSync , verbose);
			Assertv(glWaitSync , verbose);
		}
		if(verbose) printf("GL_arb_tessellation_shader: %hhd\n", GL_ARB_tessellation_shader);
		if(GL_ARB_tessellation_shader)
		{	
			Assertv(glPatchParameterfv , verbose);
			Assertv(glPatchParameteri , verbose);
		}
		axl::glw::cleanup();
		Assertv(!glGetString(GL_VERSION), verbose);
		Assertv(!glGetString(GL_EXTENSIONS), verbose);
		Assertv(MAJOR_GL_VERSION == -1, verbose);
		Assertv(MINOR_GL_VERSION == -1, verbose);
		Assertv(NUM_GL_EXTENSIONS == -1, verbose);
	}
	puts("----------------------------------------");
	printf("# %d Failed!\n", Assert::_num_failed_tests);
	return Assert::_num_failed_tests;
}