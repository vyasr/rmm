#include <cuda_memory_resource.hpp>
#include <memory>
#include <rmm/mr/device/cuda_memory_resource.hpp>

CudaMemoryResource::CudaMemoryResource() = default;
CudaMemoryResource::~CudaMemoryResource() = default;

std::unique_ptr<CudaMemoryResource> new_cuda_memory_resource() {
  return std::make_unique<CudaMemoryResource>();
}
