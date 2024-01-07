#pragma once
#include <memory>

namespace rmm  {
namespace mr {
    class cuda_memory_resource;
} // namespace mr
} // namespace rmm

class CudaMemoryResource {
public:
  CudaMemoryResource();
  ~CudaMemoryResource();
private:
  std::unique_ptr<rmm::mr::cuda_memory_resource> resource{};
};

class CudaMemoryResource;
std::unique_ptr<CudaMemoryResource> new_cuda_memory_resource();
