// Copyright 2018, Bosch Software Innovations GmbH.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSBAG2_TRANSPORT__CONVERT_OPTIONS_HPP_
#define ROSBAG2_TRANSPORT__CONVERT_OPTIONS_HPP_

#include <chrono>
#include <string>
#include <vector>

namespace rosbag2_transport
{
struct ConvertOptions
{
public:
  std::string rmw_serialization_format;
  std::string compression_mode = "";
  std::string compression_format = "";
};

}  // namespace rosbag2_transport

#endif  // ROSBAG2_TRANSPORT__CONVERT_OPTIONS_HPP_
