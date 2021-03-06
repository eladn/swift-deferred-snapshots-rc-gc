//
// Created by Elad Nachmias (eladnah@gmail.com) on 08/02/2020.
//

#ifndef SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H
#define SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H

#include "swift/Runtime/Config.h"
#include "HeapObject.h"
#include <atomic>

namespace swift {

SWIFT_RUNTIME_EXPORT
void swift_rt_gc_debug_aux(void);

SWIFT_RUNTIME_EXPORT
void swift_rt_mutator_write_barrier(HeapObject *object);

SWIFT_RUNTIME_EXPORT
void swift_rt_mutator_poll_upon_safepoint(void);

SWIFT_RUNTIME_EXPORT
void swift_rt_gc_thread_main(void);

SWIFT_RUNTIME_EXPORT
void swift_rt_initialize_gc(void);

SWIFT_RUNTIME_EXPORT
int DeferredSnapshotRCGCData = 8;

SWIFT_RUNTIME_EXPORT
volatile std::atomic<uint32_t> DeferredSnapshotRCGCIsInitialized(0);

}

#endif //SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H
