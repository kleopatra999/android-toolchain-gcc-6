
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_locks_AbstractQueuedSynchronizer$Node__
#define __java_util_concurrent_locks_AbstractQueuedSynchronizer$Node__

#pragma interface

#include <java/lang/Object.h>

class java::util::concurrent::locks::AbstractQueuedSynchronizer$Node : public ::java::lang::Object
{

public: // actually package-private
  jboolean isShared();
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * predecessor();
  AbstractQueuedSynchronizer$Node();
  AbstractQueuedSynchronizer$Node(::java::lang::Thread *, ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node *);
  AbstractQueuedSynchronizer$Node(::java::lang::Thread *, jint);
  static const jint CANCELLED = 1;
  static const jint SIGNAL = -1;
  static const jint CONDITION = -2;
  static ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * SHARED;
  static ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * EXCLUSIVE;
  jint volatile __attribute__((aligned(__alignof__( ::java::lang::Object)))) waitStatus;
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * volatile prev;
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * volatile next;
  ::java::lang::Thread * volatile thread;
  ::java::util::concurrent::locks::AbstractQueuedSynchronizer$Node * nextWaiter;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_locks_AbstractQueuedSynchronizer$Node__
