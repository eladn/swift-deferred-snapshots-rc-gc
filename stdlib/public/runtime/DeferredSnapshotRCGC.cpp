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
