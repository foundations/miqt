package qt

/*

#include "gen_qtextlist.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTextList struct {
	h *C.QTextList
	*QTextBlockGroup
}

func (this *QTextList) cPointer() *C.QTextList {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextList) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextList constructs the type using only CGO pointers.
func newQTextList(h *C.QTextList) *QTextList {
	if h == nil {
		return nil
	}
	var outptr_QTextBlockGroup *C.QTextBlockGroup = nil
	C.QTextList_virtbase(h, &outptr_QTextBlockGroup)

	return &QTextList{h: h,
		QTextBlockGroup: newQTextBlockGroup(outptr_QTextBlockGroup)}
}

// UnsafeNewQTextList constructs the type using only unsafe pointers.
func UnsafeNewQTextList(h unsafe.Pointer) *QTextList {
	return newQTextList((*C.QTextList)(h))
}

// NewQTextList constructs a new QTextList object.
func NewQTextList(doc *QTextDocument) *QTextList {

	return newQTextList(C.QTextList_new(doc.cPointer()))
}

func (this *QTextList) MetaObject() *QMetaObject {
	return newQMetaObject(C.QTextList_metaObject(this.h))
}

func (this *QTextList) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTextList_metacast(this.h, param1_Cstring))
}

func QTextList_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextList_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextList) Count() int {
	return (int)(C.QTextList_count(this.h))
}

func (this *QTextList) IsEmpty() bool {
	return (bool)(C.QTextList_isEmpty(this.h))
}

func (this *QTextList) Item(i int) *QTextBlock {
	_goptr := newQTextBlock(C.QTextList_item(this.h, (C.int)(i)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTextList) ItemNumber(param1 *QTextBlock) int {
	return (int)(C.QTextList_itemNumber(this.h, param1.cPointer()))
}

func (this *QTextList) ItemText(param1 *QTextBlock) string {
	var _ms C.struct_miqt_string = C.QTextList_itemText(this.h, param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTextList) RemoveItem(i int) {
	C.QTextList_removeItem(this.h, (C.int)(i))
}

func (this *QTextList) Remove(param1 *QTextBlock) {
	C.QTextList_remove(this.h, param1.cPointer())
}

func (this *QTextList) Add(block *QTextBlock) {
	C.QTextList_add(this.h, block.cPointer())
}

func (this *QTextList) SetFormat(format *QTextListFormat) {
	C.QTextList_setFormat(this.h, format.cPointer())
}

func (this *QTextList) Format() *QTextListFormat {
	_goptr := newQTextListFormat(C.QTextList_format(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QTextList_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextList_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextList_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTextList_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTextList_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// BlockList can only be called from a QTextList that was directly constructed.
func (this *QTextList) BlockList() []QTextBlock {

	var _dynamic_cast_ok C.bool = false
	var _ma C.struct_miqt_array = C.QTextList_protectedbase_blockList(&_dynamic_cast_ok, unsafe.Pointer(this.h))
	_ret := make([]QTextBlock, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextBlock)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextBlock(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	_method_ret := _ret

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QTextList that was directly constructed.
func (this *QTextList) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QTextList_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QTextList that was directly constructed.
func (this *QTextList) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextList_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QTextList that was directly constructed.
func (this *QTextList) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QTextList_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QTextList that was directly constructed.
func (this *QTextList) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QTextList_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QTextList) callVirtualBase_BlockInserted(block *QTextBlock) {

	C.QTextList_virtualbase_blockInserted(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockInserted(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	ok := C.QTextList_override_virtual_blockInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_blockInserted
func miqt_exec_callback_QTextList_blockInserted(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	gofunc((&QTextList{h: self}).callVirtualBase_BlockInserted, slotval1)

}

func (this *QTextList) callVirtualBase_BlockRemoved(block *QTextBlock) {

	C.QTextList_virtualbase_blockRemoved(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockRemoved(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	ok := C.QTextList_override_virtual_blockRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_blockRemoved
func miqt_exec_callback_QTextList_blockRemoved(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	gofunc((&QTextList{h: self}).callVirtualBase_BlockRemoved, slotval1)

}

func (this *QTextList) callVirtualBase_BlockFormatChanged(block *QTextBlock) {

	C.QTextList_virtualbase_blockFormatChanged(unsafe.Pointer(this.h), block.cPointer())

}
func (this *QTextList) OnBlockFormatChanged(slot func(super func(block *QTextBlock), block *QTextBlock)) {
	ok := C.QTextList_override_virtual_blockFormatChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_blockFormatChanged
func miqt_exec_callback_QTextList_blockFormatChanged(self *C.QTextList, cb C.intptr_t, block *C.QTextBlock) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(block *QTextBlock), block *QTextBlock))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTextBlock(block)

	gofunc((&QTextList{h: self}).callVirtualBase_BlockFormatChanged, slotval1)

}

func (this *QTextList) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QTextList_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QTextList) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QTextList_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_event
func miqt_exec_callback_QTextList_event(self *C.QTextList, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QTextList{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QTextList) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QTextList_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QTextList) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QTextList_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_eventFilter
func miqt_exec_callback_QTextList_eventFilter(self *C.QTextList, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QTextList{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QTextList) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QTextList_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextList) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QTextList_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_timerEvent
func miqt_exec_callback_QTextList_timerEvent(self *C.QTextList, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QTextList{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QTextList) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QTextList_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextList) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QTextList_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_childEvent
func miqt_exec_callback_QTextList_childEvent(self *C.QTextList, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QTextList{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QTextList) callVirtualBase_CustomEvent(event *QEvent) {

	C.QTextList_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QTextList) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QTextList_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_customEvent
func miqt_exec_callback_QTextList_customEvent(self *C.QTextList, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QTextList{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QTextList) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QTextList_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextList) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextList_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_connectNotify
func miqt_exec_callback_QTextList_connectNotify(self *C.QTextList, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextList{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QTextList) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QTextList_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QTextList) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QTextList_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QTextList_disconnectNotify
func miqt_exec_callback_QTextList_disconnectNotify(self *C.QTextList, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QTextList{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QTextList) Delete() {
	C.QTextList_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextList) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextList) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
