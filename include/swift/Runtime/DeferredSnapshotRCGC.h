//
// Created by Elad Nachmias (eladnah@gmail.com) on 08/02/2020.
//

#ifndef SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H
#define SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H

#include "swift/Runtime/Config.h"
#include "HeapObject.h"

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

}

#endif //SWIFT_INC_RT_DEFERREDSNAPSHOTRCGC_H
