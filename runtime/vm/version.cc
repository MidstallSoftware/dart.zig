// Copyright (c) 2012, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#include "vm/version.h"

#include "vm/globals.h"

namespace dart {

const char* Version::String() {
  return str_;
}

const char* Version::SnapshotString() {
  return snapshot_hash_;
}

const char* Version::CommitString() {
  return commit_;
}

const char* Version::SdkHash() {
  return git_short_hash_;
}

const char* Version::Channel() {
  return channel_;
}

const char* Version::snapshot_hash_ = "ddcbb32cd5a0c7787";
const char* Version::str_ =
    "3.7.0-204.0.dev (dev) (Mon Dec 2 00:03:42 2024 -0800)"
    " on \"" kHostOperatingSystemName
    "_"
#if defined(USING_SIMULATOR)
    "sim"
#endif
    kTargetArchitectureName "\"";
const char* Version::commit_ = "3.7.0-204.0.dev";
const char* Version::git_short_hash_ = "4bc4d01";
const char* Version::channel_ = "dev";

}  // namespace dart
