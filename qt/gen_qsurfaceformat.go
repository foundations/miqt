package qt

/*

#include "gen_qsurfaceformat.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QSurfaceFormat struct {
	h *C.QSurfaceFormat
}

func (this *QSurfaceFormat) cPointer() *C.QSurfaceFormat {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSurfaceFormat(h *C.QSurfaceFormat) *QSurfaceFormat {
	if h == nil {
		return nil
	}
	return &QSurfaceFormat{h: h}
}

func newQSurfaceFormat_U(h unsafe.Pointer) *QSurfaceFormat {
	return newQSurfaceFormat((*C.QSurfaceFormat)(h))
}

// NewQSurfaceFormat constructs a new QSurfaceFormat object.
func NewQSurfaceFormat() *QSurfaceFormat {
	ret := C.QSurfaceFormat_new()
	return newQSurfaceFormat(ret)
}

// NewQSurfaceFormat2 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat2(options int) *QSurfaceFormat {
	ret := C.QSurfaceFormat_new2((C.int)(options))
	return newQSurfaceFormat(ret)
}

// NewQSurfaceFormat3 constructs a new QSurfaceFormat object.
func NewQSurfaceFormat3(other *QSurfaceFormat) *QSurfaceFormat {
	ret := C.QSurfaceFormat_new3(other.cPointer())
	return newQSurfaceFormat(ret)
}

func (this *QSurfaceFormat) OperatorAssign(other *QSurfaceFormat) {
	C.QSurfaceFormat_OperatorAssign(this.h, other.cPointer())
}

func (this *QSurfaceFormat) SetDepthBufferSize(size int) {
	C.QSurfaceFormat_SetDepthBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) DepthBufferSize() int {
	ret := C.QSurfaceFormat_DepthBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetStencilBufferSize(size int) {
	C.QSurfaceFormat_SetStencilBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) StencilBufferSize() int {
	ret := C.QSurfaceFormat_StencilBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetRedBufferSize(size int) {
	C.QSurfaceFormat_SetRedBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) RedBufferSize() int {
	ret := C.QSurfaceFormat_RedBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetGreenBufferSize(size int) {
	C.QSurfaceFormat_SetGreenBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) GreenBufferSize() int {
	ret := C.QSurfaceFormat_GreenBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetBlueBufferSize(size int) {
	C.QSurfaceFormat_SetBlueBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) BlueBufferSize() int {
	ret := C.QSurfaceFormat_BlueBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetAlphaBufferSize(size int) {
	C.QSurfaceFormat_SetAlphaBufferSize(this.h, (C.int)(size))
}

func (this *QSurfaceFormat) AlphaBufferSize() int {
	ret := C.QSurfaceFormat_AlphaBufferSize(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetSamples(numSamples int) {
	C.QSurfaceFormat_SetSamples(this.h, (C.int)(numSamples))
}

func (this *QSurfaceFormat) Samples() int {
	ret := C.QSurfaceFormat_Samples(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetSwapBehavior(behavior uintptr) {
	C.QSurfaceFormat_SetSwapBehavior(this.h, (C.uintptr_t)(behavior))
}

func (this *QSurfaceFormat) SwapBehavior() uintptr {
	ret := C.QSurfaceFormat_SwapBehavior(this.h)
	return (uintptr)(ret)
}

func (this *QSurfaceFormat) HasAlpha() bool {
	ret := C.QSurfaceFormat_HasAlpha(this.h)
	return (bool)(ret)
}

func (this *QSurfaceFormat) SetProfile(profile uintptr) {
	C.QSurfaceFormat_SetProfile(this.h, (C.uintptr_t)(profile))
}

func (this *QSurfaceFormat) Profile() uintptr {
	ret := C.QSurfaceFormat_Profile(this.h)
	return (uintptr)(ret)
}

func (this *QSurfaceFormat) SetRenderableType(typeVal uintptr) {
	C.QSurfaceFormat_SetRenderableType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QSurfaceFormat) RenderableType() uintptr {
	ret := C.QSurfaceFormat_RenderableType(this.h)
	return (uintptr)(ret)
}

func (this *QSurfaceFormat) SetMajorVersion(majorVersion int) {
	C.QSurfaceFormat_SetMajorVersion(this.h, (C.int)(majorVersion))
}

func (this *QSurfaceFormat) MajorVersion() int {
	ret := C.QSurfaceFormat_MajorVersion(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetMinorVersion(minorVersion int) {
	C.QSurfaceFormat_SetMinorVersion(this.h, (C.int)(minorVersion))
}

func (this *QSurfaceFormat) MinorVersion() int {
	ret := C.QSurfaceFormat_MinorVersion(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetVersion(major int, minor int) {
	C.QSurfaceFormat_SetVersion(this.h, (C.int)(major), (C.int)(minor))
}

func (this *QSurfaceFormat) Stereo() bool {
	ret := C.QSurfaceFormat_Stereo(this.h)
	return (bool)(ret)
}

func (this *QSurfaceFormat) SetStereo(enable bool) {
	C.QSurfaceFormat_SetStereo(this.h, (C.bool)(enable))
}

func (this *QSurfaceFormat) SetOption(opt int) {
	C.QSurfaceFormat_SetOption(this.h, (C.int)(opt))
}

func (this *QSurfaceFormat) TestOption(opt int) bool {
	ret := C.QSurfaceFormat_TestOption(this.h, (C.int)(opt))
	return (bool)(ret)
}

func (this *QSurfaceFormat) SetOptions(options int) {
	C.QSurfaceFormat_SetOptions(this.h, (C.int)(options))
}

func (this *QSurfaceFormat) SetOptionWithOption(option uintptr) {
	C.QSurfaceFormat_SetOptionWithOption(this.h, (C.uintptr_t)(option))
}

func (this *QSurfaceFormat) TestOptionWithOption(option uintptr) bool {
	ret := C.QSurfaceFormat_TestOptionWithOption(this.h, (C.uintptr_t)(option))
	return (bool)(ret)
}

func (this *QSurfaceFormat) Options() int {
	ret := C.QSurfaceFormat_Options(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SwapInterval() int {
	ret := C.QSurfaceFormat_SwapInterval(this.h)
	return (int)(ret)
}

func (this *QSurfaceFormat) SetSwapInterval(interval int) {
	C.QSurfaceFormat_SetSwapInterval(this.h, (C.int)(interval))
}

func (this *QSurfaceFormat) ColorSpace() uintptr {
	ret := C.QSurfaceFormat_ColorSpace(this.h)
	return (uintptr)(ret)
}

func (this *QSurfaceFormat) SetColorSpace(colorSpace uintptr) {
	C.QSurfaceFormat_SetColorSpace(this.h, (C.uintptr_t)(colorSpace))
}

func QSurfaceFormat_SetDefaultFormat(format *QSurfaceFormat) {
	C.QSurfaceFormat_SetDefaultFormat(format.cPointer())
}

func QSurfaceFormat_DefaultFormat() *QSurfaceFormat {
	ret := C.QSurfaceFormat_DefaultFormat()
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSurfaceFormat(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSurfaceFormat) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSurfaceFormat) SetOption2(option uintptr, on bool) {
	C.QSurfaceFormat_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func (this *QSurfaceFormat) Delete() {
	C.QSurfaceFormat_Delete(this.h)
}
