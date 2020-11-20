#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Assert.hpp"
#include "lib.hpp"
#include <axl.glw/wglext.hpp>

void testFunctions(bool verbose);

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl;
	// using namespace axl::glw;
	using namespace axl::glw::wglext;
	printf("axl.glw - version %u.%u.%u  %s %s\n", axl::glw::lib::VERSION.major, axl::glw::lib::VERSION.minor, axl::glw::lib::VERSION.patch, cstrLibType(axl::glw::lib::LIBRARY_TYPE), cstrBuildType(axl::glw::lib::BUILD_TYPE));
	if(verbose) puts("----------------------------------------");
	atexit(cleanup);
	IError error;
	Assertv((error = init(false)) == IERR_NO_CONTEXT, verbose);
	Assertv((error = init(true)) == IERR_NONE, verbose);
	testFunctions(verbose);
	puts("----------------------------------------");
	printf("# %d Failed!\n", Assert::_num_failed_tests);
	return Assert::_num_failed_tests;
}

void testFunctions(bool verbose)
{
	using namespace axl::glw::wglext;
	// WGL_ARB_buffer_region
	if(verbose) printf("WGL_ARB_buffer_region: %hhd\n", WGL_ARB_buffer_region);
	if(WGL_ARB_buffer_region)
	{
		Assertv(wglCreateBufferRegionARB, verbose);
		Assertv(wglDeleteBufferRegionARB, verbose);
		Assertv(wglSaveBufferRegionARB, verbose);
		Assertv(wglRestoreBufferRegionARB, verbose);
	}
	// WGL_ARB_context_flush_control
	if(verbose) printf("WGL_ARB_context_flush_control: %hhd\n", WGL_ARB_context_flush_control);
	// WGL_ARB_create_context
	if(verbose) printf("WGL_ARB_create_context: %hhd\n", WGL_ARB_create_context);
	if(WGL_ARB_create_context)
	{
		Assertv(wglCreateContextAttribsARB, verbose);
	}
	// WGL_ARB_create_context_no_error
	if(verbose) printf("WGL_ARB_create_context_no_error: %hhd\n", WGL_ARB_create_context_no_error);
	// WGL_ARB_create_context_profile
	if(verbose) printf("WGL_ARB_create_context_profile: %hhd\n", WGL_ARB_create_context_profile);
	// WGL_ARB_create_context_robustness
	if(verbose) printf("WGL_ARB_create_context_robustness: %hhd\n", WGL_ARB_create_context_robustness);
	// WGL_ARB_extensions_string
	if(verbose) printf("WGL_ARB_extensions_string: %hhd\n", WGL_ARB_extensions_string);
	if(WGL_ARB_create_context)
	{
		Assertv(wglGetExtensionsStringARB, verbose);
	}
	// WGL_ARB_framebuffer_sRGB
	if(verbose) printf("WGL_ARB_framebuffer_sRGB: %hhd\n", WGL_ARB_framebuffer_sRGB);
	// WGL_ARB_make_current_read
	if(verbose) printf("WGL_ARB_make_current_read: %hhd\n", WGL_ARB_make_current_read);
	if(WGL_ARB_make_current_read)
	{
		Assertv(wglMakeContextCurrentARB, verbose);
		Assertv(wglGetCurrentReadDCARB, verbose);
	}
	// WGL_ARB_multisample
	if(verbose) printf("WGL_ARB_multisample: %hhd\n", WGL_ARB_multisample);
	// WGL_ARB_pbuffer
	if(verbose) printf("WGL_ARB_pbuffer: %hhd\n", WGL_ARB_pbuffer);
	if(WGL_ARB_pbuffer)
	{
		Assertv(wglCreatePbufferARB, verbose);
		Assertv(wglGetPbufferDCARB, verbose);
		Assertv(wglReleasePbufferDCARB, verbose);
		Assertv(wglDestroyPbufferARB, verbose);
		Assertv(wglQueryPbufferARB, verbose);
	}
	// WGL_ARB_pixel_format
	if(verbose) printf("WGL_ARB_pixel_format: %hhd\n", WGL_ARB_pixel_format);
	if(WGL_ARB_pixel_format)
	{
		Assertv(wglGetPixelFormatAttribivARB, verbose);
		Assertv(wglGetPixelFormatAttribfvARB, verbose);
		Assertv(wglChoosePixelFormatARB, verbose);
	}
	// WGL_ARB_pixel_format_float
	if(verbose) printf("WGL_ARB_pixel_format_float: %hhd\n", WGL_ARB_pixel_format_float);
	// WGL_ARB_render_texture
	if(verbose) printf("WGL_ARB_render_texture: %hhd\n", WGL_ARB_render_texture);
	if(WGL_ARB_render_texture)
	{
		Assertv(wglBindTexImageARB, verbose);
		Assertv(wglReleaseTexImageARB, verbose);
		Assertv(wglSetPbufferAttribARB, verbose);
	}
	// WGL_ARB_robustness_application_isolation
	if(verbose) printf("WGL_ARB_robustness_application_isolation: %hhd\n", WGL_ARB_robustness_application_isolation);
	// WGL_ARB_robustness_share_group_isolation
	if(verbose) printf("WGL_ARB_robustness_share_group_isolation: %hhd\n", WGL_ARB_robustness_share_group_isolation);
	// WGL_3DFX_multisample
	if(verbose) printf("WGL_3DFX_multisample: %hhd\n",WGL_3DFX_multisample);
	// WGL_3DL_stereo_control
	if(verbose) printf("WGL_3DL_stereo_control: %hhd\n",WGL_3DL_stereo_control);
	if(WGL_3DL_stereo_control) 
	{
		Assertv(wglSetStereoEmitterState3DL, verbose);
	}
	// WGL_AMD_gpu_association
	if(verbose) printf("WGL_AMD_gpu_association: %hhd\n",WGL_AMD_gpu_association);
	if(WGL_AMD_gpu_association)
	{
		Assertv(wglGetGPUIDsAMD, verbose);
		Assertv(wglGetGPUInfoAMD, verbose);
		Assertv(wglGetContextGPUIDAMD, verbose);
		Assertv(wglCreateAssociatedContextAMD, verbose);
		Assertv(wglCreateAssociatedContextAttribsAMD, verbose);
		Assertv(wglDeleteAssociatedContextAMD, verbose);
		Assertv(wglMakeAssociatedContextCurrentAMD, verbose);
		Assertv(wglGetCurrentAssociatedContextAMD, verbose);
		Assertv(wglBlitContextFramebufferAMD, verbose);
	}
	// WGL_ATI_pixel_format_float
	if(verbose) printf("WGL_ATI_pixel_format_float: %hhd\n",WGL_ATI_pixel_format_float);
	// WGL_ATI_render_texture_rectangle
	if(verbose) printf("WGL_ATI_render_texture_rectangle: %hhd\n",WGL_ATI_render_texture_rectangle);
	// WGL_EXT_colorspace
	if(verbose) printf("WGL_EXT_colorspace: %hhd\n",WGL_EXT_colorspace);
	// WGL_EXT_create_context_es2_profile
	if(verbose) printf("WGL_EXT_create_context_es2_profile: %hhd\n",WGL_EXT_create_context_es2_profile);
	// WGL_EXT_create_context_es_profile
	if(verbose) printf("WGL_EXT_create_context_es_profile: %hhd\n",WGL_EXT_create_context_es_profile);
	// WGL_EXT_depth_float
	if(verbose) printf("WGL_EXT_depth_float: %hhd\n",WGL_EXT_depth_float);
	// WGL_EXT_display_color_table
	if(verbose) printf("WGL_EXT_display_color_table: %hhd\n",WGL_EXT_display_color_table);
	if(WGL_EXT_display_color_table)
	{
		Assertv(wglCreateDisplayColorTableEXT, verbose);
		Assertv(wglLoadDisplayColorTableEXT, verbose);
		Assertv(wglBindDisplayColorTableEXT, verbose);
		Assertv(wglDestroyDisplayColorTableEXT, verbose);
	}
	// WGL_EXT_extensions_string
	if(verbose) printf("WGL_EXT_extensions_string: %hhd\n",WGL_EXT_extensions_string);
	if(WGL_EXT_extensions_string)
	{
		Assertv(wglGetExtensionsStringEXT, verbose);
	}
	// WGL_EXT_framebuffer_sRGB
	if(verbose) printf("WGL_EXT_framebuffer_sRGB: %hhd\n",WGL_EXT_framebuffer_sRGB);
	// WGL_EXT_make_current_read
	if(verbose) printf("WGL_EXT_make_current_read: %hhd\n",WGL_EXT_make_current_read);
	if(WGL_EXT_make_current_read)
	{
		Assertv(wglMakeContextCurrentEXT, verbose);
		Assertv(wglGetCurrentReadDCEXT, verbose);
	}
	// WGL_EXT_multisample
	if(verbose) printf("WGL_EXT_multisample: %hhd\n",WGL_EXT_multisample);
	// WGL_EXT_pbuffer
	if(verbose) printf("WGL_EXT_pbuffer: %hhd\n",WGL_EXT_pbuffer);
	if(WGL_EXT_pbuffer)
	{
		Assertv(wglCreatePbufferEXT, verbose);
		Assertv(wglGetPbufferDCEXT, verbose);
		Assertv(wglReleasePbufferDCEXT, verbose);
		Assertv(wglDestroyPbufferEXT, verbose);
		Assertv(wglQueryPbufferEXT, verbose);
	}
	// WGL_EXT_pixel_format
	if(verbose) printf("WGL_EXT_pixel_format: %hhd\n",WGL_EXT_pixel_format);
	if(WGL_EXT_pixel_format)
	{
		Assertv(wglGetPixelFormatAttribivEXT, verbose);
		Assertv(wglGetPixelFormatAttribfvEXT, verbose);
		Assertv(wglChoosePixelFormatEXT, verbose);
	}
	// WGL_EXT_pixel_format_packed_float
	if(verbose) printf("WGL_EXT_pixel_format_packed_float: %hhd\n",WGL_EXT_pixel_format_packed_float);
	// WGL_EXT_swap_control
	if(verbose) printf("WGL_EXT_swap_control: %hhd\n",WGL_EXT_swap_control);
	if(WGL_EXT_swap_control)
	{
		Assertv(wglSwapIntervalEXT, verbose);
		Assertv(wglGetSwapIntervalEXT, verbose);
	}
	// WGL_EXT_swap_control_tear
	if(verbose) printf("WGL_EXT_swap_control_tear: %hhd\n",WGL_EXT_swap_control_tear);
	// WGL_I3D_digital_video_control
	if(verbose) printf("WGL_I3D_digital_video_control: %hhd\n",WGL_I3D_digital_video_control);
	if(WGL_I3D_digital_video_control)
	{
		Assertv(wglGetDigitalVideoParametersI3D, verbose);
		Assertv(wglSetDigitalVideoParametersI3D, verbose);
	}
	// WGL_I3D_gamma
	if(verbose) printf("WGL_I3D_gamma: %hhd\n",WGL_I3D_gamma);
	if(WGL_I3D_gamma)
	{
		Assertv(wglGetGammaTableParametersI3D, verbose);
		Assertv(wglSetGammaTableParametersI3D, verbose);
		Assertv(wglGetGammaTableI3D, verbose);
		Assertv(wglSetGammaTableI3D, verbose);
	}
	// WGL_I3D_genlock
	if(verbose) printf("WGL_I3D_genlock: %hhd\n",WGL_I3D_genlock);
	if(WGL_I3D_genlock)
	{
		Assertv(wglEnableGenlockI3D, verbose);
		Assertv(wglDisableGenlockI3D, verbose);
		Assertv(wglIsEnabledGenlockI3D, verbose);
		Assertv(wglGenlockSourceI3D, verbose);
		Assertv(wglGetGenlockSourceI3D, verbose);
		Assertv(wglGenlockSourceEdgeI3D, verbose);
		Assertv(wglGetGenlockSourceEdgeI3D, verbose);
		Assertv(wglGenlockSampleRateI3D, verbose);
		Assertv(wglGetGenlockSampleRateI3D, verbose);
		Assertv(wglGenlockSourceDelayI3D, verbose);
		Assertv(wglGetGenlockSourceDelayI3D, verbose);
		Assertv(wglQueryGenlockMaxSourceDelayI3D, verbose);
	}
	// WGL_I3D_image_buffer
	if(verbose) printf("WGL_I3D_image_buffer: %hhd\n",WGL_I3D_image_buffer);
	if(WGL_I3D_image_buffer)
	{
		Assertv(wglCreateImageBufferI3D, verbose);
		Assertv(wglDestroyImageBufferI3D, verbose);
		Assertv(wglAssociateImageBufferEventsI3D, verbose);
		Assertv(wglReleaseImageBufferEventsI3D, verbose);
	}
	// WGL_I3D_swap_frame_lock
	if(verbose) printf("WGL_I3D_swap_frame_lock: %hhd\n",WGL_I3D_swap_frame_lock);
	if(WGL_I3D_swap_frame_lock)
	{
		Assertv(wglEnableFrameLockI3D, verbose);
		Assertv(wglDisableFrameLockI3D, verbose);
		Assertv(wglIsEnabledFrameLockI3D, verbose);
		Assertv(wglQueryFrameLockMasterI3D, verbose);
	}
	// WGL_I3D_swap_frame_usage
	if(verbose) printf("WGL_I3D_swap_frame_usage: %hhd\n",WGL_I3D_swap_frame_usage);
	if(WGL_I3D_swap_frame_usage)
	{
		Assertv(wglGetFrameUsageI3D, verbose);
		Assertv(wglBeginFrameTrackingI3D, verbose);
		Assertv(wglEndFrameTrackingI3D, verbose);
		Assertv(wglQueryFrameTrackingI3D, verbose);
	}
	// WGL_NV_DX_interop
	if(verbose) printf("WGL_ARB_context_flush_control: %hhd\n", WGL_ARB_context_flush_control);
	if(WGL_ARB_context_flush_control)
	{
		Assertv(wglDXSetResourceShareHandleNV, verbose);
		Assertv(wglDXOpenDeviceNV, verbose);
		Assertv(wglDXCloseDeviceNV, verbose);
		Assertv(wglDXRegisterObjectNV, verbose);
		Assertv(wglDXUnregisterObjectNV, verbose);
		Assertv(wglDXObjectAccessNV, verbose);
		Assertv(wglDXLockObjectsNV, verbose);
		Assertv(wglDXUnlockObjectsNV, verbose);
	}
	// WGL_NV_DX_interop2
	if(verbose) printf("WGL_NV_DX_interop2: %hhd\n",WGL_NV_DX_interop2);
	// WGL_NV_copy_image
	if(verbose) printf("WGL_NV_copy_image: %hhd\n",WGL_NV_copy_image);
	if(WGL_NV_copy_image)
	{
		Assertv(wglCopyImageSubDataNV, verbose);
	}
	// WGL_NV_delay_before_swap
	if(verbose) printf("WGL_NV_delay_before_swap: %hhd\n",WGL_NV_delay_before_swap);
	if(WGL_NV_delay_before_swap)
	{
		Assertv(wglDelayBeforeSwapNV, verbose);
	}
	// WGL_NV_float_buffer
	if(verbose) printf("WGL_NV_float_buffer: %hhd\n",WGL_NV_float_buffer);
	// WGL_NV_gpu_affinity
	if(verbose) printf("WGL_NV_gpu_affinity: %hhd\n",WGL_NV_gpu_affinity);
	if(WGL_NV_gpu_affinity)
	{
		Assertv(wglEnumGpusNV, verbose);
		Assertv(wglEnumGpuDevicesNV, verbose);
		Assertv(wglCreateAffinityDCNV, verbose);
		Assertv(wglEnumGpusFromAffinityDCNV, verbose);
		Assertv(wglDeleteDCNV, verbose);
	}
	// WGL_NV_multigpu_context
	if(verbose) printf("WGL_NV_multigpu_context: %hhd\n",WGL_NV_multigpu_context);
	// WGL_NV_multisample_coverage
	if(verbose) printf("WGL_NV_multisample_coverage: %hhd\n",WGL_NV_multisample_coverage);
	// WGL_NV_present_video
	if(verbose) printf("WGL_NV_present_video: %hhd\n",WGL_NV_present_video);
	if(WGL_NV_present_video)
	{
		Assertv(wglEnumerateVideoDevicesNV, verbose);
		Assertv(wglBindVideoDeviceNV, verbose);
		Assertv(wglQueryCurrentContextNV, verbose);
	}
	// WGL_NV_render_depth_texture
	if(verbose) printf("WGL_NV_render_depth_texture: %hhd\n",WGL_NV_render_depth_texture);
	// WGL_NV_render_texture_rectangle
	if(verbose) printf("WGL_NV_render_texture_rectangle: %hhd\n",WGL_NV_render_texture_rectangle);
	// WGL_NV_swap_group
	if(verbose) printf("WGL_NV_swap_group: %hhd\n",WGL_NV_swap_group);
	if(WGL_NV_swap_group)
	{
		Assertv(wglJoinSwapGroupNV, verbose);
		Assertv(wglBindSwapBarrierNV, verbose);
		Assertv(wglQuerySwapGroupNV, verbose);
		Assertv(wglQueryMaxSwapGroupsNV, verbose);
		Assertv(wglQueryFrameCountNV, verbose);
		Assertv(wglResetFrameCountNV, verbose);
	}
	// WGL_NV_vertex_array_range
	if(verbose) printf("WGL_NV_vertex_array_range: %hhd\n",WGL_NV_vertex_array_range);
	if(WGL_NV_vertex_array_range)
	{
		Assertv(wglAllocateMemoryNV, verbose);
		Assertv(wglFreeMemoryNV, verbose);
	}
	// WGL_NV_video_capture
	if(verbose) printf("WGL_NV_video_capture: %hhd\n",WGL_NV_video_capture);
	if(WGL_NV_video_capture)
	{
		Assertv(wglBindVideoCaptureDeviceNV, verbose);
		Assertv(wglEnumerateVideoCaptureDevicesNV, verbose);
		Assertv(wglLockVideoCaptureDeviceNV, verbose);
		Assertv(wglQueryVideoCaptureDeviceNV, verbose);
		Assertv(wglReleaseVideoCaptureDeviceNV, verbose);
	}
	// WGL_NV_video_output
	if(verbose) printf("WGL_NV_video_output: %hhd\n",WGL_NV_video_output);
	if(WGL_NV_video_output)
	{
		Assertv(wglGetVideoDeviceNV, verbose);
		Assertv(wglReleaseVideoDeviceNV, verbose);
		Assertv(wglBindVideoImageNV, verbose);
		Assertv(wglReleaseVideoImageNV, verbose);
		Assertv(wglSendPbufferToVideoNV, verbose);
		Assertv(wglGetVideoInfoNV, verbose);
	}
	// WGL_OML_sync_control
	if(verbose) printf("WGL_OML_sync_control: %hhd\n",WGL_OML_sync_control);
	if(WGL_OML_sync_control)
	{
		Assertv(wglGetSyncValuesOML, verbose);
		Assertv(wglGetMscRateOML, verbose);
		Assertv(wglSwapBuffersMscOML, verbose);
		Assertv(wglSwapLayerBuffersMscOML, verbose);
		Assertv(wglWaitForMscOML, verbose);
		Assertv(wglWaitForSbcOML, verbose);
	}
}