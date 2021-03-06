/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SRC_TRACED_PROBES_PACKAGES_LIST_PACKAGES_LIST_PARSER_H_
#define SRC_TRACED_PROBES_PACKAGES_LIST_PACKAGES_LIST_PARSER_H_

#include <inttypes.h>
#include <string>

namespace perfetto {

struct Package {
  std::string name;
  uint64_t uid = 0;
  bool debuggable = false;
  bool profileable_from_shell = false;
  int64_t version_code = 0;
};

bool ReadPackagesListLine(char* line, Package* package);
}  // namespace perfetto

#endif  // SRC_TRACED_PROBES_PACKAGES_LIST_PACKAGES_LIST_PARSER_H_
