# =============================================================================
# Copyright (c) 2023, NVIDIA CORPORATION.
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
# in compliance with the License. You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software distributed under the License
# is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
# or implied. See the License for the specific language governing permissions and limitations under
# the License.
# =============================================================================

cmake_minimum_required(VERSION 3.26.4 FATAL_ERROR)

set(rmm_version 24.02.00)

project(
  rmm_rust_bindings
  VERSION ${rmm_version}
  LANGUAGES CXX
)

find_package(rmm ${rmm_version} REQUIRED)

# ##################################################################################################
# * library targets -------------------------------------------------------------------------------

add_library(
  rmm_rust_bindings
  STATIC
  src/cuda_memory_resource.cpp
)

# Specify include paths for the current target and dependents
target_include_directories(
  rmm_rust_bindings
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# Specify the target module library dependencies
target_link_libraries(
  rmm_rust_bindings
  PUBLIC rmm::rmm
)
