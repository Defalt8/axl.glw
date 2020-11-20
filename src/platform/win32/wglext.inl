#include <cstring>
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#include <axl.glw/dummy.hpp>
#include <axl.glw/wglext.hpp>

extern axl::glw::Dummy GlobalDummy;

namespace axl {
namespace glw {
namespace wglext {

// WGL_ARB_buffer_region
PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)0;
PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)0;
PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)0;
PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)0;
bool WGL_ARB_buffer_region = 0;
// WGL_ARB_context_flush_control
bool WGL_ARB_context_flush_control = 0;
// WGL_ARB_create_context
PFNWGLCREATECONTEXTATTRIBSARBPROC wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)0;
bool WGL_ARB_create_context = 0;
// WGL_ARB_create_context_no_error
bool WGL_ARB_create_context_no_error = 0;
// WGL_ARB_create_context_profile
bool WGL_ARB_create_context_profile = 0;
// WGL_ARB_create_context_robustness
bool WGL_ARB_create_context_robustness = 0;
// WGL_ARB_extensions_string
PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)0;
bool WGL_ARB_extensions_string = 0;
// WGL_ARB_framebuffer_sRGB
bool WGL_ARB_framebuffer_sRGB = 0;
// WGL_ARB_make_current_read
PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)0;
PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC)0;
bool WGL_ARB_make_current_read = 0;
// WGL_ARB_multisample
bool WGL_ARB_multisample = 0;
// WGL_ARB_pbuffer
PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)0;
PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)0;
PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)0;
PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)0;
PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)0;
bool WGL_ARB_pbuffer = 0;
// WGL_ARB_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)0;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)0;
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)0;
bool WGL_ARB_pixel_format = 0;
// WGL_ARB_pixel_format_float
bool WGL_ARB_pixel_format_float = 0;
// WGL_ARB_render_texture
PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)0;
PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)0;
PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)0;
bool WGL_ARB_render_texture = 0;
// WGL_ARB_robustness_application_isolation
bool WGL_ARB_robustness_application_isolation = 0;
// WGL_ARB_robustness_share_group_isolation
bool WGL_ARB_robustness_share_group_isolation = 0;
// WGL_3DFX_multisample
bool WGL_3DFX_multisample = 0;
// WGL_3DL_stereo_control
PFNWGLSETSTEREOEMITTERSTATE3DLPROC wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)0;
bool WGL_3DL_stereo_control = 0;
// WGL_AMD_gpu_association
PFNWGLGETGPUIDSAMDPROC wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC)0;
PFNWGLGETGPUINFOAMDPROC wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC)0;
PFNWGLGETCONTEXTGPUIDAMDPROC wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC)0;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)0;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)0;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)0;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)0;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)0;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)0;
bool WGL_AMD_gpu_association = 0;
// WGL_ATI_pixel_format_float
bool WGL_ATI_pixel_format_float = 0;
// WGL_ATI_render_texture_rectangle
bool WGL_ATI_render_texture_rectangle = 0;
// WGL_EXT_colorspace
bool WGL_EXT_colorspace = 0;
// WGL_EXT_create_context_es2_profile
bool WGL_EXT_create_context_es2_profile = 0;
// WGL_EXT_create_context_es_profile
bool WGL_EXT_create_context_es_profile = 0;
// WGL_EXT_depth_float
bool WGL_EXT_depth_float = 0;
// WGL_EXT_display_color_table
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)0;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)0;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)0;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)0;
bool WGL_EXT_display_color_table = 0;
// WGL_EXT_extensions_string
PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)0;
bool WGL_EXT_extensions_string = 0;
// WGL_EXT_framebuffer_sRGB
bool WGL_EXT_framebuffer_sRGB = 0;
// WGL_EXT_make_current_read
PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)0;
PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)0;
bool WGL_EXT_make_current_read = 0;
// WGL_EXT_multisample
bool WGL_EXT_multisample = 0;
// WGL_EXT_pbuffer
PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)0;
PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)0;
PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)0;
PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)0;
PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)0;
bool WGL_EXT_pbuffer = 0;
// WGL_EXT_pixel_format
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)0;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)0;
PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)0;
bool WGL_EXT_pixel_format = 0;
// WGL_EXT_pixel_format_packed_float
bool WGL_EXT_pixel_format_packed_float = 0;
// WGL_EXT_swap_control
PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)0;
PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)0;
bool WGL_EXT_swap_control = 0;
// WGL_EXT_swap_control_tear
bool WGL_EXT_swap_control_tear = 0;
// WGL_I3D_digital_video_control
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)0;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)0;
bool WGL_I3D_digital_video_control = 0;
// WGL_I3D_gamma
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)0;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)0;
PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC)0;
PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC)0;
bool WGL_I3D_gamma = 0;
// WGL_I3D_genlock
PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC)0;
PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC)0;
PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC)0;
PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC)0;
PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC)0;
PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)0;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)0;
PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)0;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)0;
PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)0;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)0;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)0;
bool WGL_I3D_genlock = 0;
// WGL_I3D_image_buffer
PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)0;
PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)0;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)0;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)0;
bool WGL_I3D_image_buffer = 0;
// WGL_I3D_swap_frame_lock
PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC)0;
PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC)0;
PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)0;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)0;
bool WGL_I3D_swap_frame_lock = 0;
// WGL_I3D_swap_frame_usage
PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC)0;
PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)0;
PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC)0;
PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)0;
bool WGL_I3D_swap_frame_usage = 0;
// WGL_NV_DX_interop
PFNWGLDXSETRESOURCESHAREHANDLENVPROC wglDXSetResourceShareHandleNV;
PFNWGLDXOPENDEVICENVPROC wglDXOpenDeviceNV;
PFNWGLDXCLOSEDEVICENVPROC wglDXCloseDeviceNV;
PFNWGLDXREGISTEROBJECTNVPROC wglDXRegisterObjectNV;
PFNWGLDXUNREGISTEROBJECTNVPROC wglDXUnregisterObjectNV;
PFNWGLDXOBJECTACCESSNVPROC wglDXObjectAccessNV;
PFNWGLDXLOCKOBJECTSNVPROC wglDXLockObjectsNV;
PFNWGLDXUNLOCKOBJECTSNVPROC wglDXUnlockObjectsNV;
bool WGL_NV_DX_interop = 0;
// WGL_NV_DX_interop2
bool WGL_NV_DX_interop2 = 0;
// WGL_NV_copy_image
PFNWGLCOPYIMAGESUBDATANVPROC wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC)0;
bool WGL_NV_copy_image = 0;
// WGL_NV_delay_before_swap
PFNWGLDELAYBEFORESWAPNVPROC wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC)0;
bool WGL_NV_delay_before_swap = 0;
// WGL_NV_float_buffer
bool WGL_NV_float_buffer = 0;
// WGL_NV_gpu_affinity
PFNWGLENUMGPUSNVPROC wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC)0;
PFNWGLENUMGPUDEVICESNVPROC wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC)0;
PFNWGLCREATEAFFINITYDCNVPROC wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC)0;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)0;
PFNWGLDELETEDCNVPROC wglDeleteDCNV = (PFNWGLDELETEDCNVPROC)0;
bool WGL_NV_gpu_affinity = 0;
// WGL_NV_multigpu_context
bool WGL_NV_multigpu_context = 0;
// WGL_NV_multisample_coverage
bool WGL_NV_multisample_coverage = 0;
// WGL_NV_present_video
PFNWGLENUMERATEVIDEODEVICESNVPROC wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC)0;
PFNWGLBINDVIDEODEVICENVPROC wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC)0;
PFNWGLQUERYCURRENTCONTEXTNVPROC wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC)0;
bool WGL_NV_present_video = 0;
// WGL_NV_render_depth_texture
bool WGL_NV_render_depth_texture = 0;
// WGL_NV_render_texture_rectangle
bool WGL_NV_render_texture_rectangle = 0;
// WGL_NV_swap_group
PFNWGLJOINSWAPGROUPNVPROC wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC)0;
PFNWGLBINDSWAPBARRIERNVPROC wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC)0;
PFNWGLQUERYSWAPGROUPNVPROC wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC)0;
PFNWGLQUERYMAXSWAPGROUPSNVPROC wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)0;
PFNWGLQUERYFRAMECOUNTNVPROC wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC)0;
PFNWGLRESETFRAMECOUNTNVPROC wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC)0;
bool WGL_NV_swap_group = 0;
// WGL_NV_vertex_array_range
PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC)0;
PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC)0;
bool WGL_NV_vertex_array_range = 0;
// WGL_NV_video_capture
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)0;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)0;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)0;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)0;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)0;
bool WGL_NV_video_capture = 0;
// WGL_NV_video_output
PFNWGLGETVIDEODEVICENVPROC wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC)0;
PFNWGLRELEASEVIDEODEVICENVPROC wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC)0;
PFNWGLBINDVIDEOIMAGENVPROC wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC)0;
PFNWGLRELEASEVIDEOIMAGENVPROC wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC)0;
PFNWGLSENDPBUFFERTOVIDEONVPROC wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC)0;
PFNWGLGETVIDEOINFONVPROC wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC)0;
bool WGL_NV_video_output = 0;
// WGL_OML_sync_control
PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC)0;
PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC)0;
PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC)0;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)0;
PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC)0;
PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC)0;
bool WGL_OML_sync_control = 0;

IError init(bool use_dummy)
{
	static bool initialized = false;
	if(initialized) return IERR_NONE;
	if(use_dummy && (glw::Dummy::IERR_NONE != GlobalDummy.init() || false == GlobalDummy.makeCurrent())) return IERR_DUMMY;
	if(!wglGetCurrentContext()) return IERR_NO_CONTEXT;
	// WGL_ARB_extensions_string
	if(!wglGetExtensionsStringARB)
	{
		wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");
		if(wglGetExtensionsStringARB) WGL_ARB_extensions_string = true;
	}
	// WGL_ARB_buffer_region
	if(!WGL_ARB_buffer_region && false != wglext::checkExtension("WGL_ARB_buffer_region"))
	{
		wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)wglGetProcAddress("wglCreateBufferRegionARB");
		wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)wglGetProcAddress("wglDeleteBufferRegionARB");
		wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC)wglGetProcAddress("wglSaveBufferRegionARB");
		wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)wglGetProcAddress("wglRestoreBufferRegionARB");
		if(wglCreateBufferRegionARB) WGL_ARB_buffer_region = true;
	}
	// WGL_ARB_context_flush_control
	if(!WGL_ARB_context_flush_control && false != wglext::checkExtension("WGL_ARB_context_flush_control"))
	{
		WGL_ARB_context_flush_control = true;
	}
	// WGL_ARB_create_context
	if(!WGL_ARB_create_context && false != wglext::checkExtension("WGL_ARB_create_context"))
	{
		wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)wglGetProcAddress("wglCreateContextAttribsARB");
		if(wglCreateContextAttribsARB) WGL_ARB_create_context = true;
	}
	// WGL_ARB_create_context_no_error
	if(!WGL_ARB_create_context_no_error && false != wglext::checkExtension("WGL_ARB_create_context_no_error"))
	{
		WGL_ARB_create_context_no_error = true;
	}
	// WGL_ARB_create_context_profile
	if(!WGL_ARB_create_context_profile && false != wglext::checkExtension("WGL_ARB_create_context_profile"))
	{
		WGL_ARB_create_context_profile = true;
	}
	// WGL_ARB_create_context_robustness
	if(!WGL_ARB_create_context_robustness && wglext::checkExtension("WGL_ARB_create_context_robustness"))
	{
		WGL_ARB_create_context_robustness = true;
	}
	// WGL_ARB_framebuffer_sRGB
	if(!WGL_ARB_framebuffer_sRGB && wglext::checkExtension("WGL_ARB_framebuffer_sRGB"))
	{
		WGL_ARB_framebuffer_sRGB = true;
	}
	// WGL_ARB_make_current_read
	if(!WGL_ARB_make_current_read && wglext::checkExtension("WGL_ARB_make_current_read"))
	{
		wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)wglGetProcAddress("wglMakeContextCurrentARB");
		wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC)wglGetProcAddress("wglGetCurrentReadDCARB");
		if(wglMakeContextCurrentARB) WGL_ARB_make_current_read = true;
	}
	// WGL_ARB_multisample
	if(!WGL_ARB_multisample && wglext::checkExtension("WGL_ARB_multisample"))
	{
		WGL_ARB_multisample = true;
	}
	// WGL_ARB_pbuffer
	if(!WGL_ARB_pbuffer && wglext::checkExtension("WGL_ARB_pbuffer"))
	{
		wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC)wglGetProcAddress("wglCreatePbufferARB");
		wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC)wglGetProcAddress("wglGetPbufferDCARB");
		wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC)wglGetProcAddress("wglReleasePbufferDCARB");
		wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC)wglGetProcAddress("wglDestroyPbufferARB");
		wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC)wglGetProcAddress("wglQueryPbufferARB");
		if(wglCreatePbufferARB) WGL_ARB_pbuffer = true;
	}
	// WGL_ARB_pixel_format
	if(!WGL_ARB_pixel_format && wglext::checkExtension("WGL_ARB_pixel_format"))
	{
		wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribivARB");
		wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)wglGetProcAddress("wglGetPixelFormatAttribfvARB");
		wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)wglGetProcAddress("wglChoosePixelFormatARB");
		if(wglGetPixelFormatAttribivARB) WGL_ARB_pixel_format = true;
	}
	// WGL_ARB_pixel_format_float
	if(!WGL_ARB_pixel_format_float && wglext::checkExtension("WGL_ARB_pixel_format_float"))
	{
		WGL_ARB_pixel_format_float = true;
	}
	// WGL_ARB_render_texture
	if(!WGL_ARB_render_texture && wglext::checkExtension("WGL_ARB_render_texture"))
	{
		wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC)wglGetProcAddress("wglBindTexImageARB");
		wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC)wglGetProcAddress("wglReleaseTexImageARB");
		wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC)wglGetProcAddress("wglSetPbufferAttribARB");
		if(wglBindTexImageARB) WGL_ARB_render_texture = true;
	}
	// WGL_ARB_robustness_application_isolation
	if(!WGL_ARB_robustness_application_isolation && wglext::checkExtension("WGL_ARB_robustness_application_isol"))
	{
		WGL_ARB_robustness_application_isolation = true;
	}
	// WGL_ARB_robustness_share_group_isolation
	if(!WGL_ARB_robustness_share_group_isolation && wglext::checkExtension("WGL_ARB_robustness_share_group_isol"))
	{
		WGL_ARB_robustness_share_group_isolation = true;
	}
	// WGL_3DFX_multisample
	if(!WGL_3DFX_multisample && wglext::checkExtension("WGL_3DFX_multisample"))
	{
		WGL_3DFX_multisample = true;
	}
	// WGL_3DL_stereo_control
	if(!WGL_3DL_stereo_control && wglext::checkExtension("WGL_3DL_stereo_control"))
	{
		wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)wglGetProcAddress("wglSetStereoEmitterState3DL");
		if(wglSetStereoEmitterState3DL) WGL_3DL_stereo_control = true;
	}

	// WGL_AMD_gpu_association
	if(!WGL_AMD_gpu_association && wglext::checkExtension("WGL_AMD_gpu_association"))
	{
		wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC)wglGetProcAddress("wglGetGPUIDsAMD");
		wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC)wglGetProcAddress("wglGetGPUInfoAMD");
		wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC)wglGetProcAddress("wglGetContextGPUIDAMD");
		wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglCreateAssociatedContextAMD");
		wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)wglGetProcAddress("wglCreateAssociatedContextAttribsAMD");
		wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglDeleteAssociatedContextAMD");
		wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)wglGetProcAddress("wglMakeAssociatedContextCurrentAMD");
		wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)wglGetProcAddress("wglGetCurrentAssociatedContextAMD");
		wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)wglGetProcAddress("wglBlitContextFramebufferAMD");
		if(wglGetGPUIDsAMD) WGL_AMD_gpu_association = true;
	}
	// WGL_ATI_pixel_format_float
	if(!WGL_ATI_pixel_format_float && wglext::checkExtension("WGL_ATI_pixel_format_float"))
	{
		WGL_ATI_pixel_format_float = true;
	}
	// WGL_ATI_render_texture_rectangle
	if(!WGL_ATI_render_texture_rectangle && wglext::checkExtension("WGL_ATI_render_texture_rectangle"))
	{
		WGL_ATI_render_texture_rectangle = true;
	}
	// WGL_EXT_colorspace
	if(!WGL_EXT_colorspace && wglext::checkExtension("WGL_EXT_colorspace"))
	{
		WGL_EXT_colorspace = true;
	}
	// WGL_EXT_create_context_es2_profile
	if(!WGL_EXT_create_context_es2_profile && wglext::checkExtension("WGL_EXT_create_context_es2_profile"))
	{
		WGL_EXT_create_context_es2_profile = true;
	}
	// WGL_EXT_create_context_es_profile
	if(!WGL_EXT_create_context_es_profile && wglext::checkExtension("WGL_EXT_create_context_es_profile"))
	{
		WGL_EXT_create_context_es_profile = true;
	}
	// WGL_EXT_depth_float
	if(!WGL_EXT_depth_float && wglext::checkExtension("WGL_EXT_depth_float"))
	{
		WGL_EXT_depth_float = true;
	}
	// WGL_EXT_display_color_table
	if(!WGL_EXT_display_color_table && wglext::checkExtension("WGL_EXT_display_color_table"))
	{
		wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglCreateDisplayColorTableEXT");
		wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglLoadDisplayColorTableEXT");
		wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglBindDisplayColorTableEXT");
		wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)wglGetProcAddress("wglDestroyDisplayColorTableEXT");
		if(wglCreateDisplayColorTableEXT) WGL_EXT_display_color_table = true;
	}
	// WGL_EXT_extensions_string
	if(!WGL_EXT_extensions_string && wglext::checkExtension("WGL_EXT_extensions_string"))
	{
		wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)wglGetProcAddress("wglGetExtensionsStringEXT");
		if(wglGetExtensionsStringEXT) WGL_EXT_extensions_string = true;
	}
	// WGL_EXT_framebuffer_sRGB
	if(!WGL_EXT_framebuffer_sRGB && wglext::checkExtension("WGL_EXT_framebuffer_sRGB"))
	{
		WGL_EXT_framebuffer_sRGB = true;
	}
	// WGL_EXT_make_current_read
	if(!WGL_EXT_make_current_read && wglext::checkExtension("WGL_EXT_make_current_read"))
	{
		wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)wglGetProcAddress("wglMakeContextCurrentEXT");
		wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC)wglGetProcAddress("wglGetCurrentReadDCEXT");
		if(wglMakeContextCurrentEXT) WGL_EXT_make_current_read = true;
	}
	// WGL_EXT_multisample
	if(!WGL_EXT_multisample && wglext::checkExtension("WGL_EXT_multisample"))
	{
		WGL_EXT_multisample = true;
	}
	// WGL_EXT_pbuffer
	if(!WGL_EXT_pbuffer && wglext::checkExtension("WGL_EXT_pbuffer"))
	{
		wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC)wglGetProcAddress("wglCreatePbufferEXT");
		wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC)wglGetProcAddress("wglGetPbufferDCEXT");
		wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC)wglGetProcAddress("wglReleasePbufferDCEXT");
		wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC)wglGetProcAddress("wglDestroyPbufferEXT");
		wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC)wglGetProcAddress("wglQueryPbufferEXT");
		if(wglCreatePbufferEXT) WGL_EXT_pbuffer = true;
	}
	// WGL_EXT_pixel_format
	if(!WGL_EXT_pixel_format && wglext::checkExtension("WGL_EXT_pixel_format"))
	{
		wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)wglGetProcAddress("wglGetPixelFormatAttribivEXT");
		wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)wglGetProcAddress("wglGetPixelFormatAttribfvEXT");
		wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)wglGetProcAddress("wglChoosePixelFormatEXT");
		if(wglGetPixelFormatAttribivEXT) WGL_EXT_pixel_format = true;
	}
	// WGL_EXT_pixel_format_packed_float
	if(!WGL_EXT_pixel_format_packed_float && wglext::checkExtension("WGL_EXT_pixel_format_packed_float"))
	{
		WGL_EXT_pixel_format_packed_float = true;
	}
	// WGL_EXT_swap_control
	if(!WGL_EXT_swap_control && wglext::checkExtension("WGL_EXT_swap_control"))
	{
		wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)wglGetProcAddress("wglSwapIntervalEXT");
		wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC)wglGetProcAddress("wglGetSwapIntervalEXT");
		if(wglSwapIntervalEXT) WGL_EXT_swap_control = true;
	}
	// WGL_EXT_swap_control
	if(!WGL_EXT_swap_control && wglext::checkExtension("WGL_EXT_swap_control"))
	{
		WGL_EXT_swap_control = true;
	}
	// WGL_EXT_swap_control_tear
	if(!WGL_EXT_swap_control_tear && wglext::checkExtension("WGL_EXT_swap_control_tear"))
	{
		WGL_EXT_swap_control_tear = true;
	}
	// WGL_I3D_digital_video_control
	if(!WGL_I3D_digital_video_control && wglext::checkExtension("WGL_I3D_digital_video_control"))
	{
		wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)wglGetProcAddress("wglGetDigitalVideoParametersI3D");
		wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)wglGetProcAddress("wglSetDigitalVideoParametersI3D");
		if(wglGetDigitalVideoParametersI3D) WGL_I3D_digital_video_control = true;
	}
	// WGL_I3D_gamma
	if(!WGL_I3D_gamma && wglext::checkExtension("WGL_I3D_gamma"))
	{
		wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)wglGetProcAddress("wglGetGammaTableParametersI3D");
		wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)wglGetProcAddress("wglSetGammaTableParametersI3D");
		wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC)wglGetProcAddress("wglGetGammaTableI3D");
		wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC)wglGetProcAddress("wglSetGammaTableI3D");
		if(wglGetGammaTableParametersI3D) WGL_I3D_gamma = true;
	}
	// WGL_I3D_genlock
	if(!WGL_I3D_genlock && wglext::checkExtension("WGL_I3D_genlock"))
	{
		wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC)wglGetProcAddress("wglEnableGenlockI3D");
		wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC)wglGetProcAddress("wglDisableGenlockI3D");
		wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC)wglGetProcAddress("wglIsEnabledGenlockI3D");
		wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC)wglGetProcAddress("wglGenlockSourceI3D");
		wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC)wglGetProcAddress("wglGetGenlockSourceI3D");
		wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)wglGetProcAddress("wglGenlockSourceEdgeI3D");
		wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)wglGetProcAddress("wglGetGenlockSourceEdgeI3D");
		wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)wglGetProcAddress("wglGenlockSampleRateI3D");
		wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)wglGetProcAddress("wglGetGenlockSampleRateI3D");
		wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)wglGetProcAddress("wglGenlockSourceDelayI3D");
		wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)wglGetProcAddress("wglGetGenlockSourceDelayI3D");
		wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
		if(wglEnableGenlockI3D) WGL_I3D_genlock = true;
	}
	// WGL_I3D_image_buffer
	if(!WGL_I3D_image_buffer && wglext::checkExtension("WGL_I3D_image_buffer"))
	{
		wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)wglGetProcAddress("wglCreateImageBufferI3D");
		wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)wglGetProcAddress("wglDestroyImageBufferI3D");
		wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)wglGetProcAddress("wglAssociateImageBufferEventsI3D");
		wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)wglGetProcAddress("wglReleaseImageBufferEventsI3D");
		if(wglCreateImageBufferI3D) WGL_I3D_image_buffer = true;
	}
	// WGL_I3D_swap_frame_lock
	if(!WGL_I3D_swap_frame_lock && wglext::checkExtension("WGL_I3D_swap_frame_lock"))
	{
		wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC)wglGetProcAddress("wglEnableFrameLockI3D");
		wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC)wglGetProcAddress("wglDisableFrameLockI3D");
		wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)wglGetProcAddress("wglIsEnabledFrameLockI3D");
		wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)wglGetProcAddress("wglQueryFrameLockMasterI3D");
		if(wglEnableFrameLockI3D) WGL_I3D_swap_frame_lock = true;
	}
	// WGL_I3D_swap_frame_usage
	if(!WGL_I3D_swap_frame_usage && wglext::checkExtension("WGL_I3D_swap_frame_usage"))
	{
		wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC)wglGetProcAddress("wglGetFrameUsageI3D");
		wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)wglGetProcAddress("wglBeginFrameTrackingI3D");
		wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC)wglGetProcAddress("wglEndFrameTrackingI3D");
		wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)wglGetProcAddress("wglQueryFrameTrackingI3D");
		if(wglGetFrameUsageI3D) WGL_I3D_swap_frame_usage = true;
	}
	// WGL_NV_DX_interop
	if(!WGL_NV_DX_interop && wglext::checkExtension("WGL_NV_DX_interop"))
	{
		wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)wglGetProcAddress("wglDXSetResourceShareHandleNV");
		wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC)wglGetProcAddress("wglDXOpenDeviceNV");
		wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC)wglGetProcAddress("wglDXCloseDeviceNV");
		wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC)wglGetProcAddress("wglDXRegisterObjectNV");
		wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC)wglGetProcAddress("wglDXUnregisterObjectNV");
		wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC)wglGetProcAddress("wglDXObjectAccessNV");
		wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC)wglGetProcAddress("wglDXLockObjectsNV");
		wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC)wglGetProcAddress("wglDXUnlockObjectsNV");
		if(wglDXSetResourceShareHandleNV) WGL_NV_DX_interop = true;
	}
	// WGL_NV_DX_interop2
	if(!WGL_NV_DX_interop2 && wglext::checkExtension("WGL_NV_DX_interop2"))
	{
		WGL_NV_DX_interop2 = true;
	}
	// WGL_NV_copy_image
	if(!WGL_NV_copy_image && wglext::checkExtension("WGL_NV_copy_image"))
	{
		wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC)wglGetProcAddress("wglCopyImageSubDataNV");
		if(wglCopyImageSubDataNV) WGL_NV_copy_image = true;
	}
	// WGL_NV_delay_before_swap
	if(!WGL_NV_delay_before_swap && wglext::checkExtension("WGL_NV_delay_before_swap"))
	{
		wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC)wglGetProcAddress("wglDelayBeforeSwapNV");
		if(wglDelayBeforeSwapNV) WGL_NV_delay_before_swap = true;
	}
	// WGL_NV_float_buffer
	if(!WGL_NV_float_buffer && wglext::checkExtension("WGL_NV_float_buffer"))
	{
		WGL_NV_float_buffer = true;
	}
	// WGL_NV_gpu_affinity
	if(!WGL_NV_gpu_affinity && wglext::checkExtension("WGL_NV_gpu_affinity"))
	{
		wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC)wglGetProcAddress("wglEnumGpusNV");
		wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC)wglGetProcAddress("wglEnumGpuDevicesNV");
		wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC)wglGetProcAddress("wglCreateAffinityDCNV");
		wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)wglGetProcAddress("wglEnumGpusFromAffinityDCNV");
		wglDeleteDCNV = (PFNWGLDELETEDCNVPROC)wglGetProcAddress("wglDeleteDCNV");
		if(wglEnumGpusNV) WGL_NV_gpu_affinity = true;
	}
	// WGL_NV_multigpu_context
	if(!WGL_NV_multigpu_context && wglext::checkExtension("WGL_NV_multigpu_context"))
	{
		WGL_NV_multigpu_context = true;
	}
	// WGL_NV_multisample_coverage
	if(!WGL_NV_multisample_coverage && wglext::checkExtension("WGL_NV_multisample_coverage"))
	{
		WGL_NV_multisample_coverage = true;
	}
	// WGL_NV_present_video
	if(!WGL_NV_present_video && wglext::checkExtension("WGL_NV_present_video"))
	{
		wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC)wglGetProcAddress("wglEnumerateVideoDevicesNV");
		wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC)wglGetProcAddress("wglBindVideoDeviceNV");
		wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC)wglGetProcAddress("wglQueryCurrentContextNV");
		if(wglEnumerateVideoDevicesNV) WGL_NV_present_video = true;
	}
	// WGL_NV_render_depth_texture
	if(!WGL_NV_render_depth_texture && wglext::checkExtension("WGL_NV_render_depth_texture"))
	{
		WGL_NV_render_depth_texture = true;
	}
	// WGL_NV_render_texture_rectangle
	if(!WGL_NV_render_texture_rectangle && wglext::checkExtension("WGL_NV_render_texture_rectangle"))
	{
		WGL_NV_render_texture_rectangle = true;
	}
	// WGL_NV_swap_group
	if(!WGL_NV_swap_group && wglext::checkExtension("WGL_NV_swap_group"))
	{
		wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC)wglGetProcAddress("wglJoinSwapGroupNV");
		wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC)wglGetProcAddress("wglBindSwapBarrierNV");
		wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC)wglGetProcAddress("wglQuerySwapGroupNV");
		wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)wglGetProcAddress("wglQueryMaxSwapGroupsNV");
		wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC)wglGetProcAddress("wglQueryFrameCountNV");
		wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC)wglGetProcAddress("wglResetFrameCountNV");
		if(wglJoinSwapGroupNV) WGL_NV_swap_group = true;
	}
	// WGL_NV_vertex_array_range
	if(!WGL_NV_vertex_array_range && wglext::checkExtension("WGL_NV_vertex_array_range"))
	{
		wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC)wglGetProcAddress("wglAllocateMemoryNV");
		wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC)wglGetProcAddress("wglFreeMemoryNV");
		if(wglAllocateMemoryNV && wglFreeMemoryNV) WGL_NV_vertex_array_range = true;
		else WGL_NV_vertex_array_range = false;
	}
	// WGL_NV_video_capture
	if(!WGL_NV_video_capture && wglext::checkExtension("WGL_NV_video_capture"))
	{
		wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglBindVideoCaptureDeviceNV");
		wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)wglGetProcAddress("wglEnumerateVideoCaptureDevicesNV");
		wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglLockVideoCaptureDeviceNV");
		wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglQueryVideoCaptureDeviceNV");
		wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)wglGetProcAddress("wglReleaseVideoCaptureDeviceNV");
		if(wglBindVideoCaptureDeviceNV && wglEnumerateVideoCaptureDevicesNV && wglLockVideoCaptureDeviceNV && wglQueryVideoCaptureDeviceNV && wglReleaseVideoCaptureDeviceNV) WGL_NV_video_capture = true;
		else WGL_NV_video_capture = false;
	}
	// WGL_NV_video_output
	if(!WGL_NV_video_output && wglext::checkExtension("WGL_NV_video_output"))
	{
		wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC)wglGetProcAddress("wglGetVideoDeviceNV");
		wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC)wglGetProcAddress("wglReleaseVideoDeviceNV");
		wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC)wglGetProcAddress("wglBindVideoImageNV");
		wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC)wglGetProcAddress("wglReleaseVideoImageNV");
		wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC)wglGetProcAddress("wglSendPbufferToVideoNV");
		wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC)wglGetProcAddress("wglGetVideoInfoNV");
		if(wglGetVideoDeviceNV&&wglReleaseVideoDeviceNV && wglBindVideoImageNV && wglReleaseVideoImageNV && wglSendPbufferToVideoNV && wglGetVideoInfoNV) WGL_NV_video_output = true;
		else WGL_NV_video_output = false;
	}
	// WGL_OML_sync_control
	if(!WGL_OML_sync_control && wglext::checkExtension("WGL_OML_sync_control"))
	{
		wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC)wglGetProcAddress("wglGetSyncValuesOML");
		wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC)wglGetProcAddress("wglGetMscRateOML");
		wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC)wglGetProcAddress("wglSwapBuffersMscOML");
		wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)wglGetProcAddress("wglSwapLayerBuffersMscOML");
		wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC)wglGetProcAddress("wglWaitForMscOML");
		wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC)wglGetProcAddress("wglWaitForSbcOML");
		if(wglGetMscRateOML && wglSwapBuffersMscOML && wglSwapLayerBuffersMscOML && wglWaitForMscOML && wglWaitForSbcOML) WGL_OML_sync_control = true;
		else WGL_OML_sync_control = false;
	}
	initialized = true;
	return IERR_NONE;
}

void cleanup(void)
{
	GlobalDummy.destroy();
}

bool checkExtension(const char* extension, bool use_dummy)
{
	if(!extension) return false;
	const int ext_len = std::strlen(extension);
	if(ext_len <= 0) return false;
	if(use_dummy) 
	{
		if(glw::Dummy::IERR_NONE != GlobalDummy.init() || !GlobalDummy.makeCurrent()) return false;
		if(!wglGetCurrentContext()) return false;
	}
	// WGL_ARB_extensions_string
	if(!wglGetExtensionsStringARB)
	{
		wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)wglGetProcAddress("wglGetExtensionsStringARB");
		if(wglGetExtensionsStringARB && !WGL_ARB_extensions_string) WGL_ARB_extensions_string = 1;
	}
	const char* wgl_extensions;
	if(WGL_ARB_extensions_string)
		wgl_extensions = wglGetExtensionsStringARB(wglGetCurrentDC());
	else wgl_extensions = (const char*)glGetString(GL_EXTENSIONS);
	if(wgl_extensions)
	{
		int i = 0, last_i = 0, len = 0;
		for(i=0; i<0xfffff; ++i)
		{
			switch (wgl_extensions[i])
			{
				case '\0':
					len = i - last_i;
					if(len == ext_len && 0 == std::strncmp(&wgl_extensions[last_i], extension, len))
						return true;
					return false;
				case ' ':
					len = i - last_i;
					if(len == ext_len && 0 == std::strncmp(&wgl_extensions[last_i], extension, len))
						return true;
					last_i = i + 1;
				default:
					continue;
			}
		}
	}
	return false;
}

} // namespace axl.glw.wglext
} // namespace axl.glw
} // namespace axl