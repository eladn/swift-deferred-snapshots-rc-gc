//
// Created by Elad Nachmias on 08/02/2020.
//

#include "swift/Runtime/HeapObject.h"
#include "swift/Runtime/Heap.h"
#include "RuntimeInvocationsTracking.h"
#include "swift/Runtime/InstrumentsSupport.h"

#include "DeferredSnapshotRCGC.h"
#include "swift/Runtime/DeferredSnapshotRCGC.h"

using namespace swift;

void swift::swift_rt_gc_debug_aux(void) {
  _swift_rt_gc_debug_aux();
}
static void _swift_rt_gc_debug_aux_() {
//  SWIFT_RT_TRACK_INVOCATION(swift_rt_gc_debug_aux);

  printf("swift_rt_gc_debug_aux()\n");
}
void (*swift::_swift_rt_gc_debug_aux)() = _swift_rt_gc_debug_aux_;


void swift::swift_rt_mutator_write_barrier(HeapObject *object) {
  _swift_rt_mutator_write_barrier(object);
}
static void _swift_rt_mutator_write_barrier_(HeapObject *object) {
  printf("swift_rt_mutator_write_barrier()\n");
}
void (*swift::_swift_rt_mutator_write_barrier)(HeapObject *) = _swift_rt_mutator_write_barrier_;


void swift::swift_rt_mutator_poll_upon_safepoint(void) {
  _swift_rt_mutator_poll_upon_safepoint();
}
static void _swift_rt_mutator_poll_upon_safepoint_() {
  printf("swift_rt_mutator_poll_upon_safepoint()\n");
}
void (*swift::_swift_rt_mutator_poll_upon_safepoint)() = _swift_rt_mutator_poll_upon_safepoint_;


void swift::swift_rt_gc_thread_main(void) {
  _swift_rt_gc_thread_main();
}
static void _swift_rt_gc_thread_main_() {
  printf("swift_rt_gc_thread_main()\n");
}
void (*swift::_swift_rt_gc_thread_main)() = _swift_rt_gc_thread_main_;


void swift::swift_rt_initialize_gc(void) {
  _swift_rt_initialize_gc();
}
static void _swift_rt_initialize_gc_() {
  printf("swift_rt_initialize_gc()\n");
}
void (*swift::_swift_rt_initialize_gc)() = _swift_rt_initialize_gc_;
